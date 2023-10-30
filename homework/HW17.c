//Tinh tong cua day
#include <stdio.h>
int main(){
    int n;
    printf("Nhap gia tri nguyen duong: ");
    scanf("%d", &n);
    int S = 0;
    for(int i = 1; i <= n; i++){
        S += i * i;
    }
    printf("S=%d\n", S);

    return 0;
}
