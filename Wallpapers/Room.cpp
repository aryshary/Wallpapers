#include "Room.h"
#include <iostream>
using namespace std;
void Room::setRoom(int roomsNumber) {
	cout << "������ ��� ����� � �����" << "\n" << "������� | ������ | ������ | ����� �����(+) �� �(-)" << endl;
	for (int i = 0; i < roomsNumber; i++) {
		cout << i + 1 << ") ";
		cin >> room[i].a >> room[i].b >> room[i].h >> room[i].choice;
	}
}
int Room::getRoomA(int index) {
	return room[index].a;
}
int Room::getRoomB(int index) {
	return room[index].b;
}
int Room::getRoomH(int index) {
	return room[index].h;
}
char Room::getRoomChoice(int index) {
	return room[index].choice;
}
void Room::setRollsNumber() {
	cout << "������ ���� ������ �� ������� ���������������? ";
	cin >> rollsNumber;
}
int Room::getRollsNumber() {
	return rollsNumber;
}