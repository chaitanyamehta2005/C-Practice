#include<stdio.h>
int main()
{
   float basic,da,hra,gross;
   printf("Enter Ramesh basic salary: ");
   scanf("%f",&basic);
   da=0.40 * basic;
   hra=0.20 * basic;
   gross=basic+da+hra;
   printf("Ramesh Gross salary is %f",gross);
   return 0;
}
