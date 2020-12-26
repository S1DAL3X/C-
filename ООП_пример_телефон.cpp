#include <iostream>
#include <string>

using namespace std;

class Phone {
public:
	string company;
	string model;
	int IMEI;
	//Самоинециализация при создании объекта класса Phone
	Phone() {}

	Phone(string company, string model, int IMEI) {
		this->company = company;
		this->model = model;
		this->IMEI = IMEI;
	}

	void set_values(string company, string model, int IMEI) {
		this->company = company;
		this->model = model;
		this->IMEI = IMEI;
	}

	void show_values() {
		cout << "Company is " << this->company << endl;
		cout << "Model is " << this->model << endl;
		cout << "IMEI  " << this->IMEI << endl;
	}
};

class IPhone : public Phone {
public:
	void show_values() {
		cout << "Company is " << company << endl;
		cout << "Model is " << model << endl;
		cout << "IMEI  " << IMEI << endl;
	}
};

int main() {

	Phone samsung_a10("Samsung", "A10", 637485933);
	//samsung_a10.set_values("Samsung", "A10", 637485933);
	samsung_a10.show_values();

	IPhone iphone_7;
	iphone_7.set_values("Apple", "iPhone 7", 477520001);
	iphone_7.show_values();

	return 0;
}
