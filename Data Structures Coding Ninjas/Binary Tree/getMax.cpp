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

int getMax(Node *root){
    if(root==NULL){
        return -1;
    }

    return max(root->key,max(getMax(root->left),getMax(root->right)));
}

int main(){

    Node *root = new Node(30);
    root->left = new Node(40);
    root->right = new Node(50);
    root->left->left = new Node(70);
    root->right->left = new Node(60);
    root->right->right = new Node(80);

    cout << getMax(root) ;
}

