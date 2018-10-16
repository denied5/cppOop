#include <iostream>
using namespace std;
#include "Grinder.h"

Grinder & Grinder::operator=(const Grinder & secClas)
{
	delete[] this->arr;
	cout << "Operator Ravno:  " <<this << endl;
	this->x = secClas.x;
	this->y = secClas.y;
	this->size = secClas.size;
	for (int i = 0; i < this->size; i++)
	{
		this->arr[i] = secClas.arr[i];
	}
	return *this;
}

Grinder::Grinder()
{
	std::cout << this << " Constr" << std::endl;
}

Grinder::Grinder(const int num)
{


	std::cout << this << " Constr" << std::endl;
	this->size = num;
	this->arr = new int[num];
	for (int i = 0; i < num; i++)
	{
		this->arr[i] = i;
	}

}

Grinder::Grinder(int x1, int y1)
{
	x = x1;
	y = y1;
	std::cout << this << " Constr" << std::endl;
}
Grinder::Grinder(const Grinder & secClas)
{
	delete[] this->arr;
	std::cout << "Copy Contructor" << std::endl;
		
		this->x = secClas.x;
		this->y = secClas.y;
		this->size = secClas.size;
		this->arr = new int[this->size];
		for (int i = 0; i < this->size; i++)
		{
			this->arr[i] = secClas.arr[i];
		}
	
}
Grinder::~Grinder()
{
	std::cout << this << " Desteuctor" << std::endl;
	if(this->arr)
	delete[] this->arr;
}
inline void Grinder::Show()
{

	std::cout << this << ": " << x << "   " << y << std::endl;
	cout << "Size" << this->size<< endl;
	for (int i = 0; i < this->size; i++)
	{
		cout << this->arr[i] << endl;
	}
	cout << endl;
	cout << endl;
	cout << endl;

}
void foo(Grinder newC)
{
	std::cout << "FOO" << std::endl;
	newC.Show();

}

Grinder foo2()
{
	std::cout << "FOO2" << std::endl;
	Grinder myTemp;
	return myTemp;
}
