#include <iostream>
#include <string>
#include "num.h"

using namespace std;

void main() {

	Number2<int, string>Num1;
	Num1.setA(42);
	Num1.setB("The Answer");
	Num1.pairValues();

	Number2<double, int>Num2;
	Num2.setA(3.14);
	Num2.setB(100);
	Num2.pairValues();

	Number2< string, float>Num3;
	Num3.setA("pi");
	Num3.setB(3.14159);
	Num3.pairValues();


}