#include <stdio.h>
int main(void)
{
    int a =44;
    int b =66;
    int *pa, *pb;

    pa = &a;
    pb = &b;
    printf("*pa=%d *pb=%d\n", *pa, *pb);

    *pa=*pb;
    printf("a=%d b=%d\n", a,b);
}
