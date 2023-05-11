#pragma once
#include <iostream>

using namespace std;

class Zwierze
{
public:
	virtual void dzwiek();
};

class Pies : public Zwierze {
public:
	void dzwiek();
};

class Kot : public Zwierze {
public:
	void dzwiek();
};
