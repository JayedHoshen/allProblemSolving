#include <stdio.h>

int main()
{
    char ch;
    int i, j;
    double avg, a[12][12], sum = 0.0, c = 0.0;

    scanf("%c", &ch);

    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) scanf("%lf", &a[i][j]);
    }

    for(i = 0; i < 12; i++) for(j = 0; j < 12; j++) {
        if(i < j && j < (11-i)) {
            sum += a[i][j];
            c++;
        } 
    } 

    avg = sum / c;

    if(ch == 'S') printf("%.1lf\n", sum);
    else if(ch == 'M') printf("%.1lf\n", avg);
    
    return 0;
}