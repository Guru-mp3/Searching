#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void linear(int *a,int s,int x);
int binary(int *a,int x,int l,int r);
void sort(int *a,int co);
int main() 
{
	int a[1000],n;
	int i,ch,k;
	printf("Enter the size of array:");
	scanf("%d",&n);
    printf("Enter the values in the array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the number you want to search:");
    int no;
    scanf("%d",&no);
    printf("\n\n1.Linear Search\n2.Binary Search\n\nEnter the type of searching technique to be used");
    scanf("%d",&ch);
    switch(ch)
    {
    	case 1:linear(a,n,no);
    	break;
    	case 2:selectionsort(a,n);
		k=binary(a,no,0,n);
		if(k==-909)
		printf("Number not found");
		else
		printf("Number found at array index %d",k);
		break;
		default:printf("Invalid Choice");
	}
	return 0;
}
