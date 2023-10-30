//Tinh tong chan, le
#include <stdio.h>
int main(){
    long long n;
    scanf("%lld", &n);
    long long sum_even = 0;
    long long sum_odd = 0;
    while(n > 0){
        int digit = n % 10;
        if(digit % 2 == 0){
            sum_even += digit;
        }
        else{
            sum_odd += digit;
        }
        n /= 10;
    }
    printf("%lld\n", sum_even);
    printf("%lld\n", sum_odd);
    return 0;
}