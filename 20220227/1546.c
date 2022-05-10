#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *num;
    int size;
    int i;
    int max;
    double  sum;

    i = 0;
    max = 0;
    sum = 0;
    scanf("%d", &size);
    num = (int *)malloc(sizeof(int) * (size + 1));
    while (i < size)
    {
        scanf("%d", &num[i]);
        if(max < num[i])
            max = num[i];
        i++;
    }
    i = 0;
    while (i < size)
    {
        sum = sum + (((double)num[i] / (double)max) * 100);
        i++;
    }
    printf("%f.5", sum / (double)size); 
    free(num);
}
