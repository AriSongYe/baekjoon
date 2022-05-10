#include <stdio.h>

int main()
{
    int T;
    int num1;
    int num2;
    int i;

    i = 1;
    scanf("%d", &T);
    while(i <= T)
    {
        scanf("%d", &num1);
        scanf("%d", &num2);
        printf("Case #%d: %d\n", i, num1 + num2);
        i++;
    }
}
