#include "Roll.h"
#include <iostream>
using namespace std;
void Roll::setRoll(int rollsNumber) {
	cout << "Введіть дані про кожний з видів шпалер" << "\n" << "Довжина | Ширина | Ціна" << endl;
	for (int i = 0; i < rollsNumber; i++) {
		cout << i + 1 << ") ";
		cin >> roll[i].l >> roll[i].w >> roll[i].price;
	}
}
int Roll::getRollL(int index) {
	return roll[index].l;
}
int Roll::getRollW(int index) {
	return roll[index].w;
}
char Roll::getRollPrice(int index) {
	return roll[index].price;
}