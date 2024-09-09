#pragma once
class Roll
{
	struct Rolls {
		int l;
		int w;
		char price;
	};
	Rolls roll[20];
public:
	void setRoll(int rollsNumber);
	int getRollL(int index);
	int getRollW(int index);
	char getRollPrice(int index);
};

