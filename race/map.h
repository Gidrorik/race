##ifndef MAP_H
#define MAP_H

#include "car.h"



namespace race
{

	class Map
	{
	public:
		Map();
		double  getDistances() const;
		void    setDistances(const double distances);
		void    setPoint(const int point);
	private:
		int     point_;
		double  distances_;
	};
}
#endif // ROAD_Hpragma once
