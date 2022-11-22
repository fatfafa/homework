#include<stdio.h>
int main(){
	char a[100]={0},b[12];
	int n,c,d=0,e,i,j=0;
	fgets(a,99,stdin);
	for(i=0;i<100;i++){
		if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z')){
			b[j]=a[i];
			j++;
		}
		else{
			if(a==0)d++;
			for(c=j-1;c>=0;c--){
				printf("%c",b[c]);
				
				j=0;
			}printf("%c",a[i]);
		}
		if(d==2){
			printf("\n");
			break;
		}
	}
	 return 0;
}
