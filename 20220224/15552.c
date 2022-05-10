#include <stdio.h>

int main()
{
    int T;
    int num1;
    int num2;

    scanf("%d", &T);
    while(T != 0)
    {
        scanf("%d", &num1);
        scanf("%d", &num2);
        printf("%d\n", num1 + num2);
        T--;
    }
}
