/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11653.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecsong <yecsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 19:19:11 by yecsong           #+#    #+#             */
/*   Updated: 2022/06/12 21:26:32 by yecsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int N;
    int i;

    scanf("%d", &N);
    i = 2;
    while (N != 1)
    {
        while (1)
        {
            if (N % i == 0)
            {
                printf("%d\n", i);
                N = N / i;
            }
            else if (N == 1)
                break;
            else
                break;
        }
        i++;
    }
}