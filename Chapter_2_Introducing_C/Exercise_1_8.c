/* Exercise_1_8.c -- one_three() and two() */
#include<stdio.h>
void two();
void one_three();

int main(){
    printf("starting now: \n");
    one_three();
    printf("done!\n");
    return 0;
}

void one_three(){
    printf("one\n");
    two();
    printf("three\n");
}

void two(){
    printf("two\n");
}
