#include <stdio.h>

int main()
{
    int dice_1;
    int dice_2;
    int dice_3;

    scanf("%d", &dice_1);
    scanf("%d", &dice_2);
    scanf("%d", &dice_3);

    if (dice_1 == dice_2 && dice_1== dice_3)
        printf("%d", 10000 + (1000 * dice_1));
    else if (dice_1 == dice_2 && dice_1 != dice_3)
        printf("%d", 1000 + (100 * (dice_1)));
    else if (dice_2 == dice_3 && dice_2 != dice_1)
        printf("%d", 1000 + (100 * (dice_2)));
    else if (dice_1 == dice_3 && dice_1 != dice_2)
        printf("%d", 1000 + (100 * (dice_1)));
    else
    {
        if(dice_1 >= dice_2 && dice_1 >= dice_3)
            printf("%d", 100 * dice_1);
        else if(dice_2 >= dice_1 && dice_2 >= dice_3)
            printf("%d", 100 * dice_2);
        else if(dice_3 >= dice_1 && dice_3 >= dice_2)
            printf("%d", 100 * dice_3);
    }
    return (0);
}
