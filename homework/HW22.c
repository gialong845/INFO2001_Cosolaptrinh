//BTTHm 05 Array Bai 3
#include <stdio.h>
int main(){
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        printf("Nhap diem sinh vien thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    float sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }

    float avg=sum/n;
    printf("Diem trung binh cua lop la %.2f.\n", avg);
    return 0;
}