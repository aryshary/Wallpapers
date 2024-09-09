#include <iostream>
#include <cmath>
#include "Windows.h"
#include "Apartment.h"
#include "Room.h"
#include "Roll.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Apartment apartment;
    Room room;
    Roll roll;

    apartment.setRoomsNumber();
    room.setRoom(apartment.getRoomsNumber());
    room.setRollsNumber();
    roll.setRoll(room.getRollsNumber());

    int rollNumber[20];
    for (int i = 0; i < room.getRollsNumber(); i++) {
        int roomS = 0;
        int roomNumber = 1;
        cout << "\033[2J\033[1;1H";
        cout << "Назвіть номера кімнат, в яких ви використовуватиме шпалери номер " << i + 1 << " (введіть -1 для закінчення)" << endl;
        while(roomNumber != -2){
            cin >> roomNumber;
            roomNumber--;
            if (roomNumber != -2) {
                roomS += room.getRoomA(roomNumber) * room.getRoomB(roomNumber) + 2 * room.getRoomH(roomNumber) * (room.getRoomA(roomNumber) + room.getRoomB(roomNumber));
                if (room.getRoomChoice(roomNumber) == '+') roomS += room.getRoomA(roomNumber) * room.getRoomB(roomNumber);
            }
        }
        rollNumber[i] = ceil(float(roomS) / (roll.getRollL(i) * roll.getRollW(i)));
    }

    cout << "\033[2J\033[1;1H";
    int rollPrice = 0;
    for (int i = 0; i < room.getRollsNumber(); i++) {
        cout << rollNumber[i] << " шпалер " << i + 1 << " виду" << endl;
        rollPrice += rollNumber[i] * roll.getRollPrice(i);
    }
    cout << "Загальна вартість = " << rollPrice;
}
