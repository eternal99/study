#pragma once
#include "fruit.h"
#include <iostream>

using namespace std;
class Banana:public Fruit {
	public:
		Banana(string);
		void Show();
};
