#include<stdio.h>
char *c(char *a){
	int turn_cap=0,turn_low=0,i=0;
	while(a[i]!='\0')
		i++;
	int l=i;
	for(i=0;i<l;i++){
		if(a[i]==' '){
			turn_cap=0;
			turn_low=0;
		}
		else if((int)a[i]>=65&&(int)a[i]<=91&&turn_cap==0&&turn_low!=1){
			turn_cap=1;
			
		}
		else if((int)a[i]>=97&&(int)a[i]<=122&&turn_low==0&&turn_cap!=1){
		    turn_low=1;
		    
		}
		if(turn_cap==1)
		{
			if((int)a[i]>=97&&(int)a[i]<=122)
			    a[i]=(char)(int(a[i])-32);		
		}
		else if(turn_low==1)
		{
			if((int)a[i]>=65&&(int)a[i]<=91)
			    a[i]=(char)(int(a[i])+32);	
			
		}
	}
	return a;
}
int main(){
	char b[1000];
	scanf("%[^\n]s",b);
	printf("%s",c(b));
	return 0;
}
