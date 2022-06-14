/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   17478.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecsong <yecsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:03:17 by yecsong           #+#    #+#             */
/*   Updated: 2022/06/13 15:29:07 by yecsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    recur(int N, int cnt);
void    underbar (int cnt);

int main()
{
    int N;
    int cnt;

    cnt = 1;
    scanf("%d", &N);
    printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
    printf("\"재귀함수가 뭔가요?\"\n");
    printf("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n");
    printf("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
    printf("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n");
    recur(N, cnt);
    printf("라고 답변하였지.\n");
}

void    recur(int N, int cnt)
{
    if (N != 0)
    {
        underbar(cnt);
        printf("\"재귀함수가 뭔가요?\"\n");
        if (N != 1)
        {
            underbar(cnt);
            printf("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n");
            underbar(cnt);
            printf("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
            underbar(cnt);
            printf("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n");
        }
        else
        {
            underbar(cnt);
            printf("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n");
        }
        recur(N - 1, cnt + 1);
        underbar(cnt);
        printf("라고 답변하였지.\n");
    }
}

void    underbar (int cnt)
{
    int i;
    
    i = 0;
    while (i < cnt)
    {
        printf("____");
        i++;
    }
}
