/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4344.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecsong <yecsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 22:51:19 by yecsong           #+#    #+#             */
/*   Updated: 2022/06/06 23:24:10 by yecsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int     cnt_case;
    int     cnt_student;
    int     i;
    int     j;
    int     sum;
    int     *score;
    int     percent;
    double  mean;

    i = 0;
    cnt_case = 0;
    cnt_student = 0;
    scanf("%d", &cnt_case);
    while (i < cnt_case)
    {
        sum = 0;
        mean = 0;
        j = 0;
        percent = 0;
        scanf("%d", &cnt_student);
        score = (int *)malloc(sizeof(int) * (cnt_student + 1));
        while (j < cnt_student)
        {
            scanf("%d", &score[j]);
            sum = sum + score[j];
            j++;
        }
        mean = (double)sum / (double)cnt_student;
        j = 0;
        while (j < cnt_student)
        {
            if (score[j] > mean)
                percent++;
            j++;
        }
        printf("%.3f\n", (double)percent / cnt_student * 100);
        free(score);
        i++;
    }
    return (0);
}
