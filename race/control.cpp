#include "Control.h"
#include "Obstacle.h"
#include "map.h"
namespace race

	Control::Control() {

	void(GetAsyncKeyState(VK_LEFT));
	void(GetAsyncKeyState(VK_UP));
	void(GetAsyncKeyState(VK_DOWN));
	void(GetAsyncKeyState(VK_RIGHT));
}
