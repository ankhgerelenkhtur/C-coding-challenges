#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, *arr, i;
    scanf("%d", &num);

    arr = (int*) malloc(num * sizeof(int));

  
    for (i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    int *arr1 = (int*) malloc(num * sizeof(int));
    for (i = 0; i < num; i++) {
        arr1[i] = arr[num - 1 - i];
    }

    for (i = 0; i < num; i++) {
        printf("%d ", arr1[i]);
    }

    free(arr);
    free(arr1);

    return 0;
}
