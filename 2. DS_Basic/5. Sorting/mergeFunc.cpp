#include <iostream>
using namespace std;

void merge(int array[], int const left, int const mid, int const right)
{
	int arr1Cap=mid-left+1;
	int arr2Cap=right-mid;

	int *arr1=new int[arr1Cap];
	int *arr2=new int[arr2Cap];

	for(int i=left,j=0;i<=mid;i++,j++){
		arr1[j]=array[i];
	}
	
	for(int i=mid+1,j=0;i<=right;i++,j++){
		arr2[j]=array[i];
	}

	int arr1Ptr=0,arr2Ptr=0;
	int mergedPtr=left;
	while(arr1Ptr<arr1Cap && arr2Ptr<arr2Cap){
		if(arr1[arr1Ptr]<=arr2[arr2Ptr]){
				array[mergedPtr++]=arr1[arr1Ptr++];

		}
		else{
			array[mergedPtr++]=arr2[arr2Ptr++];
		}
	}

	while(arr1Ptr<arr1Cap){
		array[mergedPtr++]=arr1[arr1Ptr++];
	}
	while(arr2Ptr<arr2Cap){
		array[mergedPtr++]=arr2[arr2Ptr++];
	}
}



void printArray(int A[], int size)
{
	for (auto i = 0; i < size; i++)
		cout << A[i] << " ";
}

int main()
{
	int arr[]={1,3,5,7,2,4,6,8};
	int arr_size = sizeof(arr)/sizeof(arr[0]);

	cout << "Given array is \n";
	printArray(arr, arr_size);

	merge(arr,0,3,8);

	cout << "\nSorted array is \n";
	printArray(arr, arr_size);
	return 0;
}


