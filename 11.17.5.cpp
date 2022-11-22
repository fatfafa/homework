/*
质因子只有2 3 5即除以其他质数都不能整除
除以2 3 5 




*/
#include<stdio.h>
int main(){
	int n=0,i=0;
	scanf("%d",&n);
	int a[n];
	for(;i<n;i++){
		scanf("%d",&a[i]);
		
	}
for(i=0;i<n;i++){
	while(1){
 while(a[i]%2==0)
        {  a[i]/=2;
        }
        while(a[i]%3==0)
        {  a[i]/=3;
        }
        while(a[i]%5==0)
        {  a[i]/=5;
        }

	if(a[i]==1){
		printf("true\n");
		break;
	}
	else{
		printf("false\n");
		break;
	}
	}	
	
}
	
	return 0;
} 
