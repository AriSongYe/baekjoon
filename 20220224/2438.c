#include <stdio.h>

int main()
{
    int i;
    int j;
    int N;

    scanf("%d", &N);

    i = 1;
    j = 0;
    while(i <= N)
    {
        j = 0;
        while(j < i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}
