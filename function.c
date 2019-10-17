#include <stdio.h>
#include <stdlib.h>
int mid;
void linear(int *a,int s,int x)
{
	int i,f=0;
	for(i=0;i<s;i++)
	{
		if(a[i]==x)
		{
			f=1;
			printf("Element Found at index:%d\n\n",i);
			break;
		}
	}
	if(f==0)
	printf("Element Not Found.....\n\n");
}
int binary(int *a,int x,int l,int r)
{
	mid=(l+r)/2;
	printf("Value of mid=%d\n",mid);
	if(a[mid]==x)
	return(mid);
	else if(l>=r)
	return(-909);
	else if(a[mid]<x)
    return(0+binary(a,x,(mid+1),r));
    else
    return(0+binary(a,x,l,mid));
}
void selectionsort(int *a,int co)
{
	int j,i,temp,c;
	for(i=0;i<co;i++)
	{
		for(j=i+1;j<co;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n\nArray after sorting is:\n");
	for(i=0;i<co;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("\n\n");
}

