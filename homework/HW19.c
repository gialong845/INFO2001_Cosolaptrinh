//Kiem tra so dep
#include <stdio.h>
int main(){
    long long n;
    scanf("%lld", &n);
    int count_even = 0;
    int count_odd = 0;
    while(n > 0){
        int digit = n % 10;
        if(digit % 2 == 0){
            count_even++;
        }
        else{
            count_odd++;
        }
        n /= 10;
    }
    if(count_even == count_odd){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}