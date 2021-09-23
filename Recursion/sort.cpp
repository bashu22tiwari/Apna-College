#include <bits/stdc++.h>
using namespace std;

vector<int> sortArray(vector<int> v){
    if(v.size()==0){
        vector<int> v = {};
        return v;
    }

    int temp = v[0];
    v.erase(v.begin());
    vector<int> res = sortArray(v);

    int count = 0;
    for(int nums : res){
        if(nums<temp){
            count++;
        }
    }

    if(count==res.size()){
        res.push_back(temp);
    }
    else{
        res.insert(res.begin()+count,temp);
    }
    return res;
}

int main(){
    vector<int> v = {4,3,5,6,4,7,8,10,2,5};
    vector<int> res = sortArray(v);
    for(int i=0 ; i<res.size() ; i++){
        cout << res[i] << " "; 
    }
}