#pragma once
class Room
{
	struct Rooms {
		int a;
		int b;
		int h;
		char choice;
	};
	Rooms room[20];
	int rollsNumber;
public:
	void setRoom(int roomsNumber);
	int getRoomA(int index);
	int getRoomB(int index);
	int getRoomH(int index);
	char getRoomChoice(int index);
	void setRollsNumber();
	int getRollsNumber();
};

