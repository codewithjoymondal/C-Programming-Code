#include<stdio.h>
int main()
{
  char ch;
  printf("Enter Any latter : ");
  scanf("%c",&ch);

    switch (ch) {
        case 'a':

        case 'e':

        case 'i':

        case 'o' :

        case 'u':

            printf("Your latter %c= Vowel",ch);
            break;

        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("The latter is Vowel .");
            break;

        default:
            printf("Your latter %c= Consonant",ch);

    }
    return 0;
}
