//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>

int main() {
//Result Info
    double a,b,c,d,f,x,y,z,r=12;
    printf("Enter your Crunt CGPA Result : ");
    scanf("%lf",&a);

    printf("Enter Number Of Complite Semester : ");
    scanf("%lf",&b);

    printf("Whoice CGPA You Want Final Semester: ");
    scanf("%lf",&c);

    d=a*b;
    f=c*r;
    x=f-d;
    y=r-b;
    z=x/y;
    printf("\nYour Need To keep Result %.2lf Next Per Semester\n",z);

    return 0;
}