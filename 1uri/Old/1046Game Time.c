#include <stdio.h>

int main()
{
    int t_start, t_end, t_duration;

    scanf("%d %d", &t_start, &t_end);

    if (t_start >= t_end) {
        t_duration = (24-t_start) + t_end;
        printf("O JOGO DUROU %d HORA(S)\n", t_duration);
    }
    else {
        t_duration = t_end - t_start;
        printf("O JOGO DUROU %d HORA(S)\n", t_duration);
    }

    return 0;
}
