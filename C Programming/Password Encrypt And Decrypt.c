//This Code Solved By Joy Mondal (codewithjoymondal) WUB 53A
//If You Want to learn more code visite my youtube channel : Joy Mondal
//https://www.youtube.com/c/CodeWithJoy

#include<stdio.h>
#include<string.h>

void encrypt(char password [],int key){
    for (int i=0 ; i<strlen(password);i++){
        password[i]=password[i]-key ;
    }
}

void decrypt(char password [],int key){
    for (int i=0 ; i<strlen(password);i++){
        password[i]=password[i]+key ;
    }
}

int main() {
    char password[20];
    printf("Enter your Password: ");
    scanf("%s",password);
    //for encrypt
    encrypt(password,0XABCD);
    printf("This Is Encrypt Password : %s\n",password);

    decrypt(password,0XABCD);
    printf("This Is Decrypt Password :%s",password);

    return 0;
}
