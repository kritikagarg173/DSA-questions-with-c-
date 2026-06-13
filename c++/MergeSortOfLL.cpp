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

void insertAtend(node * &head, node * &tail, int data){
    node *n = new node (data);
    if (head == NULL){
        head = tail = n;
        
    }
    else{
        tail->next = n;
        tail = n;
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

void insertAtMid(node* &head, node* &tail,int data, int pos){
    if (pos == 0){
        insertAtBegin(head, tail, data);
    }
    else if (pos >= lengthLL(head)){
        insertAtend(head, tail, data);
    }
    else{
        node * t = head;
        for (int i = 1; i <= pos - 1; ++i){
            t = t->next;
        }
        node *n = new node(data);
        n->next = t -> next;
        t-> next = n;
    }

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
node* mergesort(node* a){
    //base case
    if (a == NULL || a->next ==NULL){
        return a;
    }
    //recursive case
    //1.divide
    node *mid = findMid(a);
    node *b = a;
    node *c = mid->next;
    mid->next = NULL;
    //sort
    b= mergesort(b);
    c = mergesort(c);
    //merge
    node *NH= MergeSortedLL(b,c);
    return NH;

}
int main()
{
    node*head = NULL, *tail = NULL;
    insertAtBegin(head, tail, 1);
    insertAtBegin(head, tail, 2);
    insertAtBegin(head, tail, 3);
    insertAtBegin(head, tail, 4);
    insertAtBegin(head, tail, 5);
    insertAtend(head, tail, 6);
    insertAtMid(head, tail, 10, 4);

    
    printLL(head);
    head = mergesort(head);
    printLL(head);
    return 0;
}
