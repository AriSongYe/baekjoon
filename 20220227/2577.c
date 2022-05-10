#include <stdio.h>

int main()
{
    int A;
    int B;
    int C;
    int SUM;
    static int    cnt[10];
    
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    
    SUM = A * B * C;
    while(SUM != 0)
    {
        cnt[SUM % 10]++;
        SUM = SUM / 10;
    }
    int i = 0;
    while(i < 10)
    {
        printf("%d\n", cnt[i]);
        i++;
    }
}
