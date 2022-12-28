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

void levelOrderTraversal(Node* root){
    queue <Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left)  q.push(temp->left);

            if(temp->right) q.push(temp->right);   
        }  
    } 
}

int main(){

    Node* root = NULL;

    root = buildTree(root);
    cout<<"Tree"<<endl;
    levelOrderTraversal(root);
return 0;
}