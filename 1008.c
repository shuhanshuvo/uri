#include<stdio.h>
int main()
{
    int number_of_employee,number_of_per_hour;
    float salary_of_employee_per_hour,salary_of_employee;
    scanf("%d",&number_of_employee);
    scanf("%d",&number_of_per_hour);
    scanf("%f",&salary_of_employee_per_hour);
    salary_of_employee = (number_of_per_hour)*(salary_of_employee_per_hour);

    printf("NUMBER = %d\n",number_of_employee);
    printf("SALARY = U$ %0.2f\n",salary_of_employee);

    return 0;

}
