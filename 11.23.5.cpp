#include<stdio.h>
int main(){
	int i,j,n=0,p,m;
	scanf("%d ",&m);
	char a[100]={'\0'};
	fgets(a,90,stdin);
	for(i=0;i<100;i++){
	if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')){
		continue;
	}
	else if(a[i]==' '){
		n++;
	}
	if(a[i]='\0'){
		break;
	}
	}
	n++;
	char b[n][15];
	for(i=0;i<n;i++){
		for(j=0;j<15;j++){
			b[i][j]='\0';
		}
	}
	for(i=0,j=0;i<n;i++,j++){
		p=0;
		while((a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z')){
			b[i][p]=a[j];
			p++;
			j++;
		}
	}	
	if(m>n){
		printf("error\n");
		goto out;
	}
	int c,t;
	c=n-m;
	t=c;
	do{
		i=0;
		while(b[c][i]!='\0'){
			printf("%c",b[c][i]);
			i++;
			if(b[c][i]=='\0'&&c!=t-1){
				printf(" ");
			}
		}
		c++;
		if(c==n){
			c=0;
		}
	}while(c!=t); 
	out:
	return 0;	
}

