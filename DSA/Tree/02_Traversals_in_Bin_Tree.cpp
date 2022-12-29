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

Node* buildTree(Node* root){

    cout<<"Enter data for Node : ";
    int data;
    cin>>data;

    root = new Node(data);

    if(data==-1)   return NULL;

    cout<<"Enter data to be inserted in the left side of "<<data<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter data to be inserted in the right side of "<<data<<endl;
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
            if(temp->right)  q.push(temp->right);
        }
    }
}
// L N R
void inOrderTraversal(Node* root){
    if(root==NULL)  return;

    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

// N L R
void preOrderTraversal(Node* root){
    if(root==NULL)  return;

    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    
    preOrderTraversal(root->right);
}

// L R N
void postOrderTraversal(Node* root){
    if(root==NULL)  return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

int main(){

    Node* root = NULL;
    root = buildTree(root);
    levelOrderTraversal(root);

    cout<<endl;
    cout<<"InOrder Traversal : ";
    inOrderTraversal(root);

    cout<<endl;
    cout<<"PreOrder Traversal : ";
    preOrderTraversal(root);

    cout<<endl;
    cout<<"PostOrder Traversal : ";
    postOrderTraversal(root);

return 0;
}