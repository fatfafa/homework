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
	scanf("%[^\n]",a);//��ȡ 
	for(i=0;i<100;i++){
		if(a[i]=='\0')break;//���ٳ������д��� 
		if('0'<=a[i+c]&&a[i+c]<='9'){
		c+=1;
			while('0'<=a[i+c]&&a[i+c]<='9'){
			c+=1;
			}     //�����λ������� 
	
						
		for(j=0;j<c;j++){//�����鸳ֵ 
			b[n]=b[n]*10+((int)a[i+j]-'0');
		}
		if(a[i-1]=='-'){//����������� 
			b[n]=-b[n];
		}
		n++;
		i=i+c;
		c=0;
		continue;	
	    }
	    else if(a[i]=='n'){
		for(j=i+4;j<100;j++){
			if('0'<=a[i+c]&&a[i+c]<='9'){//n/a �м���������ֵ���� 
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
//˼·����ȡ ���������sum�ͼ� ������һ ֻҪ���� �Ǿ͹�ȥ 
//��ν�� ����n/a����� �ж� �����Ƿ�Ϊ�� ����� ��ô �ж� a[0] �Ƿ�Ϊn  ����� ��ô��� n/a 
