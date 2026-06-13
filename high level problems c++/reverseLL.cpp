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
void reverseLL(node* &head, node* &tail){
    node*p = NULL, *c = head, *n;
    while (c){
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    swap(head, tail);

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
    reverseLL(head,tail);
    node*mid = findMid(head);
    if (mid){
        cout << mid->data<< endl;

    }
    else{
        cout << "mid not present\n";
    }

    
    printLL(head);
    return 0;
}

