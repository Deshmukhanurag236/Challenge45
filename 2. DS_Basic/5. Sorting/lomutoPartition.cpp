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


void lomuto(int array[], int size,int pivot)
{
    int j=-1;
	for(int i=0;i<size-1;i++){
        printArray(array,  size);
        if(array[i]<=array[pivot]){
            j++;
            swap(array[i],array[j]);
            cout<<endl;
            cout<<"swapping"<<" "<<array[i]<<" & "<<array[j]<<endl;
        }
    }
    swap(array[pivot],array[j+1]);
}




int main()
{
	int arr[]={1,3,5,7,2,4,6,8,4};
	int arr_size = sizeof(arr)/sizeof(arr[0]);

	cout << "Given array is \n";
	printArray(arr, arr_size);

	lomuto(arr,arr_size,arr_size-1);

	cout << "\nSorted array is \n";
	printArray(arr, arr_size);
	return 0;
}


