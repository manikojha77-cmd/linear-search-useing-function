#include<stdio.h>
int liner_search(int n,int a[],int search);
int main()
{
	int n,i,search,position;
	printf("Enter the array size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element you want to search:");
	scanf("%d",&search);
	position=liner_search(n,a,search);
	printf("The position is = %d",position);
	return 0;
}
int liner_search(int n,int a[],int search)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==search)
		{
			break;
		}
	}
	return i+1;
}
