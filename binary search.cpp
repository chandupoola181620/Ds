#include<stdio.h>                                                      
int main()
{
	int i,n,frst,mid,last,arr[100],ele;
	printf("enter the no.of elements= ");
	scanf("%d",&n);
	printf("enter the %d elements=\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element to search= ");
	scanf("%d",&ele);
	frst=0;
	last=n-1;
	mid=(frst+last)/2;
	while(frst<=last)
	{
		if(arr[mid]<ele)
		{
			frst=mid+1;
		}
		else if(arr[mid]==ele)
		{
			printf("%d element is found at %d location",ele,mid+1);
			break;
		}
		else
			last=mid-1;
			mid=(frst+last)/2;
	}
	if(frst>last)
	{
		printf("NOT FOUND! %d element is found in the list",ele);
	}
	return 0;
}
