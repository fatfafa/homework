#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j;
	float p,c,s;
	scanf("%d",&n);
	int a[n][3];
	for(i=0;i<n;i++){
		
		scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
        p=(a[i][0]+a[i][1]+a[i][2])/2.0;
		c=(p-a[i][0])*(p-a[i][1])*(p-a[i][2]);
		if(c<=0){
		printf("error\n");
		continue;
	}
	else{
	s=sqrt(p*c);
	printf("%.2f\n",s);
	}  
            }
		
	
	
return 0;	
}
