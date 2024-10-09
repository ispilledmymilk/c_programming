#include <stdio.h>
#include <math.h>
#include <assert.h>
#define PI acos(-1)


/*double f(double x) {
    return x * x;
}
    
double f2(double x){
    return cos(x);
}
    
double f3(double x){
    return sqrt(x);
}
*/

double trapezoidal(double (*f)(double), double a, double b, double epsilon, int n) {
    
    double h, integral_old, integral_new, sum;
    int i;

    h = (b - a) / n;
    integral_old = 0.5 * (f(a) + f(b));  

    
    for (i = 1; i < n; i++) {
        integral_old += f(a + i * h);  
    }
    integral_old *= h;  
    
    
    while (1) {
        n *= 2;  
        h = (b - a) / n;  
        sum = 0.0;

        
        for (i = 1; i < n; i += 2) {
            sum += f(a + i * h);
        }

        
        integral_new = 0.5 * integral_old + sum * h;  

        
        if (fabs(integral_new - integral_old) < epsilon) {
            return integral_new;  
        }

        
        integral_old = integral_new;
    }
}




/*int main(){
    assert(fabs(trapezoidal(f2, PI/2, 3, 0.00001, 5) - -0.858879) <=
0.000001);
 assert(fabs(trapezoidal(f3, 1, 4, 0.00001, 2) - 4.666) <= 0.001);

    
}*/
