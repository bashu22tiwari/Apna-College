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

int main(){

    Node *root = new Node(30);
    root->left = new Node(40);
    root->right = new Node(50);
    root->left->left = new Node(70);
    root->right->left = new Node(60);
    root->right->right = new Node(80);

    // METHOD 1


    // queue<Node *> q;
    // q.push(root);
    // stack<Node *> s;
    // bool reverse = false;
    // while(!q.empty()){
    //     int count = q.size();
    //     for(int i=0 ; i<count ; i++){
    //         Node *curr = q.front();
    //         q.pop();
    //         if(reverse){
    //             s.push(curr);
    //         }
    //         else{
    //             cout << curr->key << " ";
    //         }

    //         if(curr->left!=NULL){q.push(curr->left);}
    //         if(curr->right!=NULL){q.push(curr->right);}
    //     }

    //     if(reverse){
    //        while(!s.empty()){
    //            Node *abc = s.top();
    //            s.pop();
    //            cout << abc->key << " ";
    //        } 
    //     }

    //     reverse = !reverse;
    // }


    // METHOD 2
    stack<Node *> s1;
    s1.push(root);
    stack<Node *> s2;
    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            Node *curr = s1.top();
            s1.pop();
            cout << curr->key << " ";
            if(curr->left!=NULL){s2.push(curr->left);}
            if(curr->right!=NULL){s2.push(curr->right);}
        }
        while(!s2.empty()){
            Node *curr = s2.top();
            s2.pop();
            cout << curr->key << " ";
            if(curr->right!=NULL){s1.push(curr->right);}
            if(curr->left!=NULL){s1.push(curr->left);}
        }
    }
}