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

Node* buildTree(Node* node){

    cout<<"Enter data for Node ";
    int data;
    cin>>data;
    node= new Node(data);

    if(data==-1)    return NULL;

    cout<<"Enter data for left of node "<<data<<endl;
    node->left = buildTree(node->left);

    cout<<"Enter data for right of node "<<data<<endl;
    node->right = buildTree(node->right);

    return node;
}

void levelOrderTraversal(Node* node){

    queue <Node*> q;
    q.push(node);
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
int height(Node* node){
    // base case
    if(node==NULL)  return 0;


    int leftHeight = height(node->left);
    int rightHeight = height(node->right);

    int ans = max(leftHeight,rightHeight) + 1;

    return ans;
}
int diameter(Node* node){
    //base case
    if(node==NULL)  return 0;

    int leftSide = diameter(node->left);
    int rightSide = diameter(node->right);
    int bothSide = height(node->left) + height(node->right) + 1;

    int ans = max(leftSide,max(rightSide,bothSide));

    return ans;
}

int main(){

    Node* root = NULL;
    root = buildTree(root);
    levelOrderTraversal(root);
    int heightOfTree = height(root);
    int diameterOfTree = diameter(root);
    cout<<endl;
    cout<<"Height of Tree is "<<heightOfTree<<endl;
    cout<<"Diameter of Tree is "<<diameterOfTree<<endl;


return 0;
}