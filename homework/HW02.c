//Viet chuong trinh C de tinh tong cac so tu 1 den n, voi n la mot so nguyen duong cho truoc
#include <stdio.h>
int main(){
    int S=0;
    int n; 
    printf("Gia tri cua n:");
    scanf("%d", &n);
 
    for(int i=1; i<n; i++){
        S=S+i;
    }
    printf("Tong la: %d", S);
    return 0;
}