#include<stdio.h>
/*
 * Heading - This program will print out the factoria of any input number.
 * main - Entry
 * return success
 */

 int fact(int n){
    if (n == 1){
        return 1;
    }
    else
    return n*fact(n - 1);
 }
 int main(void){
    int n;
    printf("Enter the number>> ");
    scanf("%d", &n);
    printf("The factoria of %d is %d", n, fact(n));
 }
