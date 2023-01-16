//
// Created by 박민건 on 2023/01/16.
//
#include <stdio.h>

int Factorial(int num) {
    if(num==0) return 1;
    else return num * Factorial(num-1);
}
int main(void) {

    printf("1! is %d\n", Factorial(1));
    printf("2! is %d\n", Factorial(2));
    printf("3! is %d\n", Factorial(3));
    printf("4! is %d\n", Factorial(4));
    printf("5! is %d\n", Factorial(5));

    return 0;
}
