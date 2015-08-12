#include <stdio.h>
int main(){
    int a=10;
int *p;
p=&a;
*p++;
printf("%d %d", a, *p);
    return 0;
}
