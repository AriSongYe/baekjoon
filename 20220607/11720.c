/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11720.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecsong <yecsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:37:11 by yecsong           #+#    #+#             */
/*   Updated: 2022/06/07 15:47:21 by yecsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cnt;
    int i;
    int sum;
    char *arr;

    i = 0;
    sum = 0;
    scanf("%d", &cnt);
    arr = (char *)malloc(sizeof(char) * (cnt + 1));
    scanf("%s", arr);
    while(i < cnt)
    {
        sum = sum + arr[i] - 48;
        i++;
    }
    printf("%d", sum);
    free(arr);
    return (0);
}
