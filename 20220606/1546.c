/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1546.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecsong <yecsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 22:22:45 by yecsong           #+#    #+#             */
/*   Updated: 2022/06/06 22:48:12 by yecsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int     cnt_sub;
    int     max_score;
    int     sum;
    int     i;
    double  mean;

    cnt_sub = 0;
    i = 0;
    sum = 0;
    max_score = 0;
    scanf("%d", &cnt_sub);
    int score[cnt_sub];
    while (i++ < cnt_sub)
    {
        scanf("%d", &score[i]);
        sum = sum + score[i];
        if (score[i] > max_score)
            max_score = score[i];
    }
    mean = (double) ((double)sum / (double)max_score * 100 / (double) cnt_sub);
    printf ("%f", mean);
    return (0);
}
