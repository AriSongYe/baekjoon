/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2941.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecsong <yecsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:23:47 by yecsong           #+#    #+#             */
/*   Updated: 2022/06/09 14:52:57 by yecsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char    word[101];
    int     cnt;
    int     i;

    i = 0;
    cnt = 0;
    scanf("%s", word);

    while (i < strlen(word))
    {
        if (word[i] == 'c')
        {
            if (word[i + 1] == '-' || word[i + 1] == '=')
            {
                cnt++;
                i++;
            }
            else
                cnt++;
        }
        else if (word[i] == 'd')
        {
            if (word[i + 1] == 'z' && word[i + 2] == '=')
            {
                if (word[i + 2] == '=')
                {
                cnt++;
                i++;
                }
                else
                    cnt++;
            }
            else if(word[i + 1] == '-')
            {
                cnt++;
                i++;
            }
            else
                cnt++;
        }
        else if (word[i] == 'l')
        {
            if (word[i + 1] == 'j')
            {
                i++;
                cnt++;
            }
            else
                cnt++;
        }
        else if (word[i] == 'n')
        {
            if (word[i + 1] == 'j')
            {
                cnt++;
                i++;
            }
            else
                cnt++;
        }
        else if (word[i] == 's')
        {
            if (word[i + 1] == '=')
            {
                cnt++;
                i++;
            }
            else
                cnt++;
        }
        else if (word[i] == 'z')
        {
            if (word[i + 1] == '=')
            {
            cnt++;
            i++;
            }
            else
                cnt++;
        }
        else if (islower(word[i]))
            cnt++;
        i++;
    }
    printf("%d", cnt);
    return (0);
}
