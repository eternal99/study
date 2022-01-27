#pragma once
#include "fruit.h"
#include <iostream>

using namespace std;
class Apple:public Fruit {
	public:
		Apple(string);
		void Show();
};
