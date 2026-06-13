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
    return 0;
}

// void delete at mid
void deleteAtMid(node* &head, node* &tail, int pos){
    if (pos == 0) {
        deleteAtBegin(head, tail);
    }
    else if (pos >= lengthLL(head) - 1){
        deleteAtEnd(head, tail);

    }
    else{
        node * t = head;
        for (int i = 0; i < pos - 1; ++i){
            t = t->next;
        }
        node* n = t->next;
        t->next = n->next;
        delete n;
    }
}




