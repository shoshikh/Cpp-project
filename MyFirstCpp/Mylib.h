#pragma once

#include <iostream> 

using namespace std;

namespace library {



	void Function() {
		cout << "This is my first Function in the My lib library" << endl;
	}


	int Sum(int Num1, int Num2) {
		return Num1 + Num2;
	}

}