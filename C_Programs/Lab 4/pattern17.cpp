//pattern 17
#include<stdio.h>
int main()
{
	int n,i,j,s=0;
	printf("Enter value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
	    	s++;
			printf("%d ",s);}
		printf("\n");
	}
	return 0;
}
