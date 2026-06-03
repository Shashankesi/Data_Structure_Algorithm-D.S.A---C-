#include <iostream>
using namespace std;

class Engine {
public:
    void start() {
        cout << "Engine started" << endl;
    }
};

class Car {
private:
    Engine engine;   // Car HAS-A Engine

public:
    void drive() {
        engine.start();
        cout << "Car is moving" << endl;
    }
};

int main() {
    Car c;
    c.drive();
    return 0;
}