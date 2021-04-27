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

// Level Order Traversal Using Long Method


// void PrintKDistance(Node *root , int k){
//     if(root==NULL){
//         return;
//     }
    
//     if(k==0){
//         cout << root->key << " ";
//     }
//     else{
//         PrintKDistance(root->left,k-1);
//         PrintKDistance(root->right,k-1);
//     }
// }

// int heightOfBinary(Node *root){
//     if(root==NULL){
//         return 0;
//     }

//     return 1 + max(heightOfBinary(root->left) , heightOfBinary(root->right));
// }

// void levelOrderTraversal(Node *root){
//     int abc = heightOfBinary(root);
//     for(int i=0 ; i<abc ; i++){
//         PrintKDistance(root,i);
//     }
// }

int main(){

    Node *root = new Node(30);
    root->left = new Node(40);
    root->right = new Node(50);
    root->left->left = new Node(70);
    root->right->left = new Node(60);
    root->right->right = new Node(80);

    // levelOrderTraversal(root);


    queue<Node *> q;
    q.push(root);
    while(!q.empty()){
        Node *temp = q.front();
        cout << temp->key << " ";
        q.pop();
        if(temp->left!=NULL){q.push(temp->left);}
        if(temp->right!=NULL){q.push(temp->right);}
    }
    
}

