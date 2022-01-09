/*I Am Joy Mondal. My Website https://codewithjoymondal.com
 My Youtube Channel is */

#include<stdio.h>
int main()
{
    //Thsi Project can't be use float number
    int number;
    printf("Enter Any Digit From (0-9) : ");
    scanf("%d",&number);

    switch (number)
    {
        case 0:
            printf("Your Value is %d = Zero\n",number);
            break;
        case 1:
            printf("Your Value is %d = One\n",number);
            break;
        case 2:
            printf("Your Value is %d = Two\n",number);
            break;
        case 3:
            printf("Your Value is %d = Three\n",number);
            break;
        case 4:
            printf("Your Value is %d = Four\n",number);
            break;
        case 5:
            printf("Your Value is %d = Five\n",number);
            break;
        case 6:
            printf("Your Value is %d = Six\n",number);
            break;
        case 7:
            printf("Your Value is %d = Seven\n",number);
            break;
        case 8:
            printf("Your Value is %d = Eight\n",number);
            break;
        case 9:
            printf("Your Value is %d = Nine\n",number);
            break;
        default:
            printf("You Enter Wrong, You Must Enter (0-9)");
    }

return 0;
}