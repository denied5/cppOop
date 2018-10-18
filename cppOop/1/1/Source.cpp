#include <iostream>
using namespace std;


//class seeClaSS;
#include "Grinder.h"
#include "seeClaSS.h"




int main()
{
	//foo2();
	//foo(a);
	
	seeClaSS s;
	Grinder a(10);
	a.setXY(5, 4);
	a.Show();
	Grinder b(5);
	b.setXY(1, 2);
	b.Show();
	Grinder c;
	c = a++;
	c.Show();
	a++;
	ChangeX(a, s);//Don't now how to work. Just compiling;


	/*a = b;
	a.Show();
	b.Show();*/
	/*if (a == b)
		cout << "Equel" << endl;*/
	system("PAUSE");
	
	return 0;
	
}


