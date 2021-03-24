#include <iostream>
#include <string>
using namespace std;
int calAm(int price, int years);
int total;
int main() {
	int price[3], years[3],money[3];
	cout << "Khoayai Bank Information System** Interest = 3 % **" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "Input Amount " << i+1 << " : ";
		cin >> price[i];
		cout << "Input Years " << i+1 << " : " ;
		cin >> years[i];
		money[i] = calAm(price[i], years[i]);
		cout << " Total your money " << i+1 << " : " << money[i] << endl;
		cout << "*********************************" << endl;
	}

	cout << " Total 3 people = " << total << endl;
	return 0;


}
int calAm(int price, int years) {
	int money;
	money = (price * 0.03 * years) + price;
	total = total+money ;
	return money ;
}
