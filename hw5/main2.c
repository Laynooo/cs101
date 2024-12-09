#include <stdio.h>
#include <math.h>

int main()
{
    double PI=0,x=0;
    int sign=1;
    for(int i=1;;i++){
        x=4.0/((2*i)-1);
        PI = PI+(x*sign);
        sign = (sign*-1);
        if (fabs(PI - 3.14159) <= 0.000001) {
            break;
        }
    }
    printf("PI = %.5f\n", PI);
    printf("x=%f",x);
    return 0;
}
