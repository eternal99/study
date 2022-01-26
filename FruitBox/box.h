#pragma once
#include "apple.h"
#include <iostream>
#include <list>
using namespace std;
class Box {
	public:
		Box(string);
		void Add(Apple *);
		void Show();
	protected:
		list<Apple *> * stuff;
		string m_name;
};
