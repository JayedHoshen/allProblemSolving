#include <stdio.h>

int main()
{
    int f_sec, f_min, f_hour, f_day, s_sec, s_min, s_hour, s_day;

    scanf("Dia %d\n", &f_day);
    scanf("%d : %d : %d\n", &f_hour, &f_min, &f_sec);
    scanf("Dia %d\n", &s_day);
    scanf("%d : %d : %d", &s_hour, &s_min, &s_sec);

    f_sec = s_sec - f_sec;
    f_min = s_min - f_min;
    f_hour = s_hour - f_hour;
    f_day = s_day - f_day;

    if (f_sec < 0) {
        f_sec += 60;
        f_min--;
    }
    if (f_min < 0) {
        f_min += 60;
        f_hour--;
    }
    if (f_hour < 0) {
        f_hour += 24;
        f_day--;
    }

    printf("%d dia(s)\n", f_day);
    printf("%d hora(s)\n", f_hour);
    printf("%d minuto(s)\n", f_min);
    printf("%d segundo(s)\n", f_sec);

    return 0;
}
