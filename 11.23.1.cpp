/*
��� һ�����ж��ǲ��ǻ�����  ��ֱ�ӵ���Ȼ��ԱȾ�ok
Ȼ�� �ص�������ж����Ƿ�Խλ   
��Ҫдһ������ ���������� 
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

	
