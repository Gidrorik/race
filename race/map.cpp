#include "Car.h"
#include "road.h"
namespace race
{

	Map::Map()
	{
		

	}

	double Road::getDistances() const
	{
		return distances_;
	}

	void Road::setDistances(const double distances)
	{
		distances_ = distances;
	}

	void Road::setPoint(const int point)
	{
		point_ = point;
	}

	int Road::getPoint() const
	{
		return point_;
	}
}

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
