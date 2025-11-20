#include<stdio.h>
int main()
{
	int a,b;
	int count =0;
	
	scanf("%d %d",&a,&b);
	
	if(a>b){
		int t=a;
		a=b;
		b=t;
	}
	
	for (int i=a;i<=b;i++)
	{
		int x = i;
		if(x==0){
			continue;
		} 
		
		while(x>0){
			if((x%10)==2) count++;
			x /=10;
		}
	}
	printf("%d\n",count);
	return 0;
}
