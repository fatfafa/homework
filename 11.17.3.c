#include<stdio.h>
int main(){
	int n,i=0,j,m;
	long long p=1,t,sum=0;
	scanf("%d",&n);
	int a[n];//������n�ٶ���int���� 
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
			if(a[i]>=25){
			a[i]=24;
		}
		}
	for(i=0;i<n;i++){
		if(a[i]>=25){//����25�Ľ׳�ʱ�Ѿ�������������25֮������־�û�б�Ҫ�� 
			a[i]=24;//��˵����ִ���25ʱҪ�����Ƕ���Ϊ24�� 
		}
    	for(j=1;j<=a[i];j++){
    		for(m=1;m<=j;m++){//c�����ж�������Խλ�����ر��أ� 
    			p=p*m;
    			p=p%1000000;//��ζ�pȡ�ྡ���ܼ��ٷ�������Խλ�Ŀ����ԣ������� 
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
