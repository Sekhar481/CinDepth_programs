/*P5.23 Program to show the use of comma operator in for loop*/
#include<stdio.h>
int main(void)
{
	int i,j;
	printf("enter the number\n");
	scanf("%d",&i);	
for(i,j=10; i<=j; i++,j--)
		printf("i=%d  j=%d\n",i,j);
	return 0;
}
