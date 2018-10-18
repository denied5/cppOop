#pragma once
class seeClaSS;

class Grinder
{
private:

	int x;
	int y;
	int *arr;
	int size;

public:
	Grinder & operator = (const Grinder& secClas);
	Grinder & operator + (const Grinder& secClas);
	Grinder & operator ++ ();
	Grinder & operator ++(int value);
	bool operator == (const Grinder& secClas);
	bool operator != (const Grinder& secClas);
	void setXY(int x, int y);
	Grinder();
	Grinder(const int num);
	Grinder(int x, int y);
	Grinder(const Grinder& secClas);
	friend void ChangeX(Grinder & cl, seeClaSS & cll);
	~Grinder();
	void Show();
};


Grinder foo2();
void foo(Grinder newC);
