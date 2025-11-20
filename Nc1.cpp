#include<stdio.h>
int main()
{
	int a[12];
	for (int i=0;i<12;i++)
	{
		if(scanf("%d",&a[i])!=1)return 0;
	}
	
	int cash=0;
	int save =0;
	
	for (int j=0;j<12;j++)
	{
		cash+=300;
		
		if(cash<a[j])
		{
			printf("-%d\n",j+1);
			return 0;
		}
		
		int rem =cash -a[j];
		int to_save =(rem/100)*100;
		save+=to_save;
		cash=rem-to_save;
	}	
	cash += save + save/5 ;
	printf("%d\n",cash);
	return 0;
}