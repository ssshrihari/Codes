#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool check(char a,char b){
	if((a=='a'||a=='e'||a=='i'||a=='o'||a=='u')&&(b=='a'||b=='e'||b=='i'||b=='o'||b=='u'))
		return true;
	return false;	
}
int check_vowel_word(char *s){
	bool atleast=false;
	if(strlen(s)==1||strlen(s)==2){
	   printf("\n%s None",s);
	   return 0;
	}
	int j=1,a,b,count=0,word_count=0;
	char temp[30];
	temp[0]=s[0];
	for(int i=1;i<strlen(s);i++){
		if(s[i]==' '||s[i+1]=='\0'){
			if(s[i+1]=='\0')
			temp[j]=s[i];
			
			temp[j+1]='\0';
			
			printf("%s:(count=%d)\n",temp,count);
			memset(temp,0,30);
			count=0;
			j=0;
			i++;  
		}
		a=i-1;
		b=i+1;
		if(b<strlen(s))
		if(check(s[a],s[b])){
			count++;
			atleast=true;
		}
		temp[j]=s[i];	
		j++;
	}
	if(atleast)
	printf("\nNon None");
	else
	printf("\nNone");
}
int main(){
	char s[30];
	scanf("%[^\n]s",s);
	check_vowel_word(s);
	getchar();
 
	return 0;
}
