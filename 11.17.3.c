#include<stdio.h>
int main(){
	int n,i=0,j,m;
	long long p=1,t,sum=0;
	scanf("%d",&n);
	int a[n];//先输入n再定义int数组 
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
			if(a[i]>=25){
			a[i]=24;
		}
		}
	for(i=0;i<n;i++){
		if(a[i]>=25){//当到25的阶乘时已经有六颗零所以25之后的数字就没有必要了 
			a[i]=24;//因此当数字大于25时要把他们都变为24； 
		}
    	for(j=1;j<=a[i];j++){
    		for(m=1;m<=j;m++){//c语言中对于数字越位问题特别看重； 
    			p=p*m;
    			p=p%1000000;//多次对p取余尽可能减少发生数字越位的可能性！！！！ 
			}
			
			sum=sum+p;
			sum=sum%1000000;
			p=1;
    		
		}
		printf("%d\n",sum);
		sum=0;
		
	}
	
	
	return 0; 
	
}
