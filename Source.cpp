#include "List.h"

int main()
{
	srand(time(NULL));
	List list = List();

	for (int i = 0; i < 10; i++)
	{
		//list.insert(rand() % 100);
	}

	list.insert(5);
	list.insert(2);
	list.insert(17);
	list.insert(1);
	list.insert(4);
	list.insert(-2);
	list.insert(10);
	list.insert(8);
	list.insert(3);


	list.print();

	list.find(17, -2);






	_getch();
	return 0;
}