/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1157.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecsong <yecsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 23:08:03 by yecsong           #+#    #+#             */
/*   Updated: 2022/06/08 20:09:53 by yecsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_isalpha(int c);
int main()
{
    char str[1000005];
    int alpha[27];
    int len;
    int i;
    int max;
    char c;

    memset(alpha, 0, 108);
    i = 0;
    scanf("%s", str);
    len = strlen(str);
    while (i < len)
    {
        if (ft_isalpha(str[i]) && str[i] >= 96)
            alpha[ft_isalpha(str[i]) - 97] += 1;
        else if (ft_isalpha(str[i]) && str[i] < 96)
            alpha[ft_isalpha(str[i]) - 65] += 1;
        i++;
    }
    i = 0;
    max = 0;
    while (i < 26)
    {
        if (max == alpha[i])
            c = '?';
        else if (max < alpha[i])
        {
            max = alpha[i];
            c = 65 + i;
        }
        i++;
    }
    i = 0; 
    printf("%c", c);
    return (0);
}

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c);
	else if (c >= 'A' && c <= 'Z')
		return (c);
	else
		return (0);
}
