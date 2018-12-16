#include<stdio.h>
int main()
{
    int i,a;
    printf("Enter the Highest number: ");
    scanf("%d",&a);
    printf("The even numbers are:\n");

    for (i=1;i<=a;i=i+1)
    {
        if (i%2==0)
        {
        printf("%d \n",i);
        }
    }
    return 0;
}
