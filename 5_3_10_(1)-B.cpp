#include <iostream>
#include <string>
#include <vector>

using namespace std;

class FlightBooking {
public:
	FlightBooking(int id, int capacity, int reserved);
	void printStatus();

private:
	int id;
	int capacity;
	int reserved;
};
void FlightBooking::printStatus()
{
	double percent = 0;
	if (this != nullptr) //nulptr константа нульового покажчика
	{
		percent = (100.0 * ((double)reserved / capacity));
		printf("Flight %d: %d/%d (%lf) seats taken", id, reserved, capacity, percent); //%d ціле десятичне зі знаком
	}
}

FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
	this -> id = id;
	this -> capacity = capacity;
	this -> reserved = reserved;
	if (this->reserved > this->capacity)
	{
		reserved = 0;
		cout << "Cannot perform this operation \n";
	}
}


int main() {
	
	int reserved = 0,
		capacity = 0;
	cout << "Provide flight capacity: ";
	cin >> capacity;
	cout << "Provide number of reserved seats: ";
	cin >> reserved;
	FlightBooking booking(1, capacity, reserved);
	booking.printStatus();

	
	


	return 0;
}
