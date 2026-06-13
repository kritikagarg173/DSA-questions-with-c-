
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node(int d) {
        data = d;
        next = NULL;

    }

};
void insertAtBegin(node * &head, node * &tail, int data){
    node *n = new node (data);
    if (head == NULL){
        head = tail = n;
        
    }
    else{
        n->next = head;
        head = n;
    }
}

int lengthLL(node *head){
    int cnt = 0;
    while (head){
        cnt++;
        head = head->next;
    }
    return cnt;
}



void printLL(node * head){
    while(head != NULL){
        cout << head->data << "-->";
        head = head->next;
    }
    cout << "NULL\n";
}
node* findMid(node* head){
    if (head == NULL || head->next == NULL){
        return head;
    }
    node *f = head->next;
    node*s = head;
    while(f != NULL and f->next != NULL){
        f = f->next->next;
        s = s->next;
    }
    return s;
}



node* MergeSortedLL(node *a, node*b){
    if (a == NULL) return b;
    if (b == NULL) return a;
    node*NH;
    if (a-> data < b->data){
        NH = a;
        NH -> next = MergeSortedLL(a->next,b);
        return NH;
    }
    else{
        NH = b;
        NH -> next = MergeSortedLL(a, b->next);
        return NH;
    }
}
int main()
{
    node*head = NULL, *tail = NULL;
    node*head1 = NULL, *tail1 = NULL;
    insertAtBegin(head, tail, 1);
    insertAtBegin(head, tail, 2);
    insertAtBegin(head, tail, 3);
    insertAtBegin(head, tail, 4);
    insertAtBegin(head, tail, 5);
    insertAtBegin(head1,tail1,6);
    insertAtBegin(head1,tail1,7);
    insertAtBegin(head1,tail1,8);
  
    printLL(head);
    
    node*mid = findMid(head);
    if (mid){
        cout << mid->data<< endl;

    }
    else{
        cout << "mid not present\n";
    }

    
    printLL(head);
    printLL(head1);
    node*NH = MergeSortedLL(head, head1);
    printLL(NH);
    return 0;
}