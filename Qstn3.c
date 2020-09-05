#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(0));
	int n=(rand()%100-1+1)+1;//lowerlimit is 1 and upper is 100
	int k=(rand()%n-1+1)+1;//lowerlimit is 1 and upper is n	
	int *ar=(int *)malloc(n*sizeof(int));
	printf("n is %d\n",n);
	printf("Initially array is:\n");
	for(int i=0;i<n;i++)
	{
		ar[i]=(rand()%100-1+1)+1;//lower limit is 1 and upper is 100
		printf("%d ",ar[i]);
	}
	printf("\nk is %d\n",k);
	int i=0;
	while(i<n)
	{
		int max;
		if(i+k-1<n)
			max=i+k-1;
		else
			max=n-1;
		for(int j=i,k=max;j<k;j++,k--)
		{
			int temp= ar[j];
			ar[j]=ar[k];
			ar[k]=temp;
		}
		i=i+k;	
	}
	printf("Array after reversing each subarray of length k is:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}
	printf("\n");
	
	return 0;
}
