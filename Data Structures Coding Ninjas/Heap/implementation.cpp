#include <bits/stdc++.h>
using namespace std;

class MinHeap{
    int *data;
    int size;
    int capacity;

    public:

    MinHeap(int c){
        capacity = c;
        data = new int[capacity];
        size=0;
    }

    int left(int i){
        return (2*i)+1;
    }

    int right(int i){
        return (2*i)+2;
    }

    int parent(int i){
        return (i-1)/2;
    }

    void insert(int x){
        if(size==capacity){
            return;
        }
        size++;
        data[size-1] = x;
        for(int i=size-1 ; (i!=0) && (data[parent(i)]>data[i]) ; ){
            swap(data[i],data[parent(i)]);
            i=parent(i);
        }
    }

    void minHeapify(int i){
        int lt=left(i);
        int rt=right(i);
        int smallest=i;

        if(lt<size && data[i]>data[lt]){
            smallest = lt;
        }

        if(rt<size && data[smallest]>data[rt]){
            smallest = rt;
        }

        if(smallest!=i){
            swap(data[i],data[smallest]);
            minHeapify(smallest);
        }
    }
};

int main(){
    MinHeap heap(100);

}