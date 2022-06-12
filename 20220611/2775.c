/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2775.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecsong <yecsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 12:29:51 by yecsong           #+#    #+#             */
/*   Updated: 2022/06/11 12:51:26 by yecsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int T;
    int a;
    int b;
    int i;
    int j;
    int k;
    int num[15];
    int sum;

    scanf("%d", &T);
    i = 0;
    sum = 0;
    i = 0;
    while (i < T)
    {
        j = 0;
        scanf("%d %d", &a, &b);
        while (j < 15)
        {
            num[j] = j + 1;
            j++;
        }
        j = 0;
        while (j < a)
        {
            k = 0;
            sum = 0;
            while (k < b)
            {
                sum = sum + num[k];
                num[k] = sum;
                k++;
            }
            j++;
        }
        printf("%d", num[b - 1]);
        i++;
    }
    return (0);
}
