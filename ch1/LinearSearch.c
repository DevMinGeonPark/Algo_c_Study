//
// Created by 박민건 on 2023/01/16.
// Algorith C P19 LinearSeqrch
//
#include <stdio.h>
int LSearch(int ar[], int len, int target) { //순차 탐색 알고리즘
    for (int i = 0; i < len; i++)
        if(ar[i] == target) return i; //찾은 대상의 index

    return -1; //error
}
int main(void) {
    int arr[] = {3,5,2,4,9};
    int idx;

    idx = LSearch(arr, sizeof(arr)/sizeof(int), 7);

    if(idx == -1) printf("탐색 실패");
    else printf("타겟 저장 인덱: %d \n",idx);

    return 0;
}
