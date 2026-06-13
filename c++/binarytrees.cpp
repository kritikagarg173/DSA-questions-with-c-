#include <iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;
    node(int d){
        data = d;
        left = right = NULL;

    }
};
//how to build a tree using nodes and data and assume left and right data as null 

void preorder(node*root){
    if (!root)return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void InOrder(node*root){
    if (!root)return;
    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
}
void postorder(node*root){
    if (!root)return;
    postorder(root->left);
    postorder(root->right);

cout << root->data << " ";
}
// count the number of nodes in tree
int CountNodes(node*root){
    if (!root)return 0;
    return 1 + CountNodes(root->left)+ CountNodes(root->right);
    
}
//height of tree
int HeightOfTree(node*root){
    if(!root)return 0;
    return max(HeightOfTree(root->left), HeightOfTree(root->right)) + 1;
}
//diameter of tree
//int DiameterOfTree(node*root){
    // if(!root) return 0;
   // int op1 = HeightOfTree(root->left) + HeightOfTree(root->right);
   // int op2 = DiameterOfTree(root->left);
   // int op3 = DiameterOfTree(root->right);
  //  return max(op1,max(op2,op3));
// }

//class pair
class Pair{
    public:
    int height;
    int diameter;

};
Pair fastDiameter(node*root)
{
 // base case
 if (!root){
    Pair p;
    p.height = p.diameter = 0;
    return p;
 }
 //recursive case
 Pair left = fastDiameter(root->left);
 Pair right = fastDiameter(root->right);

  Pair p;
 p.height = max(left.height,right.height)+1;
 int op1= left.height + right.height;
 int op2 = left.diameter;
 int op3 = right.diameter;
 p.diameter = max(op1, max(op2,op3));
 return p;
}
//to find a node
node* searchNode(node* root, int key){
    //base case
    if(!root) return NULL;
    //recursive case
    if(root->data == key) return root;
    node * ans = searchNode(root->left, key);
    if (ans!=NULL) return ans;
    return searchNode(root->right,key);
}
// mirror a binary tree
 void mirrorTree(node *root){
    //base case
    if (!root) return;

    //recursive case
    swap(root->left, root->right);
    mirrorTree(root->left);
    mirrorTree(root->right);
 }
 // level order traversal
 void levelOrderTraversal(node *root){
    if (!root) return;
    queue <node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node*f = q.front();
        q.pop();
        if (f){
            cout << f->data << " ";
            if (f->left) q.push(f->left);
            if (f->right) q.push(f->right);
        }
        else{
            cout << endl;
            if (!q.empty()) q.push(NULL);
        }
    }

 }
 //make tree from inorder and preorder
 // 8 10 1 6 4 7 3 14 13 preorder
// 1 10 4 6 7 8 3 13 14  inorder
int pre[] = {8 ,10 ,1, 6 ,4, 7 ,3 ,14 ,13 };
int in[] = {1, 10 ,4 ,6, 7, 8, 3, 13, 14};
int i = 0;
node *createTree(int s, int e)
{
    //base case 
    if (s > e)return NULL;
    //recursive case
    node *root = new node(pre[i++]);
    int k;
    for (int j = s; j <= e; ++j){
        if (in[j] == root->data)
{
    k = j;
    break;
}   
 }
 root->left = createTree(s,k-1);
 root->right = createTree(k + 1,e);
 return root;

}

//8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

int main()
{
    //node * root = buildTree();
    
    preorder(root);
    cout << endl;

    InOrder(root);
    cout << endl;

    postorder(root);
    cout << endl;

    cout << CountNodes(root) << endl;

    cout<< HeightOfTree(root)<<endl;

    // cout << DiameterOfTree(root) << endl;

    Pair ans = fastDiameter(root);
    cout << "tree height = " << ans.height << endl;
    cout << " tree diameter = " << ans.diameter << endl;
    node * x = searchNode(root,100);
    if(x)
    {
        cout << "key found: " << endl;
    }
    else {
        cout << "key not found" << endl;
    }
    levelOrderTraversal(root);

}
int main()
{
    
    
}















