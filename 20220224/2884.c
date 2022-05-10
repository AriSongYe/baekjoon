#include <stdio.h>

int main()
{
    int hour;
    int minute;

    scanf("%d", &hour);
    scanf("%d", &minute);

    if (minute >= 45)
        printf("%d %d\n", hour, minute - 45);
    else if (minute >= 0 && minute < 45 && hour != 0)
        printf("%d %d\n", hour - 1, 60 -(-1 *(minute - 45)));
    else if (minute >= 0 && minute < 45 && hour == 0)
        printf("%d %d\n", hour + 23, 60 -(-1 *(minute - 45)));
    return (0);
}
