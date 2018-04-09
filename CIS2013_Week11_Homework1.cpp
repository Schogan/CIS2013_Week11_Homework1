#include <iostream>
#include <cstring>

using namespace std;


class car_info{
	public:
		string model;
		int year =0;
		string make;
		string color;
		int current_speed =0;
		bool on_off = false;
		string direction;
		
	void print(){
		cout << "Your car's information is:"<<endl;
		cout << "Make: " << make <<endl;
		cout << "Model: " << model <<endl;
		cout << "Year: " << year <<endl;
		cout << "Color: " << color <<endl;
		cout << "Current Speed: " << current_speed <<endl;
		cout << "Current direction: " << direction<<endl;
		
		if (on_off == true){
			cout << "Currently: On"<<endl;
		}
		else if(on_off == false){
			cout << "Currently: Off"<<endl;
			}
		cout << endl;
		cout << endl;
		}
		
		
	
	
	//void set()
};

class car_running{
	public:
		bool car_on = false;
		bool straight = true;
		bool turn_left = false;
		bool turn_right = false;
		int speed = 0;
		
	void start_engine(){
		if (car_on != true){
			car_on =true;
		}
		else{cout << "Your car is already running!"<<endl;}
	}
	
	void stop_engine(){
		if (car_on && speed ==0){
			car_on = false;
		}
		else{cout << "You must slow down to turn off car!"<<endl;}
	}
	
	void speed_up(){
		if (car_on){
			speed = speed + 5;
		}
		else{ cout << "You must turn the car on to speed up!"<<endl;}
	}
	
	void speed_down(){
		if (car_on){
			speed = speed - 5;
		}
		if (speed == 0){
			speed = 0;
		}
	}
	
	void turnLeft(){
		if (car_on && speed > 0){
			turn_left = true;
			turn_right = false;
			straight = false;
		}
		else{cout<<"Your car must be moving to turn!"<<endl;}
	}
	
	void turnRight(){
		if (car_on && speed > 0){
			turn_right = true;
			turn_left = false;
			straight = false;
		}
		else{cout<<"Your car must be moving to turn!"<<endl;}
	}
	
	void goStraight(){
		straight = true;
		turn_left = false;
		turn_right = false;
	}
	
};


int main(){
	bool check_run = false;
	bool check_direction =false;
	bool program_run = true;
	
	int action=0;
	
	car_info your_car;
	car_running your_car_action;
	
	cout << "Enter your cars make: ";
	cin >> your_car.make;
	
	cout << "Enter your cars model: ";
	cin >> your_car.model;
	
	cout << "Enter your cars Year: ";
	cin >> your_car.year;
	
	cout << "Enter your cars color: ";
	cin >> your_car.color;
	
	//while(check_run){}
	
	//while(check_direction){}

	while(program_run){
		cout << "What would you like to do?"<< endl;
		cout << "Start car: 1" << endl;
		cout << "Shut off car: 2" << endl;
		cout << "Speed up: 3" << endl;
		cout << "Slow down: 4" << endl;
		cout << "Turn right: 5" << endl;
		cout << "Turn Left: 6" << endl;
		cout << "Go Straight: 7"<< endl;
	
		cin >> action;
	
	if (action == 1){your_car_action.start_engine();}
	if (action == 2){your_car_action.stop_engine();}
	if (action == 3){your_car_action.speed_up();}
	if (action == 4){your_car_action.speed_down();}
	if (action == 5){your_car_action.turnRight();}
	if (action == 6){your_car_action.turnLeft();}
	if (action == 7){your_car_action.goStraight();}
	
	if(your_car_action.car_on == true){
		your_car.on_off = true;
	}
	else if(your_car_action.car_on == false){your_car.on_off = false;}
		
	if(your_car_action.turn_left){
			your_car.direction = "Turning Left";
	}
	if(your_car_action.turn_right){
		your_car.direction = "Turning right";
	}
	if(your_car_action.straight){
		your_car.direction = "Straight";
	}
	
	your_car.current_speed = your_car_action.speed;
	
	your_car.print();
	}
	return 0;
}