#include "equ.h"
#include <math.h>

struct solve equ(double a, double b, double c)
{
    double d = b*b-4*a*c;
    struct solve cur;
    cur.c = 2;
    cur.f = (-b+sqrt(d))/2;
    cur.s = (-b-sqrt(d))/2;
    return cur;
}
