#include "box.h"
#include <iostream>
using namespace std;
Box::Box(string name)
	: m_name(name)
{
	//m_name = name;
	stuff = new list<Fruit *>;
}

void Box::Add(Fruit *r)
{
	stuff->push_back(r);
}

void Box::Show()
{
	list<Fruit *>::iterator i;
	cout << "상자. 이름은: " << m_name << ". 안에 들은 물건은: " << endl;
	for (i = stuff->begin(); i != stuff->end(); i++)
	{
		(*i)->Show();
	}
	cout << m_name << " 끝 ]" << endl;
}
