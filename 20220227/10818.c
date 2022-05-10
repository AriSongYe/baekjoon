#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int cnt_num;
    int i = 0;
    int max;
    int min;
    int input;

    scanf("%d", &cnt_num);
    scanf("%d", &max);
    if (max > 1000000 || max < -11000000)
        return(-1);
    min = max;
    while (i < cnt_num - 1)
    {
        scanf("%d", &input);
        if (input > 1000000 || input < -11000000)
            break;
        if(input > max)
            max = input;
        if(input < min)
            min = input;
        i++;
    }
    printf("%d", min);
    printf(" ");
    printf("%d", max);
    return (0);
}
