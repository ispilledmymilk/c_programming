#include <stdio.h>

int monotonePath(int m, int n, int a[m][n]) {
    // If top left or bottom right is 0, no path is possible
    if (a[0][0] == 0 || a[m-1][n-1] == 0) {
        return 0;
    }

    // Create a dp array to store whether a path exists to each cell
    int dp[m][n];

    // Initialize the dp array
    dp[0][0] = 1;  // The starting point is always reachable

    // Fill the first row (can only come from the left)
    for (int j = 1; j < n; j++) {
        dp[0][j] = (a[0][j] == 1 && dp[0][j-1] == 1) ? 1 : 0;
    }

    // Fill the first column (can only come from above)
    for (int i = 1; i < m; i++) {
        dp[i][0] = (a[i][0] == 1 && dp[i-1][0] == 1) ? 1 : 0;
    }

    // Fill the rest of the dp array
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            // The cell is reachable if it's 1 and there's a path from above or left
            if (a[i][j] == 1) {
                dp[i][j] = (dp[i-1][j] == 1 || dp[i][j-1] == 1) ? 1 : 0;
            } else {
                dp[i][j] = 0;  // Blocked cell
            }
        }
    }

    // Return whether the bottom-right corner is reachable
    return dp[m - 1][n - 1];
}

/*int main() {
    int m = 10;
    int n = 12;
    int a[][12]= {{1,1,0,0,0,0,0,0,0,0,0,0},
            {0,1,1,0,0,0,0,0,0,0,0,0},
            {0,0,1,1,1,1,0,0,0,0,0,0},
            {0,0,1,0,0,1,0,0,0,0,0,0},
            {0,1,1,0,0,1,1,0,0,0,0,0},
            {0,1,0,0,0,0,1,0,0,0,0,0},
            {0,1,1,0,0,0,1,1,1,0,0,0},
            {0,0,1,0,0,0,0,0,1,0,0,0},
            {0,0,1,1,1,1,1,1,1,1,1,0},
            {0,0,0,0,0,0,0,0,0,0,1,1}};

    if (monotonePath(m, n, a)) {
        printf("Monotone path exists\n");
    } else {
        printf("No monotone path\n");
    }

    return 0;
}*/
