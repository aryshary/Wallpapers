#include "Apartment.h"
#include <iostream>
using namespace std;

void Apartment::setRoomsNumber() {
	cout << "������ ����� � �������? ";
	cin >> roomsNumber;
}
int Apartment::getRoomsNumber() {
	return roomsNumber;
}