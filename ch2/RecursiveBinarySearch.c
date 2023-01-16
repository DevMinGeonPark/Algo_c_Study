//
// Created by 박민건 on 2023/01/16.
//
#include <stdio.h>
int BSearchRecur(int arr[], int first, int last, int target) {
    int mid;

    if(first > last) return -1; //탐색 실패

    mid = (first+last)/2;

    if(arr[mid] == target) return mid;
    else if (target < arr[mid]) return BSearchRecur(arr, first, mid-1, target);
    else return BSearchRecur(arr, mid+1, last, target);
}

int main(void) {
    int arr[] = {1,3,5,7,9};
    int idx;

    idx = BSearchRecur(arr, 0,sizeof(arr)/sizeof(int)-1, 7);

    if(idx == -1) printf("탐색 실패\n");
    else printf("타겟 저장 인덱스 %d",idx);

    return 0;
}