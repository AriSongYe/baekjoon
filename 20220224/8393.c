#include <stdio.h>

int main()
{
    int i;
    int N;
    int sum;

    i = 1;
    sum = 0;
    scanf("%d", &N);
    while(i <= N)
    {
        sum = sum + i;
        i++;
    }
    printf("%d", sum);
    return (0);
}
