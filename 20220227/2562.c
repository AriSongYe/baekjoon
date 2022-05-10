#include <stdio.h>

int find_max(int *arr);

int main()
{
    int arr[9];
    int i;
    int max;

    i = 0;
    while (i < 9)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    max = find_max(arr);
    i = 0;
    while (arr[i] != max)
    {
        i++;
    }
    i++;
    printf("%d\n%d", max, i);
}

int find_max(int *arr)
{
    int i = 0;
    int j = 1;
    int max;

    max = arr[0];
    while(i < 9)
    {
        while(j < 9)
        {
            if(max < arr[j])
                max = arr[j];
            j++;
        }
        j = i + 1;
        i++;
    }
    return (max);
}
