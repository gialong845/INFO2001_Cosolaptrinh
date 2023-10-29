//Danh gia diem
#include <stdio.h>
int main(){
    int num;
    printf("Nhap so diem de kiem tra xep loai:");
    scanf("%d", &num);
    if(num < 0 || num > 10){
        printf("Loi");
    } 
    else if(num >= 0 && num < 5){
        printf("Yeu");
    }
    else if(num >= 5 && num < 6.5){
        printf("Trung binh");
    }
    else if(num >= 6.5 && num < 8){
        printf("Kha");
    }
    else if(num >= 8 && num < 9){
        printf("Gioi");
    }
    else if(num >= 9 && num <= 10){
        printf("Xuat sac");
    }
    return 0;
}
