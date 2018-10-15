#include <iostream>

class Grinder
{
private:

	int x;
	int y;
	int *arr;
	int size;

public:
	Grinder();
	Grinder(const int num);
	Grinder(int x, int y);
	Grinder(const Grinder& secClas);
	~Grinder();
	void Show()
	{
		std::cout <<this<<": "<< x << "   " << y << std::endl;
	}
	

};

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
	std::cout << "Copy Contructor" << std::endl;
	this->x = secClas.x;
	this->y = secClas.y;
	for (int i = 0; i < this->size; i++)
	{
		secClas.arr[i] = this->arr[i];
	}
}
Grinder::~Grinder()
{
	std::cout << this << " Desteuctor" << std::endl;
	delete[] this->arr;
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


int main()
{
	//foo2();
	//foo(a);
	

	Grinder a(10);
	Grinder b(a);

	
	system("PAUSE");
	
	return 0;
	
}


