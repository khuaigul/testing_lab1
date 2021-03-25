#include "myfunc.h"
#include <math.h>
#include <stdio.h>

int myfunc(int b) {
    return b+4;
}

int fibonachi(int num) {
    int prev = 1;
    int next = 1;

    if (num < 0)
        return 0;

    if (num <= 2)
        return num;

    int i = 2;
    while (i < num) {
        next += prev;
        prev = next - prev;
        i++;
    }

    return next;
}
solve equ(double a, double b, double c)
{
    solve cur;
    cur.f = 0;
    cur.s = 0;
    if (a == 0)
    {
        if (b == 0 && c == 0)
            cur.c = 3;
        else if (b == 0)
            cur.c = -1;
        else
        {
            cur.c = 1;
            cur.f = -c/b;
            cur.s = cur.f;
        }
    }
    else
    {
        double d = b*b-4*a*c;
        //printf("%lf \n", d);
        if (d < 0)
        {
            cur.c = 0;
        }
        else if (d == 0)
        {
            cur.c = 1;
            cur.f = -b/(2*a);
            cur.s = cur.f;
        }
        else
        {
            cur.c = 2;
            cur.f = (-b+sqrt(d))/(2*a);
            cur.s = (-b-sqrt(d))/(2*a);
        }
    }
    if (cur.f - cur.s > 0)
    {
        double q = cur.s;
        cur.s = cur.f;
        cur.f = q;
    }
    return cur;
}
