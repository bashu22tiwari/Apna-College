#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

class TwoStackQueue{
    stack<int> s1;
    stack<int> s2;

    public:

        void enqueue(int element){
            s1.push(element);
        }

        int dequeue(){
            if(s2.empty()){
                if(s1.empty()){
                    cout << "Queue is Empty\n";
                    return -1;
                }
                else{
                    while(!s1.empty()){
                        int x = s1.top();
                        s2.push(x);
                        s1.pop();
                    }

                    int x = s2.top();
                    s2.pop();
                    return x;
                }
            }
            else{
                int x = s2.top();
                s2.pop();
                return x;
            }
        }
};



int main(){
    TwoStackQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    q.enqueue(50);
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;

}