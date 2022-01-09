//CodeWithJoy

#include<stdio.h>
int main()

{
    double num1,num2;
    char op;

    printf("Enter an Operator: ");
    scanf("%c",&op);

    printf("Enter First Number : ");
    scanf("%lf",&num1);

    printf("Enter Second Number : ");
    scanf("%lf",&num2);

    switch(op)
    {

        case '+' :
        {
            printf("%lf+%lf=%lf \n",num1,num2,num1+num2);

            break;
        }
        case '-' :
        {
            printf("%lf-%lf=%lf \n",num1,num2,num1-num2);

            break;
        }
        case '*' :
        {
            printf("%lf*%lf=%lf \n",num1,num2,num1*num2);

            break;
        }
        case '/' :
        {
            printf("%lf/%lf=%lf \n",num1,num2,num1/num2);

            break;
        }
        default:
            printf("No operation");

    }

    return 0;

}
