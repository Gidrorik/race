#define OBSTACLE_H

#include "car.h"
#include "Map.h"

class Obstacle : public race
{
public:
	Obstacle(race pos);

	virtual void calcLeft() {};
	virtual void calcRight() {};

	inline race getPosition() const { return m_obstaclePosition; };

private:
	GameObjPosition m_obstaclePosition;
};
#endif OBSTACLE_H
