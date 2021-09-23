#include <iostream>
using namespace std;

void swap(int &i,int &j){
    int tmp=i;
    i=j;
    j=tmp;
}
void printArray(int A[], int size)
{
	for (auto i = 0; i < size; i++)
		cout << A[i] << " ";
        cout<<endl;
}


void Maxheapify(int arr[], int n,int i){
    int largest=i,left=(2*i)+1,right=2*i+2;
    if(left<n && arr[left]>arr[largest])
        largest=left;
    if(right<n && arr[right]>arr[largest])
        largest=right;
    if(i!=largest){
        swap(arr[largest],arr[i]);
        Maxheapify(arr,n,largest);
}
}

void buildHeap(int array[],int n){
    for(int i=(n-2)/2;i>=0;i--){
        Maxheapify(array,n,i);
        printArray(array, n);
        cout<<endl;
    }
}
void heap_sort(int arr[],int n){
    buildHeap(arr,n);
    
    for(int i=n-1; i>=1;i--){
        swap(arr[0],arr[i]);
        Maxheapify(arr,i,0);
    }


}



int main()
{
	int arr[]={1,3,5,7,2,4,6,8,4};
	int arr_size = sizeof(arr)/sizeof(arr[0]);

	cout << "Given array is \n";
	printArray(arr, arr_size);

	heap_sort(arr,arr_size);

	cout << "\nSorted array is \n";
	printArray(arr, arr_size);
	return 0;
}


