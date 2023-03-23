#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertBST(Node* root, int val){
    if(root==NULL){
        root = new Node(val);
        return root;
    }

    if(val > root->data){
        root->right = insertBST(root->right, val);
    }
    else{
        root->left = insertBST(root->left, val);
    }
    return root;
}

void input(Node* &root){
    int val;
    cin>>val;

    while(val!=-1){
        root = insertBST(root,val);
        cin>>val;
    }
}