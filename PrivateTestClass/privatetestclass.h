#pragma once
#include <Windows.h>
#include <iostream>
using namespace std;

class Test {
private:
	void Test1() {
		for (uintptr_t x = 0; x < 1200; x++) {
			cout << "Test: " << x << endl;
		}
	}
public:
	void Test_FunctionPrivate() 
	{
		Test1();
	}
};

	