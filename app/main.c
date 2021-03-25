#include <stdio.h>

#include "myfunc.h"
#include <math.h>
int main()
{
    printf("Hello World!\n");
    solve ans;
    ans = equ(-1, 2, 15);
    if (ans.c == 0)
        printf("No solvations\n");
    else if (ans.c == -1)
        printf("Uncorrect data\n");
    else if (ans.c == 3)
        printf("Infinitive amount of roots\n");
    else for (int i = 1; i <= ans.c; i++)
    {
        if (i == 1) printf("%lf ", ans.f);
        else printf("%lf", ans.s);
    }
    //return myfunc(2);
}
