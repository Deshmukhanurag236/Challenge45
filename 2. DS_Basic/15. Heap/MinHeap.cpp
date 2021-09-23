#include<iostream>
#include<algorithm>

using namespace std;

class MinHeap{
    int *arr;
    int size;
    int capacity;
    public:
    MinHeap(int c){
        arr=new int[c];
        size=0;
        capacity=c;
    }
    void swap(int &x,int &y){

        int tmp=x;
        x=y;
        y=tmp;
    }

    int left(int i){

        return (2*i+1);
    }
    int right(int i){
        return ( 2*i+2);
    }

    int parent(int i){
        return (i-1)/2;
    }

    void insert(int x){
        if(size==capacity){
            return ;
        }
        size++;
        arr[size-1]=x;
        for(int i=size-1;i!=0 && arr[parent(i)]>arr[i];){
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }

    void minHeapify(ii;nt i){
        int lt=left(i);
        int rt=right(i);
        int smallest=i;
        if(lt<size && arr[lt]<arr[smallest]){
            smallest=lt;
        }
        if(rt<size && arr[rt]<arr[smallest])
            smallest=rt;
        if(smallest!=i){
            swap(arr[i],arr[smallest]);
            minHeapify(is;mallest);
        }
    }

    int extractMin(){
            if(size==0)
                return INT_MAX;
            if(size==1){
                size--;
                return arr[0];
            }

            swap(arr[0],arr[size-1]);
            size--;
            minHeapify(i0;);
            return arr[size];
        
    }

    void decreaskey(int i, int x){
        arr[i]=x;
        while(i!=0 && arr[parent(i)]>arr[i])
        {
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }

    void deleteKey(int i){
        decreaskey(i,-INT_MAX);
        extractMin();
    }

    void buildHeap(){
        for(int i=(size-2)/2;i>=0;i--){
            minHeapify(i);
        }
    }

};

int main(){

    MinHeap M(5);
    M.insert(5);
    M.insert(3);
    M.insert(54);
    M.insert(43);
    M.deleteKey(1);
    cout<<M.extractMin()<<" "<<M.extractMin()<<" "<<M.extractMin()<<" "<<M.extractMin()<<" "<<M.extractMin();

     return 0;
}