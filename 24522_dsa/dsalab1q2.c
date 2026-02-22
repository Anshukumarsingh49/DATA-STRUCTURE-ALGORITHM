#include <stdio.h>

int main() {
    int arr[] = {9, 10, 11, 12, 13, 7, 6, 5, 4};
    int n = sizeof(arr)/ sizeof(arr[0]); 

    int peakIndex = 0;

    for (int i = 1; i < n - 1; i++){
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            peakIndex = i;
            break;
        }
    }

    printf("Peak Index: %d/n",peakindex);

    return 0;
}
