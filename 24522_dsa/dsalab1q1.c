#include <stdio.h>

int findMissingNumber(int arr[], int n) {

    long long expectedSum = (long long)(n + 1) * (n + 2) / 2;
    
   
    long long actualSum = 0;
    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }
    
 
    return expectedSum - actualSum;
}

int main() {
    int n;
    printf("Enter the number of elements (N): ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements (consecutive integers with one missing):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int missing = findMissingNumber(arr, n);
    printf("Missing number: %d\n", missing);
    
    return 0;
}
