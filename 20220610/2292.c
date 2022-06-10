/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2292.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecsong <yecsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 01:18:02 by yecsong           #+#    #+#             */
/*   Updated: 2022/06/10 16:08:05 by yecsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int sum;
    int num;
    int i;

    sum = 1;
    i = 1 ;
    scanf("%d", &num);
    if (num == 1)
    {
        printf("%d", 1);
        return (0);
    }
    while (1)
    {
        if (sum >= num)
            break;
        sum = sum + i * 6;
        i++;
    }
    printf("%d", i);
    return (0);
}   
