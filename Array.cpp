#include<stdio.h>
int main()
{
	int pointer[3][3];
	int i,j,m=3,n=3,sum=0;
	printf ("Enter the 9 values:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",(*(pointer+i)+j));
	}
	printf("The elememts are:\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",*(*(pointer+i)+j));
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		sum=sum+pointer[i][i];
	}
	printf("\nSum of diagonal elements is: %d",sum);
	return 0;
}
