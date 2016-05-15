#include<stdio.h>
int main(void)
{
    int s,a;
    scanf("%d",&a);
    for(s=1;s<=10;s++)
        printf("%d x %d = %d\n",s,a,s*a);
    return 0;
}
