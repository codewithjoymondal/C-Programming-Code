//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>
int main() {
    int  year;
    printf(" Enter Any Year: ");
    scanf("%d",&year);

    if(year%400==0)
        printf(" This year is LipYear .");
    else if (year%4==0 && year%100 !=0)
        printf(" This Year is LipYear .");
    else
        printf("This Year is Not LipYear");





    return 0;
}

