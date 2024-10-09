#include "Clist.h"
using namespace std;
Clist::Clist()
{
	head = NULL;
}
bool Clist::isempty()
{ 
	if (head == NULL)
		return true;
	else
		return false;
}
void Clist::insert_begin(int val)
{
	node* newnode = new node;
	newnode->data = val;
	newnode->next = NULL;
	if (isempty())
	{
		head = newnode;
		newnode->next = head;
	}
	else
	{
		node* temp = head;
		while (temp->next != head)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->next = head;
		head = newnode;
	}
}
void Clist::insert_end(int valu)
{
	node* newnode = new node;
	newnode->data = valu;
	newnode->next = NULL;
	if (isempty())
	{
		head = newnode;
		newnode->next = head;
	}
	else
	{
		node* temp = head;
		while (temp->next != head)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->next = head;
	}

}
void Clist::insert_after(int dat,int pos)
{
	node* newnode = new node;
	newnode->data = dat;
	newnode->next = NULL;
	if (isempty())
	{
		head = newnode;
		newnode->next = head;
	}
	else
	{
		node* temp = head->next;
		node* ptr = temp->next;
		int i = 1;
		while (temp->next!= head)
		{
			if (i == pos-1)
			{
				temp->next = newnode;
				newnode->next = ptr;
			}
			temp = temp->next;
			ptr = temp->next;
			i++;
		}
	}
}
void Clist::display()
{
	if (head == NULL)
	{
		cout << "List is empty";
	}
	else
	{
		node* temp = head;
		while (temp->next != head)
		{
			cout << temp->data << "->";
			temp = temp->next;
		}
		cout << temp->data << "->";
	}
}
void Clist::delete_begin()
{
	if (isempty())
	{
		cout << "List is empty";
	}
	else  
	{
		node* ptr = head;
		while (ptr->next != head)
		{
			ptr = ptr->next;
		}
		node* temp = head->next;
		node* delnode = head;
		head = temp;
		ptr->next = head;
		delete delnode;
	}
}
void Clist::delete_end()
{ 
	if (isempty())
	{
		cout << " List is empty " << endl;
	}
	else
	{
		node* temp = head->next;
		node* ptr = temp->next;
		while (ptr->next != head)
		{
			ptr = ptr->next;
			temp = temp->next;
		}
		node* delnode = ptr;
		temp->next = head;
			delete delnode;

	}

}
void Clist::delete_after(int posi)
{
	if (isempty())
	{
		cout << "List is empty " << endl;
	}
	else
	{
		node* temp = head->next;
		node* ptr = temp->next;
		int i = 0;
		while (ptr->next != head)
		{ 
			if (i == posi - 1)
			{
				node* deletenode = ptr;
				temp->next = ptr->next;

			}
			i++;
			temp = temp->next;
			ptr = ptr->next;
		}
	}
}