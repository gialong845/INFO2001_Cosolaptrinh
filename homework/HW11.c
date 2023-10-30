//Tinh tong, hieu, tich, thuong
#include <stdio.h>
int main(){
    int a,b;
    printf("a, b (b!=0, -10^9<=a,b<=10^9):", a, b);
    scanf("%d %d", &a, &b);
    int c,d,e;
    c=a+b; d=a-b; e=a*b;
    float f=a/b;
    printf("Tong la: %d\n", c);
    printf("Hieu la: %d\n", d);
    printf("Tich la: %d\n", e);
    printf("Thuong la: %.2f", f);
    return 0;
}