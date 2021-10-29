#include <iostream>
#include <string>

using namespace std;

class House {
public:
	void setNumStories(int numStories) {
		this->numStories = numStories;
	}

	void setNumWindows(int numWindows) {
		this->numWindows = numWindows;
	}

	void setColor(string color) {
		this->color = color;
	}

	int getNumStories() const {
		return numStories;
	}

	int getNumWindows() const {
		return numWindows;
	}

	string getColor() const {
		return color;
	}

private:

	int numStories=0;		//this has to be initialized or it will throw a warning
	int numWindows=0;		//this has to be initialized or it will throw a warning
	string color;
};

int main() {

	House myHouse;
	House yourHouse;

	myHouse.setNumStories(2);
	myHouse.setNumWindows(6);
	myHouse.setColor("Red");

	yourHouse.setNumStories(3);
	yourHouse.setNumWindows(10);
	yourHouse.setColor("Blue");

	cout << "My house has " << myHouse.getNumStories() << " stories and has " << myHouse.getNumWindows() << " windows and is " << myHouse.getColor()<<endl;
	cout << "Your house has " << yourHouse.getNumStories() << " stories and has " << yourHouse.getNumWindows() << " windows and is " << yourHouse.getColor();


	return 0;
}