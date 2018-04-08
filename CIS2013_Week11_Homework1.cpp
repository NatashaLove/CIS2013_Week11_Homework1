#include <iostream>
#include <cstring>
using namespace std;
// the class will remember all data changes in the main
class Car {
	
	/*private:
		string color = "n/a";
		string make = "n/a";
		string model = "n/a";
		int year = 0;
		int current_speed = 0;
		*/
	public:
		/*void set (string c, string m, string o, int y) {
			year = y;
			color = c;
			make = m;
			model = o;
		}*/
		
		string color = "n/a";
		string make = "n/a";
		string model = "n/a";
		int year = 0;
		int current_speed = 0;
		
		void print () {
			// string c;
			// string m;
			// string o;
			// int y;
			cout <<"You are driving a " << year <<  " " << model << " " << make << " " << color << " with current speed: " << current_speed << endl;
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
			} else {
				cout << "The car is already driving! " << endl;
				
			}
		}
		void stop () {
			if (current_speed == 0) {
				cout << "The car is already off! " << endl;
			} else {
				if (current_speed >> 20) {
					cout << " Slow down ! "<< endl;
				}
				else {
				current_speed = 0;
				}
			}
		}
		void drive () {
			if (current_speed == 0) {
				cout << "The car is off! Start the car before driving! " << endl;
			} 
		}
		void speed_up () {
			if (current_speed == 0) {
				cout << "The car is off! Start the car before driving! " << endl;
			} else {
				current_speed=+10;
			
			}
		}
		void slow_down () {
			if (current_speed == 0) {
				cout << "The car is off! Start the car before driving! " << endl;
			} else {
				current_speed=-10;
			
			}
		}
		void turn_left () {
			if (current_speed == 0) {
				cout << "The car is off! Start the car before driving! " << endl;
				} else {
				current_speed=-10;
			
			cout << "The left signal is on. Turning left. " << endl;
				}
		}
		void turn_right () {
			if (current_speed == 0) {
				cout << "The car is off! Start the car before driving! " << endl;
				} else {
				current_speed=-10;
			
			cout << "The right signal is on. Turning right. " << endl;
				}
			
			
		}
		/*int get_year () {
			return year; // create this function to access year from private class
		}
		void set_year (int y) {
			year = y;
		}*/
		
};

int main () {
	
	// char c, o, m;
	// int y;
	Car toyota;
	
	toyota.print ();
	toyota.set_color ();
	toyota.set_model ();
	toyota.set_make ();
	toyota.set_year ();
	
	toyota.print ();
	
	return 0;
	}
	