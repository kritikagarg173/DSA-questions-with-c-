#include<iostream>
using namespace std;

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





















































































