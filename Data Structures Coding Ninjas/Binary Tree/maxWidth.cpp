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

    queue<Node *> q;
    q.push(root);
    int maxWidth = 0;
    while(!q.empty()){
        int count = q.size();
        maxWidth = max(count, maxWidth);

        for(int i=0 ; i<count ; i++){

            Node *curr = q.front();
            q.pop();
        if(curr->left!=NULL){q.push(curr->left);}
        if(curr->right!=NULL){q.push(curr->right);}
        }
    }

    cout << maxWidth << endl;
    
}

