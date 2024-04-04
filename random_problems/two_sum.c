#include <stdio.h>

int main(){
    int target = 0;
    printf("Enter the target number: ");
    scanf("%d", &target);

    
    int n = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int nums[n];
    for(int i = 0; i<n; ++i){
        printf("Enter the element: ");
        scanf("%d", &nums[i]);
    }
    
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(nums[i] + nums[j] == target){
                printf("[%d, %d]", i, j);
            }
        }
    }
}
