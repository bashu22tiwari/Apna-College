#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

template <typename T , typename V>

class Pair{
T x;
V y;

public:

    void setX(T x){
        this->x=x;
    }

    T getX(){
        return x;
    }

    void setY(V y){
        this->y=y;
    }

    V getY(){
        return y;
    }
};

int main()
{
    Pair < Pair<int , char> , double > p1;
    Pair<int , char> p2;

    p2.setX(10);
    p2.setY('d');
    p1.setX(p2);
    p1.setY(2.976);



    cout << p1.getX().getX() << " " << p1.getX().getY() << " " << p1.getY() << endl;
}