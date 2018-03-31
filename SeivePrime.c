#include <bits/stdc++.h>
using namespace std;
const int MAX= 10000005;
int A[MAX];
bitset <MAX> prime;
 
void s(){
	prime.set();
	prime[0]=prime[1]=0;
	for (int i=4;i<MAX;i+=2){
		prime[i]=0;
	}
	for (int i=3;i*i<MAX;i+=2){
		if(prime[i]){
			for(int j= i*i;j<MAX;j+=2*i){
				prime[j]=0;
			}
		}
	}
}
 
int main(){
	s();
	for ( int i=1; i<MAX;i++){
		if ( prime[i]){
			A[i]+=A[i-1]+1;
		}
		else
			A[i]=A[i-1];
	}
	int n;
	scanf("%d",&n);
	int a,b;
	for (int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		printf("%d\n",A[b]-A[a-1] );
	}
}
 
