//输入数字 定义一个数组，来存储数字 
#include<stdio.h>
#include <math.h>
int main(){int n;
int a[n];
scanf("%d",&n);
int i; 
for(i=1;i<=n;i++){
	scanf("%d",&a[i]);
}
int b[100], c=0,d[n],sum=0,m,t;
for(i=1;i<=n;i++){
	t=a[i];
	while(a[i]!=0){
		b[c]=a[i]%10;
		a[i]=a[i]/10;
		c++;
	}
	a[i]=t;
	c=c-1;
	for(m=0;c>=0;c--,m++){
		sum=sum+b[m]*pow(10,c);
	}
	if(sum == a[i]){
		printf("Yes\n");
	}
	else{printf("No\n");
	}
	sum=0;
}
return 0;
} 
