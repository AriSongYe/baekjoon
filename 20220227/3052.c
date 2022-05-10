#include <stdio.h>

int main()
{
    int temp[10];
    static int temp_2[42];
    int i = 0;
    int j = 0;
    int cnt = 0;

    while (i < 10)
    {
        scanf("%d", &temp[i]);
        temp[i] = temp[i] % 42;
        i++;
    }
    i = 0;
    while (i < 10)
    {
        temp_2[temp[i]] = 1;
        i++;
    }
    while (j < 42)
    {
        if (temp_2[j] == 1)
            cnt++;
        j++;
    }
    printf("%d", cnt);
}
