#include<iostream>
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
node *insertInBst(node*root,int data){
    if (!root) {
        root = new node (data);
        return root;
    }
    if (root->data > data){
        root->left  = insertInBst(root->left,data);
        return root;;
        
    }
    else{
        root ->right = insertInBst(root->right,data);
        return root;
    }
}
node * createtree()
{
    node *root = NULL;
    int data;
    cin>>data;
    while (data != -1){
        root = insertInBst(root,data);
        cin >> data;

    }
    return root;
}

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
void printRange(node*root,int k1, int k2){
    if (!root) return;
    if (root->data >= k1 and root->data <= k2) cout << root->data << " "; 
    if (root->data > k2) printRange(root->left,k1,k2);
    else if (root->data < k1) printRange(root->right,k1,k2);
    else {
        printRange(root->left,k1,k2);
        cout << root->data << " ";
        printRange(root->right, k1,k2);
    }
}
//to search a node
node* searchBST(node* root, int key){
    if (!root) return NULL;
    if (root->data == key) return root;
    else  if (root->data >key) return searchBST(root ->left,key);
    return searchBST(root->right,key);
}
int treeMin(node*root){
    if (!root) return INT_MAX;
    int left_min = treeMin(root->left);
    int right_min = treeMin(root->right);
    return min(root->data,min(left_min,right_min));
}
int treeMax(node*root){
    if(root) return INT_MIN;
    int left_min = treeMax(root->left);
    int right_min = treeMin(root->right);
    return max(root->data, max(left_min,right_min));
}
bool  isBST(node*root){
    if (!root) return true;
    int left_max = treeMax(root->left);
    int right_min = treeMin(root->right);
    if (root->data < left_max || root->data > right_min) return false;
    
    bool isBSTLeft = isBST(root->left);
    bool isBSTRight = isBST(root->right);
    return isBSTLeft and isBSTRight;
}
bool isBSTFast(node *root, int mi = INT_MIN, int mx = INT_MAX){
    if(!root) return true;
    if (root->data >=mi and root->data<=mx and isBSTFast(root->left,mi,root->data)and
    isBSTFast(root->right,root->data,mx))return true;
    else return false;
}
class Pair{
    public:
    int height;
    bool isBalanced;

};
Pair isBalancedBST(node*root){
    if (!root) return {0, true};
    Pair left = isBalancedBST(root->left);
    Pair right = isBalancedBST(root->right);
    Pair p;
    p.height = max(left.height,right.height) +1;
    if (abs(left.height-right.height) <= 1 and left.isBalanced and right.isBalanced)
    p.isBalanced= true;
    else p.isBalanced= false;
    return p;
}
class LinkedList{
    public:
    node*head,*tail;
    LinkedList(){
        head = tail = NULL;
    }
};
LinkedList bstToll(node*root){
    //base case
    //recursive case
    if(root->left and root->right){
        LinkedList left = bstToll(root->left);
        LinkedList right = bstToll(root->right);
        left.tail->right = root;
        root->right = right.head;
        return {left.head,right.tail};
    }
    else if (root->left and !root->right){
        LinkedList left = bstToll(root->left);
        left.tail->right = root;
        return{left.head,root};

    }
    else if (!root->left and root->right){
        LinkedList right = bstToll(root->right);
        root->right = right.head;
        return {root,right.tail};
    }
    else{
        return{root,root};
    }
}
int main(){
    node*root = createtree();
     preorder(root);
    cout << endl;

    InOrder(root);
    cout << endl;

    postorder(root);
    cout << endl;

    printRange(root,2,8);

//node*ans = searchBST(root,100);
//cout << endl;

//if (ans) cout << "FOUND:" << ans->data << endl;
//else cout << "NOT FOUND\n";

//if (isBST(root))cout << "BST hain\n";
//else cout << "BST NHI HAIN\n";
//if (isBSTFast(root))cout << "BST hain\n";
//else cout << "BST NHI HAIN\n";


Pair ans = isBalancedBST(root);
cout << "height:" << ans.height << endl;
cout << "balanced:" << ans.isBalanced << endl;
LinkedList l = bstToll(root);
node *head = l.head;
while (head){
    cout << head->data << "-->";
    head = head->right;

}
cout << "NULL/n"

}


#include<iostream>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt")
}










