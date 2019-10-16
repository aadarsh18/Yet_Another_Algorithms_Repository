#include<stdio.h>
long long int fact(int n)
{
	long long int a[100],i;
	a[0]=0;
	a[1]=1;
	for(i=2;i<=n;i++)
	{
		a[i]=i*a[i-1];
	}
	return a[n];	
}
int main()
{
    int n;
	printf("Please enter an Integer Number ");
	scanf("%d",&n);
	long long int num;
	num=fact(n);
	printf("The factorial of the number is: %lld \n",num);
	return 0;
}
