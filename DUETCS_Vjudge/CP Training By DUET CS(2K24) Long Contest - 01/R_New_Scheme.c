#include <stdio.h>

int main()
{
    int s1, s2, s3, s4, s5, s6, s7, s8;

    scanf("%d %d %d %d %d %d %d %d", &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);               

    if ( 
        s1<=s2 && s1 >= 100 && s1 <= 675 && s1 % 25 == 0 &&
        s2<=s3 && s2 >= 100 && s2 <= 675 && s2 % 25 == 0 &&
        s3<=s4 && s3 >= 100 && s3 <= 675 && s3 % 25 == 0 &&
        s4<=s5 && s4 >= 100 && s4 <= 675 && s4 % 25 == 0 &&
        s5<=s6 && s5 >= 100 && s5 <= 675 && s5 % 25 == 0 &&
        s6<=s7 && s6 >= 100 && s6 <= 675 && s6 % 25 == 0 &&
        s7<=s8 && s8 >= 100 && s7 <= 675 && s7 % 25 == 0 &&
                  s8 >= 100 && s8 <= 675 && s8 % 25 == 0
     ) printf("Yes\n");
    else printf("No\n");

    return 0;
}