//5 4  t=a
//1 s=5  t=t*10+a
//2 s=5+t  t=t*10+a
#include<stdio.h>
int main(){
	int a, n;
	scanf("%d", &a);
	scanf("%d",&n);
	int t=a;
	int i,s=0;
	for(i=0;i<n;i++){
		s+=t;
		t=t*10+a;
	}
	printf("%d",s);
	return 0;
}  
