#include<stdio.h>
int main()
{
	int arr[100],i,k,x,n;
	printf("Enter number of elements in array");
	scanf("%d",&n);
	printf("Enter elements");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter one element");
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(arr[i]==x){
			k=i;
		}
	}
	while(arr[k]==x){
		k++;
	}
	if(k<n){
		printf("%d",k);
	}
	else{
		printf("-1");
	}
	return 0;
}
