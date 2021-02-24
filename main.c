#include <stdio.h>

int osszeg(int a,int b)
{   a=a+b;
    return a;
}

int main() {
    int a=3,b=4,ossz;
    //scanf("%d",&a);
    //scanf("%d",&b);
    ossz=osszeg(a,b);
    printf("%d",ossz);
    return 0;
}
