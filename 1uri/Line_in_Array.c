#include <stdio.h>

int main()
{
    char ch;
    int i, j, n;
    double avg, a[12][12], sum = 0.0;

    scanf("%d %c", &n, &ch);

    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) scanf("%lf", &a[i][j]);
    }

    for(i = 0; i < 12; i++) sum += a[n][i];
    avg = sum / 12.0;

    if(ch == 'S') printf("%.1lf\n", sum);
    else if(ch == 'M') printf("%.1lf\n", avg);
    
    return 0;
}