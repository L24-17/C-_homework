#include <iostream>
#include <string>

using namespace std;

class Square
{
private:
	double side; //double зберігає в собі десяткові значення
	double area;
	
public:

	Square(double valueSide){
		side = valueSide;
		area = valueSide * valueSide;
	}

	double getSide() {
		return side; //Оператор return завершує виконання функції та повертає керування основній функції.
	}
	void setSide(double newValueSide) { ////void - це найпростіший тип даних, який означає відсутність будь-якого типу даних.
		if (newValueSide>0) {
			side = newValueSide;
			area = newValueSide * newValueSide;
		} else {
			cout << "Error, incorrect data 0!\n";
		}
	}

	double getArea() {
		return area;
	}
	
	void print(){
		cout << "Square: side=" << side << "; area= " << area << endl;
	}
};

int main()
{
	Square s(4); //так як Square має специфікатор доступу public
	s.print();
	s.setSide(5);
	s.print();
	cout << s.getSide() << " " << s.getArea();
	
}
