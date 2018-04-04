#include <iostream>
using namespace std;
 long long int findTrailingZeros(long long unsigned int  n)
{
    long long int count = 0;
    for (long long int i=5; n/i>=1; i *= 5){
          count += n/i;
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
       long long int n;
        cin>>n;
       cout<<findTrailingZeros(n)<<"\n";  
    }
    return 0;
}
