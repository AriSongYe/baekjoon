/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5622.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecsong <yecsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:06:52 by yecsong           #+#    #+#             */
/*   Updated: 2022/06/09 14:13:17 by yecsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int main()
{
    char    word[16];
    int     len;
    int     i;

    i = 0;
    len = 0;
    scanf("%s", word);
    while (i < strlen(word))
    {
        if (word[i] == 'A' || word[i] == 'B' || word[i] == 'C')
            len = len + 3;
        else if (word[i] == 'D' || word[i] == 'E' || word[i] == 'F')
            len = len + 4;
        else if (word[i] == 'G' || word[i] == 'H' || word[i] == 'I')
            len = len + 5;
        else if (word[i] == 'J' || word[i] == 'K' || word[i] == 'L')
            len = len + 6;
        else if (word[i] == 'M' || word[i] == 'N' || word[i] == 'O')
            len = len + 7;
        else if (word[i] == 'P' || word[i] == 'Q' || word[i] == 'R' || word[i] == 'S')
            len = len + 8;
        else if (word[i] == 'T' || word[i] == 'U' || word[i] == 'V')
            len = len + 9;
        else if (word[i] == 'W' || word[i] == 'X' || word[i] == 'Y' || word[i] == 'Z')
            len = len + 10;
        i++;
    }
    printf("%d", len);
    return (0);
}
