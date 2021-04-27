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

void PrintKDistance(Node *root , int k){
    if(root==NULL){
        return;
    }
    
    if(k==0){
        cout << root->key << " ";
    }
    else{
        PrintKDistance(root->left,k-1);
        PrintKDistance(root->right,k-1);
    }
}

int main(){

    Node *root = new Node(30);
    root->left = new Node(40);
    root->right = new Node(50);
    root->left->left = new Node(70);
    root->right->left = new Node(60);
    root->right->right = new Node(80);

    PrintKDistance(root,2);
    
}

