//
// Created by 박민건 on 2023/01/16.
//
#include <stdio.h>
int Fibo(int n) {
    switch (n) {
        case 1:
            return 0;
        case 2:
            return 1;
        default:
            return Fibo(n-1)+Fibo(n-2);
    }
}

int main(void) {

    for (int i = 1; i < 15; i++) printf("%d ", Fibo(i));

    return 0;
}