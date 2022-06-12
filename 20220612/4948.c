/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4948.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecsong <yecsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 21:28:18 by yecsong           #+#    #+#             */
/*   Updated: 2022/06/12 22:25:57 by yecsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int     N;
    int     M;
    int     i;
    int     j;
    int     cnt;
    int    arr[1000001] = { 0 };
    
    arr[0] = 1;
    arr[1] = 1;
    while (1)
    {
        cnt = 0;
        i = 2;
        scanf("%d", &N);
        if (N == 0)
            break;
        M = N * 2;
        while (i <= M)
        {
            j = 2 * i;
            while (j <= M)
            {
                if (arr[j] == 0)
                    arr[j] = 1;
                j = j + i;
            }
            i++;
        }
        ;
        while (N + 1 <= M)
        {
            if (arr[N + 1] == 0)
                cnt++;
            N++;
        }
        printf("%d\n", cnt);
    }
}
