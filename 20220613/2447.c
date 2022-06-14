/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2447.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecsong <yecsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:31:56 by yecsong           #+#    #+#             */
/*   Updated: 2022/06/13 17:34:25 by yecsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    recur(int i, int j, int N);

int main()
{
    int N;
    int i;
    int j;

    i = 0;
    scanf("%d", &N);
    while (i < N)
    {
        j = 0;
        while (j < N)
        {
            recur(i, j, N);
            j++;
        }
        printf("\n");
        i++;
    }
}

void    recur(int i, int j, int N)
{
    if ((i / N) % 3 == 1 && (j / N) % 3 == 1)

        printf(" ");
    else
    {
        if (N / 3 == 0)
            printf("*");
        else
            recur(i, j, N / 3);
    }
}
