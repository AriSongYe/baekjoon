/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1193.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecsong <yecsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:11:04 by yecsong           #+#    #+#             */
/*   Updated: 2022/06/10 18:24:15 by yecsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int num;
    int sum;
    int i;

    i = 0;
    sum = 0;
    scanf("%d", &num);
    while (sum < num)
    {
        i++;
        sum = sum + i;
    }
    if (i % 2 == 1)
        printf("%d/%d", sum - num + 1, i - (sum - num));
    else
        printf("%d/%d", i - (sum - num), sum - num + 1);
    return (0);
}
