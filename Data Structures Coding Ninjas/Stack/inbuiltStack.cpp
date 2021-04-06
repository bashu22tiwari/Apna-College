#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>

using namespace std;

int main(){
    stack<int> s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    cout << s1.size() << " ";
    cout << s1.top() << " ";
    cout << s1.empty() << " ";

    s1.pop();
    s1.pop();
    cout << s1.size() << " ";
    cout << s1.top() << " ";
    cout << s1.empty() << " ";

    s1.pop();
    s1.pop();

    cout << s1.empty() << " ";


    


}
