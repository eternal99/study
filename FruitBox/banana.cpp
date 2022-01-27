#include "banana.h"
#include <iostream>
using namespace std;

Banana::Banana(string name) : Fruit(name)
{
}
void Banana::Show()
{
	cout << "(바나나 입니다. 이름은  " << m_name << "입니다.)" << endl;
}
