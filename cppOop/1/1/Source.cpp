#include <iostream>
using namespace std;
#include "Grinder.h"



int main()
{
	//foo2();
	//foo(a);
	

	Grinder a(10);
	a.Show();
	Grinder b(5);
	b.Show();
	a = b;
	a.Show();
	b.Show();
	system("PAUSE");
	
	return 0;
	
}


