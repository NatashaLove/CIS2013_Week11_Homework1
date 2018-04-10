#include <iostream>
#include <cstring>
#include <string>
using namespace std;
// the class will remember all data changes in the main
class Car {
	
		public:
				
		string color = "n/a";
		string make = "n/a";
		string model = "n/a";
		int year = 0;
		int current_speed = 0;
		
		void print () {
			
			cout <<"						You are driving a " << year <<  " " << model << " " << make << " " << color << " with current speed: " << current_speed << " m/h" << endl;
		}
		
		
		void set_make () {
			//string m;
			//make = m;
			cout << "Set make of your car : " << endl;
			cin >> make;
			
		}
		void set_model () {
			//string o;
			cout << "Set model of your car : " << endl;
			cin >> model;
				
		}
		void set_color () {
			//string c;
			cout << "Set color of your car : " << endl;
			cin >> color;
				
		}
		void set_year () {
			//int y;
			cout << "Set year of your car : " << endl;
			cin >> year;
				
		}
		void start () {
			if (current_speed==0) {
				current_speed = 25;
				cout << "					The car is started and driving at the speed " << current_speed<< " m/h" << endl;
			} else {
				cout << "					The car is already driving! " << endl;
				
			}
		}
		void stop () {
			if (current_speed == 0) {
				cout << "					The car is already off! " << endl;
			} else {
				if (current_speed > 20) {
					cout << "					Your current speed is " << current_speed << " m/h!" << " Slow down ! (d) "<< endl;
				}
				else {
				current_speed = 0;
				cout << "					The car has stopped. " << endl;
				}
			}
		}
		void drive () {
			if (current_speed == 0) {
				cout << "					The car is off! Start the car before driving! (s) " << endl;
			} else {
				cout << "					You are driving at the speed "<< current_speed << " m/h" << endl;
			} 
		}
		void speed_up () {
			if (current_speed == 0) {
				cout << "					The car is off! Start the car before driving! (s) " << endl;
			} else if (current_speed >= 150){
				
				cout << "					Your car is at its speed limit!" << endl;
				cout << "					Your current speed is " << current_speed << " m/h" << endl;
				
			} else {
				current_speed+=10;
				cout << "					Your current speed is " << current_speed << " m/h" << endl;
			
			}
		}
		void slow_down () {
			if (current_speed > 0) {
				//for (int i=current_speed; i>=0; --i)
				current_speed-=5;
				cout << "					Your current speed is " << current_speed << " m/h" << endl;
				
			} else {
				cout << "					The car is off! Start the car before driving! (s) " << endl;
			}
		}
		void turn_left () {
			if (current_speed == 0) {
				cout << "					The car is off! Start the car before driving! (s) " << endl;
				} else if (current_speed > 30) {
						cout << "					Your current speed is " << current_speed << " m/h!" << " Slow down ! (d) "<< endl;
						
					} else {
					
					for (int i=current_speed; i >= 15; i-=5)
						current_speed = i;
				//cout << "Your speed is now " << current_speed<< endl;
				cout << "					The left signal is on. Turning left. " << endl;
				cout << "					Your current speed is " << current_speed << " m/h" << endl;
				}
		
		}
		void turn_right () {
			if (current_speed == 0) {
				cout << "					The car is off! Start the car before driving! (s)" << endl;
				} else if (current_speed > 30) {
						cout << "					Your current speed is " << current_speed << " m/h!" << " Slow down ! (d) "<< endl;
						
				} else {
					for (int i=current_speed; i >=15; i-=5)
					current_speed = i;
				//cout << "Your speed is now " << current_speed<< endl;
				cout << "					The right signal is on. Turning right. " << endl;
				cout << "					Your current speed is " << current_speed << " m/h" <<endl;	
				}
		
			
		}
		
		void catapult () {
			cout << "					SEE YAAAAA....!" << endl;
			cout <<"					Don't forget your parachute!" << endl;
			exit (1);
		}
		
		
};

int main () {
	
	 char c, o, m, y, s, S, p, D, l, r, u, d; 
	 // where : c = color, o = model, m = make, y = year, s = start, S=STOP, p = print, D= DRIVE, l= turn left, r = turn right, u= speed up, d = slow down; 
	char choice;
	Car car;
	
	cout << endl;
	cout << "***********************************************" << endl;
	cout << endl;
	cout << "					Welcome to our test drive! " << endl;
	cout << endl;
	cout << " " << endl;
	cout << "Set your car's color  "<< endl;
	cout << "Set your car's model  " << endl;
	cout << "Set your car's make " << endl;
	cout << "Set your car's year  " << endl;
	cout << "Print your car's settings " << endl;
	cout << endl;
	cout << " " << endl;
	
	car.set_color ();
	car.set_model ();
	car.set_make ();
	car.set_year ();
	car.print ();
	
	do {
	cout << " " << endl;
	cout << "Select an action: " << endl;
	cout << " " << endl;
	cout << "Set your car's color (c) "<< endl;
	cout << "Set your car's model (o) " << endl;
	cout << "Set your car's make (m) " << endl;
	cout << "Set your car's year (y) " << endl;
	cout << "Print your car's settings (p) " << endl;
	cout << "		*****		" << endl;
	cout << "Start the car (s) " << endl;
	cout << "Stop the car (S) " << endl;
	cout << "Drive the car (D) " << endl;
	cout << "Turn left (l) " << endl;
	cout << "Turn right (r) " << endl;
	cout << "Speed up (u) " << endl;
	cout << "Slow down (d) " << endl;
	cout << " " << endl;
	cout << "Special case - CATAPULT (X)"<< endl;
	
	cout << " " << endl;
	cout << "Your choice is : ";
	cin >> choice;
		switch (choice)
		{
		case 'c' :
		car.set_color ();
		break;
		case 'o' :
		car.set_model ();
		break;
		case 'm' :
		car.set_make ();
		break;
		case 'p' :
		car.print ();
		break;
		case 'y' :
		car.set_year ();
		break;
		case 's' :
		car.start ();
		break;
		case 'S' :
		car.stop ();
		break;
		case 'D' :
		car.drive ();
		break;
		case 'l' :
		car.turn_left ();
		break;
		case 'r' :
		car.turn_right ();
		break;
		case 'u' :
		car.speed_up ();
		break;
		case 'd' :
		car.slow_down ();
		break;
		case 'X' :
		car.catapult ();
		
		default : 
		cout << "Illegal value.";
		}
	}
	while (1);
		
	return 0;
	}
	