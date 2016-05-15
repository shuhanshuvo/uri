#include<stdio.h>
#define pi 3.14159
int main ()
{
    double a,b,c;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3){
        double tringle=.5*a*c;
        double circle=pi*c*c;
        double trapezium=.5*(a+b)*c;
        double square=b*b;
        double rectangle=a*b;
        printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRECTANGULO: %.3lf\n",tringle,circle,trapezium,square,rectangle);

    }

    return 0;

}
