/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10757.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecsong <yecsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 21:55:17 by yecsong           #+#    #+#             */
/*   Updated: 2022/06/12 11:43:55 by yecsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    reverse_arr(char *arr, int n);

int main()
{
    char    A[10002] = { 0 };
    char    B[10002] = { 0 };
    char    NEW[10003] = { 0 };
    int     len_A;
    int     len_B;
    int     i;
    int     carry;
    int     sum;
    scanf("%s %s", A, B);
    sum = 0;
    i = 0;
    carry = 0;
    len_A = strlen(A);
    len_B = strlen(B);
    reverse_arr(A, len_A);
    reverse_arr(B, len_B);
    if (len_A >= len_B)
        ;
    else
        len_A = len_B;
    while (i < len_A)
    {
        if (carry == 1)
        {
            sum = A[i] - '0' + B[i] - '0' + 1;
            carry = 0;
        }
        else
            sum = A[i] - '0' + B[i] - '0';
        while (sum < 0)
            sum += '0';
        if (sum > 9)
        {
            carry = 1;
            NEW[i] = sum % 10 + '0';
        }
        else
            NEW[i] = sum + '0';
        i++;
    }
    if (carry == 1)
    {
        NEW[len_A] = '1';
        NEW[len_A + 1] = '\0';    
        reverse_arr(NEW, len_A + 1);
    }
    else
        reverse_arr(NEW, len_A);
    printf("%s\n", NEW);
    return (0);
}

void    reverse_arr(char *arr, int n)
{
    int     i;
    char    temp;
    
    i = 0;
    while (i < n / 2)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
        i++;
    }
}
