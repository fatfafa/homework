#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n][5]={0};
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<5;j++){
		scanf("%d",&a[i][j]);
		}
	}
	int e,b,c;
	for(i=0;i<n;i++){
		e=0;
		b=0;
		c=0;
		for(j=0;j<5;j++){
		if(a[i][j]>0){
			e++;
		}
		else if(a[i][j]<0){
			b++;
		}
		else{
			c++;
		}
		}
	printf("%d %d %d\n",e,b,c);
	}
	return 0;
} 

