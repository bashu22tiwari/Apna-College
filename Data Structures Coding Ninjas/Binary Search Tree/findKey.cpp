#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
    int key;
    Node *left;
    Node *right;

    Node(int k){
        key=k;
        left=right=NULL;
    }
};

bool findKey(Node *root , int n){
    if(root==NULL){
        return false;
    }

    if(root->key==n){
        return true;
    }

    if(n<root->key){
        findKey(root->left , n);
    }
    else{
        findKey(root->right , n);
    }
}

int main(){
    Node *root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(70);

    root->left->left = new Node(20);
    root->left->right = new Node(40);

    root->right->left = new Node(60);
    root->right->right = new Node(80);

    cout << findKey(root , 100 ) ;
}