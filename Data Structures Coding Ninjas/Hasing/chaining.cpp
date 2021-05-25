#include <bits/stdc++.h>
using namespace std;

class Hash{
    int bucket;
    list<int> *table;

    public:

    Hash(int V){
        bucket = V ;
        table = new list<int>[bucket];
    }

    void insertItem(int key){
        int i = key%bucket;
        table[i].push_back(key);
    }

    void removeItem(int key){
        int i = key%bucket;
        table[i].remove(key);
    }

    bool searchItem(int key){
        int i = key%bucket;
        for(auto x : table[i]){
            if(x==key){
                return true;
            }
        }
        return false;
    }

    
};

int main(){
    Hash h(7);

    h.insertItem(51);
    h.insertItem(3);
    h.insertItem(2);
    h.insertItem(8);
    h.insertItem(49);
    h.insertItem(9);

    cout << h.searchItem(2) << "\n";
    cout << h.searchItem(9) << "\n";
    cout << h.searchItem(30) << "\n";

}