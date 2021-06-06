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
};

int main(){
    MinHeap heap(100);

}