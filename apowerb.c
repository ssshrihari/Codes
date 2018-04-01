#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long int base, exponent;
        scanf("%lld %lld", &base,&exponent);
        long long int result,ans=1;
        result=base;
    for(int i=0;(1<<i)<=exponent;i++)
    {
        if(exponent&(1<<i))
            ans=(ans*result)%1000000007;
        result=(result*result)%1000000007;
    }
    printf("%lld\n", ans%1000000007);
    }
    return 0;
}
