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

Node *insertKey(Node *root , int x){
    if(root==NULL){
        
        return new Node(x);
    }
    else if(root->key==x){
        return root;
    }
    else if(x<root->key){
        root->left = insertKey(root->left , x);
    }
    else{
        root->right = insertKey(root->right , x);
    }

    return root;

   
}


int main(){
    Node *root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(70);

    root->left->left = new Node(20);
    root->left->right = new Node(40);

    root->right->left = new Node(60);
    root->right->right = new Node(80);

    insertKey(root , 35);

    cout << root->left->right->left->key;
}