#include<stdio.h>
int main()
{
	int i,n,arr[100],ele;
	printf("enter the no.of elements= ");
	scanf("%d",&n);
	printf("enter the %d elements=\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element to search= ");
	scanf("%d",&ele);
	for(i=0;i<ele;i++)
	{
		if(arr[i]==ele)
		{
		    printf("%d element is found at %d location",ele,i);
		    break;
		}
	}
	if(i==ele)
	{
		printf("NOT FOUND!");
	}
	return 0;
}
