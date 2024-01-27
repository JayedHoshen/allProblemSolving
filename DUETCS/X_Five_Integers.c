#include <stdio.h>

int main()
{
    int a, b, c, d, e;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a == b || a == c || a == d || a == e || b == c || b == d || b == e ||
        c == d || c == e || d == e) c++;

    return 0;
}