#include<stdio.h>
int main()
{
	int n,i=0,j,k,temp,d=0,a,arr[10];
	scanf("%d",&n);
	while(n>0){
		a=n%10;
		d=d*10+a;
		n=n/10;
	}
	n=d;
	while(n>0){
		a=n%10;
		arr[i++]=a;
		n=n/10;
	}
	if(i%2==0)
	{
		for(j=0,k=i/2;j<i/2;j++,k++){
			temp=arr[j];
			arr[j]=arr[k];
			arr[k]=temp;
		}
	}
	else
	{
		for(j=0,k=(i+1)/2;j<(i-1)/2;j++,k++){
			temp=arr[j];
			arr[j]=arr[k];
			arr[k]=temp;
		}
	}
	for(j=0;j<i;j++){
		printf("%d",arr[j]);
	}
	return 0;
}
