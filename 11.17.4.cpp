#include<stdio.h>
int main(){
	char a[100]={'\0'};
	int n=0,i,c=0,j,f=0,N;
	
	float sum=0.0;
	scanf("%d\n",&N);
	int b[N]={0}; 
	if(N==0){
		goto out;
	}
	scanf("%[^\n]",a);//读取 
	for(i=0;i<100;i++){
		if(a[i]=='\0')break;//减少程序运行次数 
		if('0'<=a[i+c]&&a[i+c]<='9'){
		c+=1;
			while('0'<=a[i+c]&&a[i+c]<='9'){
			c+=1;
			}     //解决多位数的情况 
	
						
		for(j=0;j<c;j++){//给数组赋值 
			b[n]=b[n]*10+((int)a[i+j]-'0');
		}
		if(a[i-1]=='-'){//解决负数问题 
			b[n]=-b[n];
		}
		n++;
		i=i+c;
		c=0;
		continue;	
	    }
	    else if(a[i]=='n'){
		for(j=i+4;j<100;j++){
			if('0'<=a[i+c]&&a[i+c]<='9'){//n/a 中间夹杂着数字的情况 
				i=j;
				f=0;
				break;				
			}
		f=1;
		}
	   	
		}
		}
if(n>0){
	for(i=0;i<n;i++&&f==0){
		sum+=b[i];
	}
	printf("%.2f",sum/n);
}
else if(n==0&&f==1){
	printf("n/a");
}
	out :
	return 0;
}
//思路：读取 如果是数字sum就加 除数加一 只要不是 那就过去 
//如何解决 都是n/a的情况 判断 除数是否为零 如果是 那么 判断 a[0] 是否为n  如果是 那么输出 n/a 
