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


int hoaresPartition(int array[], int low,int high)
{
    int i=low-1,j=high+1;
    int pivot=array[low];
    while(true){
        
        do{
            i++;
        }while(array[i]<pivot);

        do{
            j--;
        }while(array[j]>pivot);

        if(i>=j)
            return j ;
        swap(array[i],array[j]);
    }

}
void quick_sort(int array[],int low,int high){
    if(high>low){
        int p=hoaresPartition(array,low,high);
        quick_sort(array,low,p);
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


