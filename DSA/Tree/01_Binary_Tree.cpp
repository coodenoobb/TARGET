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

// Function to create TREE

Node* buildTree(Node* root){

    cout<<"Enter data for Node : ";
    int data;
    cin>>data;

    root = new Node(data);

    // -1 to terminate

    if(data==-1)    return NULL;

    cout<<"Enter Data to be inserted in left side of : "<<data<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter Data to be inserted in right side : "<<data<<endl;
    root->right = buildTree(root->right);


    return root;


}

int main(){

    Node* root = NULL;

    root = buildTree(root);
return 0;
}