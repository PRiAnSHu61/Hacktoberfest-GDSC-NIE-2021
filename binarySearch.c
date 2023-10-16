#include<stdio.h>
int main()
{
	int low, high, key, n;
	int array[n];

	printf("Enter the number of elements of array:\n"); //For the length of array
	scanf("%d", &n);

	printf("Enter the elements of array:\n"); //Entering the elements
	for(int i=0; i<=n; i++){
		scanf("%d", &array[i]);
	}

	printf("Array:\n");  //Displaying array
	for(int i=0; i<n; i++){
		printf("%d", array[i]);
	}

	printf("Enter the target element:\n");
	scanf("%d", &key);

	low= 0;
	high = n-1;  //first and last element index

	while(low<=high){
		int mid = (low+high)/2;
		if (array[mid]=key){
			return printf("Element found at index: %d", mid);
		}
		else if(array[mid]>key){
			high= mid -1;
		}
		else{
			low=mid+1;
		}
		}
return 0;
}
