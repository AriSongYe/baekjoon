#include <stdio.h>

int main()
{
    int i;
    int j;
    int N;

    scanf("%d", &N);

    i = 1;
    while(i <= N)
    {
        j = 1;
        while(j <= N)
        {
            if(j > N - i)
                printf("*");
            else
                printf(" ");
            j++;
        }
        printf("\n");
        i++;
    }
}
