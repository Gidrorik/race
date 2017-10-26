#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;

void clearscreen(); 


int main()

{
	const int width = 20;
	const int heght = 25;
	char map[25][25];
	for (int i = 0; i < 20; ++i) {
		for (int j = 0; j < 26; ++j) {
			map[i][0] = '#';
			map[i][18] = '#';
			map[i][j] = ' ';
		}
		
	}


	int y = 17, x = 9; 
	int h = 0, g = rand() % 15 + 2;
	int a = 0, b = rand() % 15 + 2; 
	int carspeed = 0;
	int speed = 120;
	bool startup = true;
	bool gameover = false;
	char obstacle = 88;
	char obstacle1 = 88;
	char car = 'O';
	map[y][x] = car;
	char menu;
    	//cout << "Press any key:";
	//cin >> menu;
	//if (menu == ' ' || menu == ' ') {}
	
	
	for (;;) {
		clearscreen();
		map[y][x] = 'O';
		map[y][x + 1] = 'X';
		map[y][x - 1] = 'X';
		map[y + 1][x - 1] = 'X';
		map[y + 1][x + 1] = 'X';
		map[y - 1][x - 1] = 'X';
		map[y - 1][x + 1] = 'X';

		map[a][b] = ' ';
		map[a][b + 1] = ' ';
		map[a][b - 1] = ' ';
		map[a + 1][b - 1] = ' ';
		map[a + 1][b + 1] = ' ';
		map[a - 1][b - 1] = ' ';
		map[a - 1][b + 1] = ' ';
		++a;
		map[a][b] = obstacle;
		map[a][b + 1] = obstacle;
		map[a][b - 1] = obstacle;
		map[a + 1][b - 1] = obstacle;
		map[a + 1][b + 1] = obstacle;
		map[a - 1][b - 1] = obstacle;
		map[a - 1][b + 1] = obstacle;
		if (a > 20) {
			a = 0;
			b = rand() % 15 + 1;
		}
		map[h][g] = ' ';
		map[h][g + 1] = ' ';
		map[h][g - 1] = ' ';
		map[h + 1][g - 1] = ' ';
		map[h + 1][g + 1] = ' ';
		map[h - 1][g - 1] = ' ';
		map[h - 1][g + 1] = ' ';
		++h;
		map[h][g] = obstacle1;
		map[h][g + 1] = obstacle1;
		map[h][g - 1] = obstacle1;
		map[h + 1][g - 1] = obstacle1;
		map[h + 1][g + 1] = obstacle1;
		map[h - 1][g - 1] = obstacle1;
		map[h - 1][g + 1] = obstacle1;
		if (h > 20) {
			h = 1;
			g = rand() % 10 + 2;
			g += 2;

			
		}


		for (int i = 0; i < 20; ++i) {
			for (int j = 0; j < 20; ++j) {
				cout << map[i][j];
				if (j >= 19) {
					cout << endl;
				}
			}
		}

		cout << "    SPEED: " << carspeed;
		if (startup) {
			_getch();
			startup = false;
		}
		if (GetAsyncKeyState(VK_LEFT)) {
			if (map[y][x - 3] == obstacle) {
				gameover = true;
			}
			else if (map[y][x - 3] != '#') {
				map[y][x] = ' ';
				map[y][x + 1] = ' ';
				map[y][x - 1] = ' ';
				map[y + 1][x - 1] = ' ';
				map[y + 1][x + 1] = ' ';
				map[y - 1][x - 1] = ' ';
				map[y - 1][x + 1] = ' ';
				x -= 3;
				map[y][x] = 'O';
				map[y][x + 1] = 'X';
				map[y][x - 1] = 'X';
				map[y + 1][x - 1] = 'X';
				map[y + 1][x + 1] = 'X';
				map[y - 1][x - 1] = 'X';
				map[y - 1][x + 1] = 'X';
			}
		}
		if (GetAsyncKeyState(VK_RIGHT)) {
			if (map[y][x + 3] == obstacle) {
				gameover = true;
			}
			else if (map[y][x + 3] != '#') {
				map[y][x] = ' ';
				map[y][x + 1] = ' ';
				map[y][x - 1] = ' ';
				map[y + 1][x - 1] = ' ';
				map[y + 1][x + 1] = ' ';
				map[y - 1][x - 1] = ' ';
				map[y - 1][x + 1] = ' ';
				x += 3;
				map[y][x] = 'O';
				map[y][x + 1] = 'X';
				map[y][x - 1] = 'X';
				map[y + 1][x - 1] = 'X';
				map[y + 1][x + 1] = 'X';
				map[y - 1][x - 1] = 'X';
				map[y - 1][x + 1] = 'X';
			}
		}
		if (GetAsyncKeyState(VK_UP)) {
			if (map[y - 1][x] == obstacle) {
				gameover = true;
			}
			else if (map[y - 20][x] != ' ')
				gameover = true;
			{
				map[y][x] = ' ';
				map[y][x + 1] = ' ';
				map[y][x - 1] = ' ';
				map[y + 1][x - 1] = ' ';
				map[y + 1][x + 1] = ' ';
				map[y - 1][x - 1] = ' ';
				map[y - 1][x + 1] = ' ';
				y -= 1;
				map[y][x] = 'O';
				map[y][x + 1] = 'X';
				map[y][x - 1] = 'X';
				map[y + 1][x - 1] = 'X';
				map[y + 1][x + 1] = 'X';
				map[y - 1][x - 1] = 'X';
				map[y - 1][x + 1] = 'X';
			}
		}

		if (GetAsyncKeyState(VK_DOWN)) {
			if (map[y + 2][x] == obstacle) {
				gameover = true;
			}
			else if (map[y + 6][x] = ' ')
				gameover = true;
			{
				map[y][x] = ' ';
				map[y][x + 1] = ' ';
				map[y][x - 1] = ' ';
				map[y + 1][x - 1] = ' ';
				map[y + 1][x + 1] = ' ';
				map[y - 1][x - 1] = ' ';
				map[y - 1][x + 1] = ' ';
				y += 2;
				map[y][x] = 'O';
				map[y][x + 1] = 'X';
				map[y][x - 1] = 'X';
				map[y + 1][x - 1] = 'X';
				map[y + 1][x + 1] = 'X';
				map[y - 1][x - 1] = 'X';
				map[y - 1][x + 1] = 'X';
			}
		}
		if (GetAsyncKeyState(VK_ESCAPE)) {
			gameover = true;
			return 0;
		}
	


		if (map[y - 2][x] == obstacle || map[y - 2][x - 1] == obstacle || map[y - 2][x + 1] == obstacle) {
			gameover = true;
			cout << "GAME OVER" << endl;
			cin >> menu;
		}
		
			
		
		++carspeed;
		if (carspeed == 10 || carspeed == 30 || carspeed == 60 || carspeed == 90 || carspeed == 130 || carspeed == 180 || carspeed == 210) {
			speed -= 15;
		}
		Sleep(speed);

		if (GetAsyncKeyState(VK_RETURN)) {
			system("pause");
			clearscreen();
		}

	}
	return 0;
}
void clearscreen()
{
	HANDLE hOut;
	COORD Position;

	hOut = GetStdHandle(STD_OUTPUT_HANDLE);

	Position.X = 0;
	Position.Y = 0;
	SetConsoleCursorPosition(hOut, Position);
}