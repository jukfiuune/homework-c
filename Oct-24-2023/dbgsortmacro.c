#include <stdio.h>

#define DEBUG

void incrsort(int *arr)
{
	int temp = 0;
	int doisort = 0;
	while(1){
		for(int j = 0; j < 10; j++)
		{
			if(arr[j]>arr[j+1])
			{
				doisort=1;
				temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1] = temp;
			}
		}
		if(!doisort) break;
		doisort = 0;
	}
}
int isdivth(int n)
{
	if(n%3==0) return 0;
	return 1;
}

int sumoffunc(int arr[])
{
	incrsort(arr);
	int sum = 0;
	for(int i = 0; i<10; i++){
		if(isdivth(i)){
			sum += arr[i];
		}
	}
	return sum;
}

void main()
{
	int arr[10]={3, 17, 22, 342, 1024, 2025, 19, 25, 35, 85};
    int answer = sumoffunc(arr);
	printf("The sum of elements divisible by three are %d\n",answer);
    #ifdef DEBUG
    printf("[");
    for(int i = 0; i < 9; i++){
        printf("%d, ",arr[i]);
    }
    printf("%d]\n",arr[9]);
    printf("Elements divisible by 3: ");
    for(int i = 0; i<10; i++){
		if(isdivth(i)){
			printf("%d ",arr[i]);
		}
	}
    printf("\n");
    #endif
}
