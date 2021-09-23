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


int hoaresPartition(int array[], int size,int pivot)
{
    int i=-1,j=size+1;
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




int main()
{
	int arr[]={1,3,5,7,2,4,6,8};
	int arr_size = sizeof(arr)/sizeof(arr[0]);

	cout << "Given array is \n";
	printArray(arr, arr_size);

	int pivot=hoaresPartition(arr,arr_size,4);
    cout<<pivot<<endl;

	cout << "\nSorted array is \n";
	printArray(arr, arr_size);
	return 0;
}


