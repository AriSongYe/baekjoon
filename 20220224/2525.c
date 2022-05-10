#include <stdio.h>

int main()
{
    int hour;
    int minute;
    int how_min;

    scanf("%d", &hour);
    scanf("%d", &minute);
    scanf("%d", &how_min);

    if(minute + how_min >= 60)
    {
        hour = hour + (minute + how_min) / 60;
        minute = (minute + how_min) % 60;
    }
    else
        minute = minute + how_min;

    if(hour >= 24)
        printf("%d %d", hour - 24, minute);
    else
        printf("%d %d", hour, minute);
}
