#include <stdio.h>

int secondLargest(int arr[], int size)
{
    int largest = arr[0];
    int second = arr[1];

    if (second > largest)
    {
        int temp = largest;
        largest = second;
        second = temp;
    }

    for (int i = 2; i < size; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second)
        {
            second = arr[i];
        }
    }

    return second;
}

int main()
{
    int arr[] = {10, 5, 20, 8, 15};
    int size = 5;

    printf("Second largest element = %d\n", secondLargest(arr, size));

    return 0;
}