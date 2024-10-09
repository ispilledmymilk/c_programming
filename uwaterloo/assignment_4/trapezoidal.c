#include <stdio.h>
#include <math.h>
#include <assert.h>
#define PI acos(-1)

// Function to implement the trapezoidal rule
double trapezoidal(double (*f)(double), double a, double b, double epsilon, int n) {
    
    double h, integral_old, integral_new, sum;
    int i;

    // Calculate the first approximation with n intervals
    h = (b - a) / n;  // width of each sub-interval
    integral_old = 0.5 * (f(a) + f(b));  // Trapezoidal rule for first approximation

    // Sum the intermediate terms
    for (i = 1; i < n; i++) {
        integral_old += f(a + i * h);  // Sum over all the intermediate points
    }
    integral_old *= h;  // Multiply by the interval width

    // Refine the approximation by increasing the number of intervals
    while (1) {
        n *= 2;  // Double the number of intervals
        h = (b - a) / n;  // New interval width
        sum = 0.0;

        // Sum the function values at the new points (midpoints of the old intervals)
        for (i = 1; i < n; i += 2) {
            sum += f(a + i * h);
        }

        // Calculate the new integral using the sum of the midpoints
        integral_new = 0.5 * integral_old + sum * h;  // New trapezoidal approximation

        // Check if the difference between the new and old approximation is within the tolerance
        if (fabs(integral_new - integral_old) < epsilon) {
            return integral_new;  // If difference is smaller than epsilon, return the result
        }

        // Update the old integral with the new value for the next iteration
        integral_old = integral_new;
    }
}

// Example function to integrate: f(x) = x^2
double f(double x) {
    return x * x;
}

double f2(double x){
    return cos(x);
}

double f3(double x){
    return sqrt(x);
}

int main(){
    double a = 0.0, b = 1.0;  // Integration limits
    double epsilon = 1e-6;  // Desired accuracy
    int n = 10;  // Initial number of intervals

    double result = trapezoidal(f, a, b, epsilon, n);
    printf("The integral is approximately: %lf\n", result);
    
    assert(fabs(trapezoidal(f2, PI/2, 3, 0.00001, 5) - -0.858879) <=
0.000001);
 assert(fabs(trapezoidal(f3, 1, 4, 0.00001, 2) - 4.666) <= 0.001);

    return 0;
}
