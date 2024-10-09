#pragma once
#include"node.h"
class Clist
{  public:
	node* head;
	Clist();
	bool isempty();
	void insert_begin(int val);
	void insert_end(int valu);
	void insert_after(int dat,int pos);
	void delete_begin();
	void delete_end();
	void delete_after(int posi);
	void display();
};

