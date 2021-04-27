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

    stack<Node *> st;
    st.push(root);
    // while(curr!=NULL || st.empty()==false){
    //     while(curr!=NULL){
    //         st.push(curr);
    //         cout << curr->key << " ";
    //         curr = curr->left;
    //     }

    //     curr = st.top();
    //     st.pop();
    //     curr = curr->right;
    // }

    while(!st.empty()){
        Node *curr = st.top();
        cout << curr->key << " ";
        st.pop();

        if(curr->right!=NULL){
            st.push(curr->right);
        }
        if(curr->left!=NULL){
            st.push(curr->left);
        }
    }

}

