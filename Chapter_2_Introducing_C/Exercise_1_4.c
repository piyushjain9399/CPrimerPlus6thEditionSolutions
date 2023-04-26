/* Exercise_1_4.c -- Printing what is asked in the question while using two functions.  */
#include<stdio.h>

void jolly();
void deny();

int main(){
    printf("For he's a ");
    jolly();
    printf(" fellow!\n");
    printf("For he's a ");
    jolly();
    printf(" fellow!\n");
    printf("For he's a ");
    jolly();
    printf(" fellow!\n");

    deny();
    return 0;
}

void jolly(){
    printf("jolly good");
}

void deny(){
    printf("Which nobody can deny!\n");
}
