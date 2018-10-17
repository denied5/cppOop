#include <iostream>
using namespace std;
#include "Grinder.h"



int main()
{
	//foo2();
	//foo(a);
	

	Grinder a(10);
	a.setXY(5, 4);
	a.Show();
	Grinder b(5);
	b.setXY(1, 2);
	b.Show();
	Grinder c = a+b;
	c.Show();



	/*a = b;
	a.Show();
	b.Show();*/
	/*if (a == b)
		cout << "Equel" << endl;
	system("PAUSE");*/
	
	return 0;
	
}


