#include<stdio.h>
int main()
{
    int R, r;
    double pi=3.14159,VOLUME;
    scanf("%d",&R);
    r = (double) R;
    VOLUME = (4/3.0) * pi * r*r*r;

    printf("VOLUME = %0.3lf\n",VOLUME);

    return 0;


}
