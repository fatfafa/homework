/*
�ܹ���n�� n�� �� n+1/2��ʱȫ���*
�ӵ�1�п�ʼ ��n+1/2��Ϊ*
�ܹ���Ҫn+1/2�� n��  
��һ�� ��n+1/2����ʼ ��������������*
�ȱ�� ǰn+1/2�� Ȼ���n+1/2-1��ﵽ��
�ؼ� ��ξ����ܵı�ﲢ�Ҹ�ֵ 
*/
#include<stdio.h>
int main(){
	int n,m,i,j,p=0,q=0,c=0,x;
	int d,f;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	p=0;
	q=0;	
	if(a[i]%2==0)
	{printf("error\n");
	continue;
	}
	m=(a[i]+1)/2;
	char b[m][a[i]];
	for(d=0;d<m;d++){
		for(f=0;f<a[i];f++){
			b[d][f]=' ';//���еĳ�ʼ�� 
		}
	}
	for(j=0;j<m;j++){
		if(c==0){
			b[j][m-1]='*';
		}
		else {
			for(x=0;x<=c;x++){
			if(x==0){
			b[j][m-1]='*';
		}			
			else if(x!=0){
			p=x+m-1;
			q=m-x-1;
			b[j][p]='*';
			b[j][q]='*';
			}
	}
		}
		c=c+1;
		//printf("%d\n",c);//��ǰn+1/2�н��и�*	
	}
	printf("print\n");
for(q=0;q<m;q++){//�ظ����� p q ���ٱ�����
		for(p=0;p<a[i];p++){
			printf("%c",b[q][p]);
			if(p==a[i]-1){
				printf("\n");
			}
		}
	
	}
	for(q=m-2;q>=0;q--){//�ظ����� p q ���ٱ�����
		for(p=0;p<a[i];p++){
			printf("%c",b[q][p]);
			if(p==a[i]-1){
			printf("\n");
			}
		}
	}
	
	
}
	return 0;
}
