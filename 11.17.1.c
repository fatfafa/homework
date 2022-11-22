/*
要求 1 合并两个数组  即需要再次创建一个数组可以解决 
2 输出任然有序，即需要分大小排序 
如何做到有序？？
需要四个数组 a b c 
c储存a 与 b中所有的数字 然后进行数字的交换 
判断最小需要的流程
从第一个开始比较 
for (d 的最大容量)
{for(进行将c中的数字从小到大按顺序输入到b中） 
判断一个数是不是这之间的最小






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




 
