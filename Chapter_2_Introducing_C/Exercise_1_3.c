/* Exercise_1_3.c -- converts age in years to days and displays both values. */
#include<stdio.h>

int main(){
    int ageInYears, ageInDays;
    ageInYears = 18;
    ageInDays = 365*ageInYears;

    printf("My age in years is %d and age in days is %d.\n", ageInYears, ageInDays);
    return 0;
}
