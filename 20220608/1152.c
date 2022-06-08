/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1152.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecsong <yecsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 20:17:25 by yecsong           #+#    #+#             */
/*   Updated: 2022/06/08 20:58:14 by yecsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main()
{
    char    str[1000001] ;
    int     cnt;
    int     i;

    i = 0;
    cnt = 0;
    scanf("%[^\n]", str);
    if (strlen(str) == 1)
    {
        if (str[0] == ' ')
        {
            printf("0\n");
            return (0);   
        }
    }
    while (i < strlen(str))
    {
        if (str[i] == ' ' && i != 0 && i != strlen(str) - 1)
            cnt++;
        i++;
    }
    printf("%d\n", cnt + 1);
    return (0);
}
