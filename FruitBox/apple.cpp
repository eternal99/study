#include "apple.h"
#include <iostream>
using namespace std;

Apple::Apple(string name) : Fruit(name)
{
}
void Apple::Show()
{
	cout << "(사과 입니다. 이름은  " << m_name << "입니다.)" << endl;
}
