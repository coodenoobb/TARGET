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
Node* insertBST(Node* root, int data){
    if(root==NULL){
        root = new Node(data);
        return root;
    }

    if(data > root->data){
        root->right = insertBST(root->right, data);
    }
    else{
        root->left = insertBST(root->left, data);
    }
    return root;
}
void input(Node* &root){
    int data;
    cin>>data;

    while(data!=-1){
        root = insertBST(root,data);
        cin>>data;
    }
}
Node* minValue(Node* root){
    Node *temp = root;

    while(temp->left!=NULL){
        temp = temp->left;
    }
    return temp;
}
Node* maxValue(Node* root){
    Node *temp = root;

    while(temp->right!=NULL){
        temp = temp->right;
    }
    return temp;
}
int main(){
    Node *root = NULL;
    cout<<"Enter data for root : ";
    input(root);
    cout<<"Input taken "<<endl;
    Node* mini = minValue(root);
    cout<<mini->data<<endl;
    Node* maxi = maxValue(root);
    cout<<maxi->data<<endl;

return 0;
}