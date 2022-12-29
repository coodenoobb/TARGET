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

void buildfromLevelOrder(Node* &root){
    queue <Node*> q;
    cout<<"Enter data for root : ";
    int data;
    cin>>data;

    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"Enter left Node for "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData!=-1){
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter right Node for "<<temp->data<<endl;
        int righdata;
        cin>>righdata;

        if(righdata!=-1){
            temp->right = new Node(righdata);
            q.push(temp->right);
        }
    }
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
    buildfromLevelOrder(root);
    levelOrderTraversal(root);

}