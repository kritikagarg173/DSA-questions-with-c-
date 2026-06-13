#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
void insertAtBegin(node *&head, node *&tail, int data)
{
    node *n = new node(data);
    if (head == NULL)
    {
        head = tail = n;
    }
    else
    {
        n->next = head;
        head = n;
    }
}

int lengthLL(node *head)
{
    int cnt = 0;
    while (head)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

void printLL(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "-->";
        head = head->next;
    }
    cout << "NULL\n";
}
void bubbleSort(node* &head) {
	node *c, *p, *n;

	int len = lengthLL(head);

	for (int i = 0; i < len - 1; ++i)
	{
		c = head; p = NULL;
		while (c and c->next) {
			n  = c -> next;
			if (c->data > n->data) { // swapping hogi
				if (p == NULL) { // Head change hoga
					c -> next = n->next;
					n->next = c;
					head = p = n;
				}
				else { // head change nahi hoga
					c -> next = n->next;
					n->next = c;
					p-> next = n;
					p = n;
				}
			}
			else { // swapping nahi hogi
				p = c;
				c = n;
			}
		}
	}
}




int main()
{
    node *head = NULL, *tail = NULL;
    node *head1 = NULL, *tail1 = NULL;
    insertAtBegin(head, tail, 1);
    insertAtBegin(head, tail, 2);
    insertAtBegin(head, tail, 3);
    insertAtBegin(head, tail, 4);
    insertAtBegin(head, tail, 5);
    insertAtBegin(head1, tail1, 6);
    insertAtBegin(head1, tail1, 7);
    insertAtBegin(head1, tail1, 8);

    printLL(head);

  

    printLL(head);
    printLL(head1);

    
    return 0;
}