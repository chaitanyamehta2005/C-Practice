#include<stdio.h>
int main()
{
    float n[5];
    float average;
    float pos=0;
    int i,neg=0,sum=0;
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
            sum=sum+n[i];

        }


    }
    if (pos!=0)
    {
    average=sum / pos;
    printf("Number of Positive numbers: %f\n",pos);
    printf("Average value of the said positive numbers: %f\n",average);
    }
    else
    {
        printf("Sorry");
    }

    return 0;


}
