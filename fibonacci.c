#include<stdio.h>

int main()
{
    int n;
    
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int a = 0;
    int b = 1;
    int next;

    for(int i = 0; i < n; i++)
    {
        printf("%d ", a);

        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
