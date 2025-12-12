#include <stdio.h>
#include <stdlib.h>

// It is the project of my journey
int main(){

    int userAge ;
    printf("======= Hello Dear, My name is BotMan =======\n\n");
    printf("Write your name : ", userAge);
    scanf("%d", &userAge); // & call the address of variable
    printf("Your Age is : %d ", userAge);
    getchar(); // clean the buffer of keyboard ofcomputer

    return 0;
}
