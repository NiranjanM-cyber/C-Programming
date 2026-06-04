#include<stdio.h>

int main()
{
    int arr[5] = {5,0,4,0,5};

    size_t length = sizeof(arr) / sizeof(arr[0]);

    int palindrome = 1;

    for(int i = 0; i < length / 2; i++)
    {
        if(arr[i] != arr[length - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    if(palindrome)
        printf("Palindrome");
    else
        printf("Not a palindrome");

    return 0;
}
