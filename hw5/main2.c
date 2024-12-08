#include <stdio.h>

int main()
{
    double PI=0,x=0;
    int sign=1;
    for(int i=1;;i++){
        x=4.0/((2*i)-1);
        PI = PI+(x*sign);
        sign = (sign*-1);
        if ((PI - 3.14159) <= 0.00001 && (3.14159 - PI) <= 0.00001) {
            break;
        }
    }
    printf("PI = %.5f\n", PI);
    printf("x=%f",x);
    return 0;
}
