/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10809.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecsong <yecsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:49:35 by yecsong           #+#    #+#             */
/*   Updated: 2022/06/07 16:48:22 by yecsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main()
{
    char    word[101];
    int     alpha[27];
    int     i;

    i = 0;
    scanf("%s", word);
    memset(alpha, -1, 104);
    alpha[26] = '\0';
    while (word[i])
    {
        if(alpha[word[i] - 97] == -1)
            alpha[word[i] - 97] = i;
        i++;
    }
    i = 0;
    while (i < 25)
    {
        printf("%d ", alpha[i]);
        i++;
    }
    printf("%d ", alpha[25]);
    return (0);
}
