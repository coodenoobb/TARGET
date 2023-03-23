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
void trav(Node* root,map<int,vector<pair<int,int>>> &mp,int line,int level){
    if(root==NULL)  return;

    mp[line].push_back({level,root->data});
    trav(root->left,mp,line-1,level+1);
    trav(root->right,mp,line+1,level+1);

}
void vertical(Node* root,vector<int> &arr){
    map<int,vector<pair<int,int>>> mp;
    trav(root,mp,0,0);
    for(auto m : mp){
        sort(m.second.begin(),m.second.end());
        for(auto it : m.second){
            arr.push_back(it.second);
        }
    }

}
int main(){

    Node* root = NULL;
    root = buildTree(root);
    levelOrderTraversal(root);

    vector<int>arr;
    vertical(root,arr);

    for(auto it:arr){
        cout<<it<<" ";
    }



return 0;
}