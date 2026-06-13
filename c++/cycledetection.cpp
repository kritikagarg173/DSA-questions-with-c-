#include<iostream>
using namespace std;
void breakcycle(node*head, node*f){
    node*s = head;
    node* fp = head;
    while (fp->next != f){
        fp= fp->next;

    }
    while (s != f){
        s = s->next;
        f = f->next;
        fp = fp->next;

    }
    fp-> next = NULL;
}
bool isCyclic(node* head){
    node* f, *s;
    s = f = head;
    while (f and f-> next){
        f = f->next->next;+
        s = s->next;
        if (f == s){
            breakcycle(head, 1);
            return true;
        }
    }
    return false;
}




int main()

{

    node* head = NULL, *tail = NULL;
    insertAtEnd(head, tail, 1);
    insertAtEnd(head, tail, 2);
    insertAtEnd(head, tail, 3);
    insertAtEnd(head, tail, 4);
    insertAtEnd(head, tail, 5);
    insertAtend(head, tail, 6);
    insertAtEnd(head, tail, 7);
    insertAtEnd(head, tail, 8);
    tail-> next = head-> next->next;
    if (isCyclic(head)){
        cout << " cycle present\n";

    }
    else{
        cout << "cycle not present\n";
    }
    
    
    printLL(head);
    
}
