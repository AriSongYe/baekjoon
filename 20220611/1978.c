/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1978.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecsong <yecsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 18:13:03 by yecsong           #+#    #+#             */
/*   Updated: 2022/06/12 18:45:22 by yecsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int N;
    int num;
    int cnt;
    int flag;
    int i;
    int j;

    scanf("%d", &N);
    i = 0;
    cnt = 0;
    while(i < N)
    {
        flag = 0;
        j = 3;
        scanf("%d" ,&num);
        if (num == 2)
        {
            i++;
            cnt++;
            continue;
        }
        if (num % 2 == 0 || num == 1)
        {
            i++;
            continue;
        }
        else
        {
            while (j < num)
            {
                if (num % j == 0)
                    flag = 1;
                j = j + 2;
            }
        }
        if (flag == 0)
            cnt++;
        i++;
    }
    printf("%d\n", cnt);
    return (0);
}
