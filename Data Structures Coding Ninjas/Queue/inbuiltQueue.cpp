#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int main(){

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    q.pop();
    cout << q.size() << endl;
    cout << q.empty() << endl;
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout << q.size() << endl;
    cout << q.empty() << endl;
}