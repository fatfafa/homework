/*
总共有n行 n列 到 n+1/2行时全表达*
从第1行开始 第n+1/2个为*
总共需要n+1/2行 n列  
第一行 第n+1/2个开始 左右两边来给赋*
先表达 前n+1/2行 然后从n+1/2-1表达到零
关键 如何尽可能的表达并且赋值 
*/
#include<stdio.h>
int main(){
	int n,m,i,j,p=0,q=0,c=0,x;
	int d,f;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	p=0;
	q=0;	
	if(a[i]%2==0)
	{printf("error\n");
	continue;
	}
	m=(a[i]+1)/2;
	char b[m][a[i]];
	for(d=0;d<m;d++){
		for(f=0;f<a[i];f++){
			b[d][f]=' ';//数列的初始化 
		}
	}
	for(j=0;j<m;j++){
		if(c==0){
			b[j][m-1]='*';
		}
		else {
			for(x=0;x<=c;x++){
			if(x==0){
			b[j][m-1]='*';
		}			
			else if(x!=0){
			p=x+m-1;
			q=m-x-1;
			b[j][p]='*';
			b[j][q]='*';
			}
	}
		}
		c=c+1;
		//printf("%d\n",c);//对前n+1/2行进行赋*	
	}
	printf("print\n");
for(q=0;q<m;q++){//重复利用 p q 减少变量数
		for(p=0;p<a[i];p++){
			printf("%c",b[q][p]);
			if(p==a[i]-1){
				printf("\n");
			}
		}
	
	}
	for(q=m-2;q>=0;q--){//重复利用 p q 减少变量数
		for(p=0;p<a[i];p++){
			printf("%c",b[q][p]);
			if(p==a[i]-1){
			printf("\n");
			}
		}
	}
	
	
}
	return 0;
}
