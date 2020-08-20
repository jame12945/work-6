#include<stdio.h>
#include<iostream>
void main()
{
    int number;
    int i;
    int j;
    printf("the number of your size is: \n");
    scanf_s("%d", &number);
    for (int i = 1; i <= number; i++) {
        for (int j = 1; j <= number; j++) {
            if (i == 1 || i == number || j == 1 || j == number) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}