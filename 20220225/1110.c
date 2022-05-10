#include <stdio.h>

int main()
{
    int num;
    int num1;
    int num2;
    int origin;
    int count;
    scanf("%d", &num);
    
    count = 0;
    origin = num;
    if(num < 10)
    {
        num = num * 10;
        origin = num;
    }
    while(1)
    {
        num1 = num / 10;
        num2 = num % 10;
        count++;
        num = num2 * 10 + ((num1 + num2) % 10);
        if (num == origin)
        {
            printf("%d\n", count);
            break;
        }
    }
}
