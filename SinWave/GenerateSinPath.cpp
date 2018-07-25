#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

using namespace std;

//In deciseconds
//const static double MAX_ACCELERATION = 321.819;
const static double MAX_SPEED = 971;
const static double STEP_DURATION = 1.0;
const static double TOTAL_DURATION = 150;

int main() {

	int totalNumberOfSteps = TOTAL_DURATION / STEP_DURATION;

	for (int i = 0; i <= totalNumberOfSteps; i++) {
		double vel, pos;

		vel = MAX_SPEED * sin((2 * M_PI * i) / TOTAL_DURATION);
		pos = -MAX_SPEED * cos((2 * M_PI * i) / TOTAL_DURATION) + MAX_SPEED;

		cout << "Position: " << pos << "   Velocity: " << vel << endl;
	}

	cin.get();
	return 0;
}