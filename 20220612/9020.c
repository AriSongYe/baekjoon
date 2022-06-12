/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9020.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecsong <yecsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 21:28:18 by yecsong           #+#    #+#             */
/*   Updated: 2022/06/12 22:37:59 by yecsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int     i;
    int     j;
    int     k;
    int     N;
    int     T;
    int    arr[10001] = { 0 };
    
    scanf("%d", &T);
    k = 0;
    while (k < T)
    {
        scanf("%d", &N);
        arr[0] = 1;
        arr[1] = 1;

        i = 2;
        while (i <= 10000)
        {
            j = 2 * i;
            while (j <= 10000)
            {
                if (arr[j] == 0)
                    arr[j] = 1;
                j = j + i;
            }
            i++;
        }
            i = N / 2;
            j = 0;
            while (i - j != 0)
            {
            if (arr[i - j] == 0 && arr[i + j] == 0)
            {
                printf("%d %d\n", i - j, i + j);
                break;
            }
            j++;
        }
            k++;
    }
    return (0);
}
