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

void postorder(Node *root){
    Node *temp = root ;
    if(temp!=NULL){
        
        postorder(temp->left);
        postorder(temp->right);
        cout << temp->key << " ";
    }
}

int main(){

    Node *root = new Node(30);
    root->left = new Node(40);
    root->right = new Node(50);
    root->left->left = new Node(70);
    root->right->left = new Node(60);
    root->right->right = new Node(80);

    postorder(root);
}

