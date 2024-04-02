#include "Calculator.h"
#include "Calculator1.h"
#include <iostream>

using namespace std;

int main() {
	Calculator calculator;
	cin >> calculator;
	cout << calculator;

	Calculator calculator1;
	cin >> calculator1;
	cout << calculator1;


	Calculator fraction2 = calculator + calculator1;

	cout << fraction2;

	fraction2 = calculator - calculator1;
	cout << fraction2;

	fraction2 = calculator * calculator1;
	cout << fraction2;


	cout << "> ";
	if (calculator > calculator1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "< ";
	if (calculator < calculator1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "== ";
	if (calculator == calculator1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << ">= ";
	if (calculator != calculator1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "<= ";
	if (calculator >= calculator1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "!= ";
	if (calculator <= calculator1) { cout << "yes" << endl; }
	else cout << "no" << endl;



	Calculator1 calculator3;
	cin >> calculator3;
	cout << calculator3;

	Calculator1 calculator4;
	cin >> calculator4;
	cout << calculator4;


	Calculator1 calculator5 = calculator3 + calculator4;

	cout << calculator5;

	calculator5 = calculator3 - calculator4;
	cout << calculator5;

	calculator5 = calculator3 * calculator4;
	cout << calculator5;


	cout << "> ";
	if (calculator3 > calculator4) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "< ";
	if (calculator3 < calculator4) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "== ";
	if (calculator3 == calculator4) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << ">= ";
	if (calculator3 != calculator4) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "<= ";
	if (calculator3 >= calculator4) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "!= ";
	if (calculator3 <= calculator4) { cout << "yes" << endl; }
	else cout << "no" << endl;

	return 0;
}