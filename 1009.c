#include<stdio.h>
int main()
{
  char name[100];
  double salary,comision,sales;
  scanf("%s\n",&name);
  scanf("%lf\n",&salary);
  scanf("%lf",&sales);
  comision = (salary + (sales*0.15));
  printf("TOTAL = R$ %.2lf\n",comision);

  return 0;
}
