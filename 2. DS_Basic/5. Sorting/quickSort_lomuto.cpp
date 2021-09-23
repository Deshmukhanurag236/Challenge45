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


int lomuto(int array[],int low,int high)
{
    int pivot=array[high];
    int j=low-1;
	for(int i=low;i<=high-1;i++){
        // printArray(array,  size);
        if(array[i]<=pivot){
            j++;
            swap(array[i],array[j]);
            // cout<<endl;
            // cout<<"swapping"<<" "<<array[i]<<" & "<<array[j]<<endl;
        }
    }
    swap(array[high],array[j+1]);
    return (j+1);
}

void quick_sort(int array[],int low,int high){
    if(high>low){
        int p=lomuto(array,low,high);
        quick_sort(array,low,p-1);
        quick_sort(array,p+1,high);
        
    }
}



int main()
{
	int arr[]={1,3,5,7,2,4,6,8,4};
	int arr_size = sizeof(arr)/sizeof(arr[0]);

	cout << "Given array is \n";
	printArray(arr, arr_size);

	quick_sort(arr,0,arr_size);

	cout << "\nSorted array is \n";
	printArray(arr, arr_size);
	return 0;
}


