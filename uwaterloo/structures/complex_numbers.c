#include <stdio.h>
#include <math.h>

typedef struct {
    double real, imag;
} complex_t;

// the below functions are for taking input and printing the complex num
int scan_complex(complex_t *c);
void print_complex(complex_t c);
// the below are like function prototypes with return type being a structure (complex_t)
complex_t add_complex(complex_t c1, complex_t c2){
    complex_t csum;
    csum.real = c1.real + c2.real;
    csum.imag = c1.imag + c2.imag;
    
    return(csum);
}

complex_t sub_complex(complex_t c1, complex_t c2){
    complex_t csub;
    csub.real = c1.real - c2.real;
    csub.imag = c1.imag - c2.imag;
    return(csub);
}

complex_t mul_complex(complex_t c1, complex_t c2){
    complex_t cmul;
    cmul.real = ((c1.real * c2.real) - (c2.imag * c1.imag));
    cmul.imag = ((c1.real * c2.imag) + (c1.imag * c2.real));
    return(cmul);
}
complex_t div_complex(complex_t c1, complex_t c2){
    complex_t cdiv;
    int denom = c2.real*c2.real + c2.imag*c2.imag;
    cdiv.real = (c1.real*c2.real + c1.imag*c2.imag)/denom;
    cdiv.imag = (c1.imag*c2.real - c1.real*c2.imag)/denom;
    
    return(cdiv);
}
complex_t abs_complex(complex_t c){
    complex_t cabss;
    cabss.real = sqrt(c.real*c.real + c.imag*c.imag);
    cabss.imag = 0;
    
    return(cabss);
}

int main(){
    complex_t com1, com2;
    //taking input for 2 complex numbers
    printf("Enter the real and imaginary parts of a complex number\n");
    printf("Separate it be a space> ");
    scan_complex(&com1);
    printf("Enter the second number> ");
    scan_complex(&com2);
    printf("\n");
    
    //sum displays
    print_complex(com1);
    printf(" + ");
    print_complex(com2);
    printf(" = ");
    print_complex(add_complex(com1, com2));
    
    printf("\n");
    //difference displays
    print_complex(com1);
    printf(" - ");
    print_complex(com2);
    printf(" = ");
    print_complex(sub_complex(com1, com2));
    
    printf("\n");
    //product displays
    print_complex(com1);
    printf(" * ");
    print_complex(com2);
    printf(" = ");
    print_complex(mul_complex(com1, com2));
    
    printf("\n");
    //division displays
    print_complex(com1);
    printf(" / ");
    print_complex(com2);
    printf(" = ");
    print_complex(div_complex(com1, com2));
    
    printf("\n\n|");
    //abs displays
    print_complex(com1);
    
    printf("| = ");
    print_complex(abs_complex(com1));
    
    printf("\n");
    
}

int scan_complex(complex_t *c){
    int status;
    status = scanf("%lf%lf", &c->real, &c->imag);
    
    if(status == 2){
        status = 1;
    }
    else if(status != EOF){
        status = 0;
    }
    return (status);
}

void print_complex(complex_t c){
    double a, b;
    char sign;
    a = c.real;
    b = c.imag;
    
    printf("(");
    
    if(fabs(a) < 0.005 && fabs(b) < 0.005){
        printf("%.2f", 0.0);
    }
    else if(fabs(b) < 0.005){
        printf("%.2f", a);
    }
    else if(fabs(a) < 0.005){
        printf("%.2fi", b);
    }
    else{
        if (b<0){
            sign = '-';
        }
        else{
            sign = '+';
        }
        
        printf("%.2f %c %.2fi", a, sign, fabs(b));
    }
    printf(")");
}
