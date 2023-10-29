//In bang cuu chuong
#include <stdio.h>
int main(){
    int n, i;
    printf("Nhap so:");
    scanf("%d", &n);
    for(i=2; i<=9; i++){
        printf("%d * %d = %d", n, i, n * i);
    }
    return 0;
}