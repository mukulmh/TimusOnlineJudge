
#include<stdio.h>

int main()
{
    int a,b,s;

    scanf("%d %d",&a,&b);

    s = (a+b)-1;
    a = s-a;
    b = s-b;

    printf("%d %d\n",a,b);

    return 0;
}
