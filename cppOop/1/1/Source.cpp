#include <iostream>

class Grinder
{
private:
	bool CheckVolt()
	{
		return 1;
	}
	int x;
	int y;

public:
	Grinder();
	Grinder(int x, int y);
	void Start()
	{
		bool voltageIsNormal = CheckVolt();
		if (voltageIsNormal)
		std::cout << "Pidor" << std::endl; 
		else
		std::cout << "Pi Pi Pidor" << std::endl;
	}


};


int main()
{
	Grinder a;
	a.Start();
}

Grinder::Grinder(int x1, int y1)
{
	x = x1;
	y = y1;
}
