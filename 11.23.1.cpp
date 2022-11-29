/*
组成 一个是判断是不是回文数  就直接倒序然后对比就ok
然后 重点是如何判断其是否越位   
需要写一个函数 其作用是求倒 
*/
#include<stdio.h>
#include<math.h>
int daoxu(int x){
	int q,j=0,b[100]={0};
	for(;x>0;j++){
	b[j]=x%10;
	x/=10;
	}
	j=j-1;
	for(q=0;q<=j;q++){
		x=x*10+b[q];
	}
	if(x>pow(2,30)) {
	}
	return x;
} 
int main(){
	int n,m;
	scanf("%d",&n);
	m=daoxu(n);
while(n<pow(2,30)){
	m=daoxu(n);
	if(m==n){
		printf("%d",n);
		break;
	}
	else{
		n+=m;
	}
	
}
 
if(n>pow(2,30)){
	printf("No\n");
}
	
return 0;}

	
