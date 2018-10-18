#pragma once

class Grinder;

class seeClaSS
{
	int data = 0;
public:
	seeClaSS();
	~seeClaSS();
	friend void ChangeX(Grinder & cl, seeClaSS & cll);
};

