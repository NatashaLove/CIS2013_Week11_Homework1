#include <iostream>
#include <cstring>
using namespace std;
// the class will remember all data changes in the main
class Car {
	
	private:
		string color = "n/a";
		string make = "n/a";
		string model = "n/a";
		int year = 0;
		int current_speed = 0;
	public:
		void print () {
			cout <<"You are driving a " << year <<  " " << model << " " << make << " " << color << " with current speed: " << current_speed << endl;
		}
		void set (string c, string m, string o, int y) {
			year = y;
			color = c;
			make = m;
			model = o;
		}
		/*int get_year () {
			return year; // create this function to access year from private class
		}
		void set_year (int y) {
			year = y;
		}*/
		
};

int main () {
	
	Car toyota;
	
	toyota.print ();
	
	return 0;
	}
	