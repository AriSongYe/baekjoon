/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2581.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecsong <yecsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 18:13:03 by yecsong           #+#    #+#             */
/*   Updated: 2022/06/12 19:18:14 by yecsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int min;
    int sum;
    int flag;
    int min_flag;
    int N;
    int M;
    int i;

    scanf("%d", &N);
    scanf("%d", &M);
    min_flag = 0;
    sum = 0;
    while (N <= M)
    {
        if (N == 1)
        {
            N++;
            continue;
        }
        i = 2;
        flag = 0;
        while(i < N)
        {
            if (N % i == 0)
            {
                flag = 1;
                break;
            }
            i++;
        }
        if (flag == 0 && min_flag == 0)
        {
            min = N;
            min_flag = 1;
        }
        if (flag == 0)
        {
            sum = sum + N;
        }
        N++;
    }
    if (sum != 0)
    {
        printf("%d\n", sum);
        printf("%d\n", min);
    }
    else
        printf("-1\n");
    return (0);
}
