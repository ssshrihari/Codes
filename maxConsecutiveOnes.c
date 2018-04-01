#include<bits/stdc++.h>
using namespace std;
int maxConsecutiveOnes(long long unsigned int x)
{
    int count = 0;
    while (x!=0)
    {
        x = (x & (x << 1u));
        count++;
    }
    return count;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long unsigned int n;
        cin>>n;
    cout<<maxConsecutiveOnes(n) << endl;
    }
    return 0;
}
