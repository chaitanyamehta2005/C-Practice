#include<stdio.h>
int main()
{
    float n[5];
    int i,pos=0,neg=0;
    printf("Input the first number:");
    scanf("%f",&n[0]);
    printf("Input the second number:");
    scanf("%f",&n[1]);
    printf("Input the third number:");
    scanf("%f",&n[2]);
    printf("Input the fourth number:");
    scanf("%f",&n[3]);
    printf("Input the fifth number:");
    scanf("%f",&n[4]);

    for(i=0;i<5;i++)
    {
        if (n[i]>0)
        {
            pos++;
        }
        else if (n[i]<0)
        {
            neg++;
        }


    }
    printf("Number of Positive numbers: %d\n",pos);
    printf("Number of Negative numbers: %d\n",neg);

    return 0;


}
