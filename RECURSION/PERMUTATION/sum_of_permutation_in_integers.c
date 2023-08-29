QUESTION:find the total sum of permutation of an integer

INPUT::

123

OUTPUT:

[123
132
213
231
321
312]

Total sum of permutaions: 1332

DIAGRAM:


                   123
               /    |    \ 
              /     |      \
            123    213      321
           / \     / \      / \
        123  132 213 231  321 312

Total_sum = 123+132+213+231+321+312=1332

FORMULA:
 as usual we have already seen about as same as string,
we use FACTORIAL:
   input digit is 3,then 3!=3*2*1=6
there are six combinations

CODE:
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int per(int arr[], int start, int end) {
    int sum = 0;
    int total=0;
    if (start == end) {
        for (int i = 0; i <= end; i++) {
            printf("%d ", arr[i]);
            sum =sum*10+arr[i];
        }
        printf("\n");
        total+=sum;
       
    } else {
        for (int i = start; i <= end; i++) {
            swap(&arr[start], &arr[i]);
            total+=per(arr, start + 1, end);
            swap(&arr[start], &arr[i]);
        }
        return total;
    }
}

int main() {
    int arr[3] = {1, 2, 3};
    int totalSum = per(arr, 0, 2);
    printf("Total sum of all permutations: %d\n", totalSum);
    return 0;
}

