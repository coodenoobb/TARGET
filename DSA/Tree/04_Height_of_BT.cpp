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

    cout<<"Enter data for node ";
    int data;
    cin>>data;

    root = new Node(data);

    if(data==-1)    return NULL;

    cout<<"Enter data on the left side of node "<<data<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter data on the right side of node "<<data<<endl;
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

int height(Node* &node){
    // base case
    if(node==NULL)  return 0;

    // we will calculate the height for left side of the node then we will go for the right side of the node 
    // after that we will get the max of both

    int lh = height(node->left);
    int rh = height(node->right);

    int h = max(lh,rh) + 1;
    return h;
}

int main(){
    Node* root = NULL;
    root = buildTree(root);
    levelOrderTraversal(root);
    cout<<endl;

    int ans = height(root);
    cout<<"Height of the Tree is "<<ans;
return 0;
}