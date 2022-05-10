#include <stdio.h>

int main()
{
    char    answer[81];
    int     size;
    int     i;
    int     j;
    int     sum;
    int     num;

    i = 0;
    scanf("%d", &size);
    while(i < size)
    {
        sum = 0;
        num = 0;
        j = 0;
        scanf("%s", answer);
        while (answer[j])
        {
            if (answer[j] == 'O')
            {
                num = num + 1;
                sum = sum + num;
            }
            else if (answer[j] == 'X')
            {
                num = 0;
            }
            j++;
        }
        printf("%d\n", sum);
        i++;
    }
}
