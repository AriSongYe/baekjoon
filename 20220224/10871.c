#include <stdio.h>

int main()
{
    int N;
    int X;
    int num;

    scanf("%d", &N);
    scanf("%d", &X);

    while(N != 0)
    {
        scanf("%d", &num);
        if(num < X)
            printf("%d\n", num);
        N--;
    }
    return (0);
}
