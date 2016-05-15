#include<stdio.h>
int main()
{
    int a1,a2,b1,b2;
    float a3,b3,VALOR_A_PAGAR;
    scanf("%d",&a1);
    scanf("%d",&a2);
    scanf("%f",&a3);
    scanf("%d",&b1);
    scanf("%d",&b2);

    scanf("%f",&b3);
    VALOR_A_PAGAR = ((a2*a3)+(b2*b3));
    printf("VALOR A PAGAR: R$ %0.2f\n",VALOR_A_PAGAR);

    return 0;
}
