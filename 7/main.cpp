#include <iostream>

#include "human.h"
using namespace std;

int main() {
	    Human *hw;
	        hw = new Human("Hyunwoo Lee");
		hw->Hello::print();
		hw->Hello::setAge(37);
		hw->Hello::print();
	return 0;
}

