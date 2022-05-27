#include <iostream>
#include <string>

using namespace std;

class ShopItemOrder
{
private:
	string name;
	double price;
	int itemNumber;
public:
	void set_name(string name); //Вказуємо ім'я товару
	void set_price(double price); //Ціна товару
	void set_itemNumber(int itemNumb); //Кількість
	string get_name();
	double get_price();
	int get_itemsNumber();
	double get_total_price();
	void print();
	ShopItemOrder(string name, double price, int itemNumber)
	{
		this->name = name; //Покажчик 'this' використовується для отримання імені об'єкта
		this->set_price(price); //Покажчик 'this' використовується для отримання ціни об'єкта
		this->set_itemNumber(itemNumber); //Покажчик 'this' використовується для отримання кількості об'єкта
	}
};
void ShopItemOrder::set_name(string name) //Функція зміни імені
{
	this->name = name;
}
void ShopItemOrder::set_price(double price) //Функція зміни ціни
{
	if (price >= 1)
		this->price = price;
	else
		this->price = 1;
}
void ShopItemOrder::set_itemNumber(int itemNumb) //Функція зміни кількості
{
	if (itemNumb >= 1)
		this->itemNumber = itemNumb;
	else //Якщо ми аишемо нуль то автоматом ставиться кількість 1
		this->itemNumber = 1;
}
string ShopItemOrder::get_name()
{
	return this->name;
}
double ShopItemOrder::get_price()
{
	return this->price;
}
int ShopItemOrder::get_itemsNumber()
{
	return this->itemNumber;
}
double ShopItemOrder::get_total_price()
{
	double totalPrice = 0;
	for (int i = 0; i < this->itemNumber; i++)
	{
		totalPrice += this->price;
	}
	return totalPrice;
}
void ShopItemOrder::print()
{
	cout << "Item name: " << this->name << "\n Item price: " << this->price << "\n Number of items: " << this->itemNumber << "\n";
}
int main()
{

	ShopItemOrder order("Coffee", 150.6, 5);
	order.print();
	double totalPrice = order.get_total_price();
	cout << totalPrice;
	
	return 0;
}