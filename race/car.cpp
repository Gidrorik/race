#include "car.h"
#include "map.h"
namespace race
{

	Car::Car()
	{
		myPosition_ = 0;
		position_ = 0;
		speed_ = 0;
	}

	int Car::getMyPosition() const
	{
		return myPosition_;
	}

	int Car::getSpeed() const
	{
		return speed_;
	}

	int Car::getPosition() const
	{
		return position_;
	}

	void Car::setMyPosition(const int position)
	{
		myPosition_ = position;
	}

	void Car::setPosition(const int position)
	{
		position_ = position;
	}

	void race::Car::setSpeed(const int speed)
	{
		speed_ = speed;
	}

}
