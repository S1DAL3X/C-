#include <iostream>
#include <string>

using namespace std;

class Car {
public: 
    int height;
    float speed;
    string model;
    //Конструктор по умолчанию
    Car() {}

    Car(int height, float speed, string model) {
        this->height = height;
        this->speed = speed;
        this->model = model;
    }

    void set_values(int height, float speed, string model) {
        this->height = height;
        this->speed = speed;
        this->model = model;
    }

    void print() {
        cout << "Height is " << this->height << endl;
        cout << "Speed is " << this->speed << endl;
        cout << "Model is " << this->model << endl;
    }
};

class Motorcycle : public Car {
public:
    void print() {
        cout << "Height is " << height << endl;
        cout << "Speed is " << speed << endl;
        cout << "Model is " << speed << endl;
    }
};

int main() {

    Motorcycle bmw;
    bmw.set_values(350, 235.5, "BMW R1000");
    bmw.print();

    Car shkoda(1400, 255.5, "Shkoda");
    //shkoda.set_values(1400, 205.5);
    shkoda.print();

    Car audi;
    audi.set_values(1400, 205.5, "Audi R6");
    audi.print();

    return 0;
}
