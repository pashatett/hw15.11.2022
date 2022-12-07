#include "Drob_.h"
#include <iostream>

void Drob_::setFraction1() {
	cout << endl << "write numerator 1" << endl; cin >> numerator1;
	cout << "write denomirator 1" << endl; cin >> denomirator1;
}
void Drob_::setFraction2() {
	cout << endl << "write numerator 2" << endl; cin >> numerator2;
	cout << "write denomirator 2" << endl; cin >> denomirator2;
}
void Drob_::getFraction1() {
	cout << endl << numerator1 << "/" << denomirator1 << endl;
}
void Drob_::getFraction2() {
	cout << endl << numerator2 << "/" << denomirator2 << endl;
}
void Drob_::action() {
	int res;
	cout << endl << "Do you want to do any action(if yes then enter the number)" << endl;

	cout << "1)multiplication(*)" << endl
		<< "2)division(/)" << endl
		<< "3)don't need anything" << endl;
	//мне кажется достаточно умножения и деления
	cin >> res;

	if (res != 3) {
		switch (res) {
		case 1:
			resNumerator = numerator1 * numerator2;
			resDenomirator = denomirator1 * denomirator2;
		case 2:
			resNumerator = numerator1 * denomirator2;
			resDenomirator = denomirator1 * numerator2;
		}
		cout << resNumerator << "/" << resDenomirator;
	}
	else cout << ":(";
}