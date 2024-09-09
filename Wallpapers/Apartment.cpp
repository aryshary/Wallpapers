#include "Apartment.h"
#include <iostream>
using namespace std;

void Apartment::setRoomsNumber() {
	cout << "—к≥льки к≥мнат в квартир≥? ";
	cin >> roomsNumber;
}
int Apartment::getRoomsNumber() {
	return roomsNumber;
}