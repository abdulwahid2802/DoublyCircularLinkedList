#include "List.h"

void List::insert(int data)
{
	createNode(data);
}

void List::createNode(int data)
{
	Nptr n = new Node();
	n->data = data;
	n->next = n->prev = NULL;

	addNode(head, n);
}

void List::addNode(Nptr &head, Nptr n)
{
	if (head)
	{
		tail->next = n;
		n->prev = tail;
		tail = n;
		n->next = head;
		head->prev = n;
	}
	else
	{
		head = n;
		n->next = n->prev = head;
		tail = n;
	}
}

void List::print()const
{
	Nptr curr = head;
	if (head)
	{
		do
		{
			cout << curr->data << " ";
			curr = curr->next;
		} while (curr != head);


		cout << endl;
		curr = head;
		do
		{
			curr = curr->prev;
			cout << curr->data << " ";
		} while (curr != head);
	}

}

void List::find(int n, int m)const
{
	Nptr curr = head;
	do
	{
		if (curr->data == n)
			findMinPath(curr, m);
		curr = curr->next;
	} while (curr!=head);
}

void List::findMinPath(Nptr Ptr, int m)const
{
	int i = 0;
	Nptr curr = Ptr;
	int k=0;

	while (curr->data != m)
	{
		curr = curr->next;
		i++;
	}

	curr = Ptr;

	while (curr->data != m)
	{
		curr = curr->prev;
		k++;
	}

	printf("%d", i < k ? i-1 : k-1);
}