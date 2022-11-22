#include<stdio.h>
#include<string.h>
int main(){
	char a[999];
	gets(a);
	int l;
	l=strlen(a);
	printf("%d",l);
	return 0;
}
