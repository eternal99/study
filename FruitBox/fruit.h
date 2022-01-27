#pragma once

#include <iostream>
using namespace std;
class Fruit
{
public:
	Fruit(string);
	virtual void Show();

protected:
	string m_name;
private:
};
