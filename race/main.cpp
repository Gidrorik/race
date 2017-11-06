#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include "map.h"
#include "obstacle.h"

using namespace race;


int main()
{

	int carspeed = 0;
	int speed = 120;
	bool startup = true;
	bool gameover = false;

	
	
		if (GetAsyncKeyState(VK_ESCAPE)) {
			gameover = true;
			return 0;
		}



		if (map[y - 2][x] == obstacle || map[y - 2][x - 1] == obstacle || map[y - 2][x + 1] == obstacle) {
			gameover = true;
			cout << "GAME OVER" << endl;

		}



		++carspeed;
		if (carspeed == 10 || carspeed == 30 || carspeed == 60 || carspeed == 90 || carspeed == 130 || carspeed == 180 || carspeed == 210) {
			speed -= 15;
		}
		Sleep(speed);

		if (GetAsyncKeyState(VK_RETURN)) {
			system("pause");
		
		}
		return 0;
	}

