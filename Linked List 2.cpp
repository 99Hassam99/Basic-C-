#include <stdio.h>
using namespace std;

class node
{
public:
	int data;
	Node *next;
};
int main()
{
	Node* head=Null;
	append(&head, 6);
	push(&head, 7);
	push(&head,1);
	append(&head,4);
	insertAfter(head->next,8);
	cout<<"Created linked list is:";
	printList(head);
	return 0;
}