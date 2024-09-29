#include <stdio.h>
#include <stdlib.h>
struct llist {
	char*name;
	struct llist*next;
	next=null;
};

void main (void)
{
	struct llist *listItem;
	struct llist *head=null;
	struct llist*temp;

listItem=malloc(sizeof(struct llist));
listItem->name ="Shaq";
listItem->next=null;
head=listItem;
temp=listItem;
listItem=malloc(sizeof(struct llist));
listItem->name="CS";
listItem->next=null;
temp->next=listItem;

temp=listItem;
listItem=malloc(sizeof(struct llist));
listItem->next=listItem;
listItem->name="UOP";
listItem->next=null;

temp=head;
         while(temp->next !=null)
         {
         	printf("% \n", temp->name);
         	temp=temp->next;
		 }
		 printf("%\n", temp->name);
}