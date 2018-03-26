#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *merge_two_strings(char *a,char*b){
	int k=0;
	int i=0,j=0,z=0;
	char *temp=(char*)malloc(200000*sizeof(char));
	for(z=0;a[i]!='\0'||b[j]!='\0';z++){
		if(a[i]=='\0')
			temp[k++]=b[j++];
		else if(b[j]=='\0')
			temp[k++]=a[i++];
		else
			if(z%2==0)
				temp[k++]=a[i++];
			else
				temp[k++]=b[j++];
	}
	temp[k]='\0';
	return temp;
}
int main(){
	char a[100000];
	char b[100000];
	scanf("%s",a);
	scanf("%s",b);
	printf("%s\n",merge_two_strings(a,b));
	getchar();
	return 0;	
	
}
