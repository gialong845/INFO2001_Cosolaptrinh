//Kiem tra so nguyen to
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Nhap so N:");
    scanf("%d", &n);

    if(n < 2){
        printf("N khong phai la so nguyen to");
        return 0;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            printf("N khong phai la so nguyen to");
            return 0;
        }
    }
    printf("N la so nguyen to");
    return 0;
}