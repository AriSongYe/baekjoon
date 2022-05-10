#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int test_case;
    int sub_num;
    int *num;
    int i;
    int j;
    int cnt;
    float sub_sum;

    i = 0;
    scanf("%d", &test_case);
    while (i < test_case)
    {
        scanf("%d", &sub_num);
        num = (int *)malloc(sizeof(int) * (sub_num + 1));
        j = 0;
        sub_sum = 0;
        while (j < sub_num)
        {
            scanf("%d", &num[j]);
            sub_sum = sub_sum + num[j];
            j++;
        }
        sub_sum = sub_sum / (float)j;
        cnt = 0;
        j = 0;
        while (j < sub_num)
        {
            if(num[j] > sub_sum)
                cnt++;
            j++;
        }
        sub_sum = ((float)cnt / (float)sub_num) * 100;
        printf("%f.3\n", sub_sum);
        free(num);
        i++;
    }
}
