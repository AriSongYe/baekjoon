/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2675.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecsong <yecsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:49:43 by yecsong           #+#    #+#             */
/*   Updated: 2022/06/07 23:06:42 by yecsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int cnt_case;
    int cnt_re;
    int i;
    int j;
    int k;
    char arr[21];

    i = 0;
    k = 0;
    scanf("%d", &cnt_case);
    while (i < cnt_case)
    {
        j = 0;
        scanf("%d", &cnt_re);
        scanf("%s", arr);
        while (arr[j])
        {
            k = 0;
            while (k++ < cnt_re)
            {
                printf("%c", arr[j]);
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return (0);
}
