/*6�� num=6 
    1��һ��1 ����1���� \n 
   1 1�ڶ��� �ڶ���������������һ�������� 
  1 2 1������ 
 1 3 3 1
1 4 6 4 1
*/
#include<stdio.h>
int main(){
int N;
scanf ("%d",&N);
int c;
for(c=1;c<=N;c++){

int num,t;//����
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
			printf("%d\n",b[m]);//��һ�� 
			break;
		}
		else if(m==1){
			printf("%d ",b[m]);//�����е�һ�� 
		}
		else if(m==i){
			printf("%d\n",b[i]);//���������һ�� 
			break; 
		}
		else{t=b[m-1]+b[m];//��������ͨ 
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
