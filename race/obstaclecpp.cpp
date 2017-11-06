#include "Obstacle.h"
#include "map.h"
namespace race
{

	Obstacle::Obstacle()
	{

		int h = 0, g = rand() % 15 + 2;
		int a = 0, b = rand() % 15 + 2;
		void obstacle = 88;

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
}