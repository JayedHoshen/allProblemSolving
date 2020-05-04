#include <stdio.h>

int main()
{
    int time, avg_speed, total_distance;
    double fuel_need;

    scanf("%d %d", &time, &avg_speed);

    total_distance = time * avg_speed;
    fuel_need = (double)total_distance / 12;

    printf("%0.3lf\n", fuel_need);

    return 0;
}
