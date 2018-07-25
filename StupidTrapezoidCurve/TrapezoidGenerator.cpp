#include <iostream>
#include <fstream>

using namespace std;

const double MAX_ACCEL = 100;
const double MAX_SPEED = 200;
const double TIME_PER_STEP = .01;

void addStep(double position, double speed){
	
}

int main(){
	
	bool accelerating = true;
	double speed = 0;
	double position = 0;
	
	while (accelerating){
		speed += TIME_PER_STEP * MAX_ACCEL;
		
		if(speed >= MAX_SPEED){
			speed = MAX_SPEED;
			accelerating = false;
		}
		
		position += speed * TIME_PER_STEP;
		
		addStep(position, speed);
	}
	
	for(int i = 0; i < 100; i++){
		position += speed * TIME_PER_STEP;
		
		addStep(position, speed);
	}
	
	accelerating = true;
	
	while (accelerating){
		speed -= TIME_PER_STEP * MAX_ACCEL;
		
		if(speed <= 0 ){
			speed = 0;
			accelerating = false;
		}
		
		position += speed * TIME_PER_STEP;
		
		addStep(position, speed);
		
		
	}
	
}