//In ra so ngay cua thang
#include <stdio.h>
int main(){
    int t, n;  
    scanf("%d %d", &t, &n);
    
    if(t < 1 || t > 12){
        printf("INVALID\n");
        return 0;
    }
    if(n < 1){
        printf("INVALID\n");
        return 0;
    }
    

    int days = 31;
    if(t == 2){
        if(n % 4 == 0 && n % 100 != 0 || n % 400 == 0){
            days = 29;
        } else{
        days = 28;
        } 
    }
    else if(t == 4 || t == 6 || t == 9 || t == 11){
        days = 30;
    }
    
    printf("%d\n", days);
    return 0;
}