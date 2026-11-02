#include <stdio.h>
#include <stdlib.h>

int max = 90;






int add(int, int);

int main()
{
    static int x =30;
    int a=90;
    int b=10;

    int ret;

    ret = add(a, b);
    printf("Result = %d", ret);
    return 0;
}


int add(int a, int b)
{
    return (a+b);
}
