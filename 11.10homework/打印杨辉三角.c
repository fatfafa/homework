/*6行 num=6 
    1第一行1 输入1个数 \n 
   1 1第二行 第二行输入两个数第一个数等于 
  1 2 1第三行 
 1 3 3 1
1 4 6 4 1
*/
#include<stdio.h>
int main(){
int N;
scanf ("%d",&N);
int c;
for(c=1;c<=N;c++){

int num,t;//行数
scanf("%d",&num);
int a[num],b[num]; 
int i,m;
for(i= 1;i<=num;i++){
a[i]=1;
b[i]=1;
}
	for(i= 1;i<=num;i++){

		for(m=1;m<=i;m++){
		if(m==1&&i==1){
			printf("%d\n",b[m]);//第一行 
			break;
		}
		else if(m==1){
			printf("%d ",b[m]);//其他行第一个 
		}
		else if(m==i){
			printf("%d\n",b[i]);//其他行最后一个 
			break; 
		}
		else{t=b[m-1]+b[m];//其他行普通 
			printf("%d ",t);
		}
		}
		for(m=1;m<=i;m++){
			if(m==1||m==i){
				b[m]=1;
			}
			else{
				b[m]=a[m-1]+a[m];
			}
		}
		for(m=1;m<=i;m++){
			a[m]=b[m];
		}
   }
   }

return 0;
}
