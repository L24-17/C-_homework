#include <iostream>
#include <string>

using namespace std;

class Person {
	public:
		string name;
		int age;
		string lastName;
};

string FirstLastName(Person* person) {
	
	return person->name + " " + person->lastName;
}

void print(Person* person) {

	cout << FirstLastName(person) << " is " << person->age << " years old." << endl;
}


int main() {
	Person person;
	person.name = "Spongebob";
	person.age = 35;
	person.lastName = "Squarepants";
	cout << "Meet " << person.name << "\n";
	print(&person); printf("\n");
	
	return 0;
}