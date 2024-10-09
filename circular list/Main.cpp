#include"Clist.h"
using namespace std;
int main()
{
	Clist obj;
	obj.insert_begin(5);
	obj.insert_begin(10);
	obj.insert_begin(18);
	obj.insert_begin(23);
	obj.insert_begin(45);
	cout << " Insertion at the begining " << endl;
	obj.display();
	obj.insert_end(2);
	obj.insert_end(6);
	obj.insert_end(7);
	cout << "\n Insertion at the end " << endl;
	obj.display();
	obj.insert_after(0,2);
	obj.insert_after(1,4);
	cout << "\n Insertion at any position " << endl;
	obj.display();
	obj.delete_begin();
	cout << "\n Deletion from the start " << endl;
	obj.display();
	obj.delete_end();
	cout << "\n Deletion from end " << endl;
	obj.display();
	obj.delete_after(3);
	cout << "\n Deletion from any position " << endl;
	obj.display();
	return 0;
}