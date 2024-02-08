#include <stdio.h>

int decrsort(int *arr)
{
	int temp = 0;
	int doisort = 0;
	while(1){
		for(int j = 1; j <10; j++)
		{
			if(arr[j]>arr[j-1])
			{
				doisort=1;
				temp = arr[j];
				arr[j]=arr[j-1];
				arr[j-1] = temp;
			}
		}
		if(!doisort) break;
		doisort = 0;
	}
}
int isnotprime(int n)
{
	for (int i = 2; i < n-1; i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int numberofdigits(int n)
{
	int t = n;
	int num = 0;
	while(t!=0){
		t/=10;
		num++;
	}
	return num;
}

int sumoffunc(int arr[])
{
	decrsort(arr);
	int sum = 0;
	for(int i = 2; i<10; i++){
		if(isnotprime(i)){
			sum += numberofdigits(arr[i]);
		}
	}
	return sum;
}

void main()
{
	int arr[10]={3, 17, 22, 342, 1024, 2025, 19, 25, 35, 85};
	printf("The answer is %d",sumoffunc(arr));

}
