/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1316.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecsong <yecsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:54:53 by yecsong           #+#    #+#             */
/*   Updated: 2022/06/09 17:00:18 by yecsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main()
{
    char    word[101];
    int     check;
    int     same;
    int     cnt;
    int     i;
    int     j;
    int     k;
    int     word_cnt;

    i = 0;
    cnt = 0;
    scanf("%d", &word_cnt);
    while(i < word_cnt)
    {
        check = 0;
        j = 0;
        scanf("%s", word);
        while (j < strlen(word))
        {
            k = j + 1;
            while (k < strlen(word))
            {
                if (word[j] == word[k] && word[j] != word[j + 1])
                    check = 1;
                k++;
            }
            j++;
        }
        if (check == 0)
            cnt++;
        i++;
    }
    printf("%d", cnt);
}
