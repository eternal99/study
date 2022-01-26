#pragma once
#include <iostream>
#include "fruit.h"

using namespace std;
class Apple:public Fruit {
	public:
		Apple(string);
		void Show();
};
