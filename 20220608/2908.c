/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2908.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecsong <yecsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 20:59:55 by yecsong           #+#    #+#             */
/*   Updated: 2022/06/08 22:24:47 by yecsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num_1[4];
    char num_2[4];
    char temp;
    int A;
    int B;

    scanf("%s", num_1);
    scanf("%s", num_2);
    temp = num_1[0];
    num_1[0] = num_1[2];
    num_1[2] = temp;
    temp = num_2[0];
    num_2[0] = num_2[2];
    num_2[2] = temp;
    A = atoi(num_1);
    B = atoi(num_2);
    if (A > B)
        printf ("%d", A);
    else
        printf ("%d", B);
}
