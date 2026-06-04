#include<stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int i = 1;
    int j = 3;

    int temp;

    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    printf("After swapping:\n");

    for(int k = 0; k < 5; k++)
    {
        printf("%d ", arr[k]);
    }

    return 0;
}
