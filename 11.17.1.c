/*
Ҫ�� 1 �ϲ���������  ����Ҫ�ٴδ���һ��������Խ�� 
2 �����Ȼ���򣬼���Ҫ�ִ�С���� 
����������򣿣�
��Ҫ�ĸ����� a b c 
c����a �� b�����е����� Ȼ��������ֵĽ��� 
�ж���С��Ҫ������
�ӵ�һ����ʼ�Ƚ� 
for (d ���������)
{for(���н�c�е����ִ�С����˳�����뵽b�У� 
�ж�һ�����ǲ�����֮�����С






*/ 
#include<stdio.h>
int main(){
	int m , n, t;
	scanf("%d%d",&m,&n);
	t = m+n;
	int a[m],b[n],c[t];
	int i=0,q=0;
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
		c[q]=a[i];
		q++;
	}
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
		c[q]=b[i];
		q++;
	}
	int j, p;
	for(i=0;i<t;i++){
		j=i+1;
		for(;j<t;j++){
			if(c[i]>c[j]){
				p=c[i];
				c[i]=c[j];
				c[j]=p;
			}
		}
	}
	for(i=0;i<t;i++){
		printf("%d ",c[i]);
	}

	return 0;
}




 
