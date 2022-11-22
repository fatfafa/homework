#include<stdio.h>
int main(){
	int m, n, i,j=0, s=10,a[50]={0},c=0;
	for(i=0;i<10;i++){
		scanf("%d",&m);		
		if(m!=0){
			c=c+m;
			for(n=0;n<m;n++){
				a[j]=i;
				j++;
			}
		}
	}
		if(a[0]!=0){
		printf("%d",a[0]);
		a[0]=-1;
	}
	else{
		for(i=0;i<c;i++){
				if(a[i]!=0&&a[i]!=-1){
				printf("%d",a[i]);
				a[i]=-1;
				break;
			}
		}
	}
for(i=0;i<c;i++){
	if (a[i]!=-1){
	printf("%d",a[i]);
		a[i]=-1;
		continue;
	}
	else continue;
}			
	return 0;
	}

