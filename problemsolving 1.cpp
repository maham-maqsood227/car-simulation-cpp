
#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string name;
    char direction;
    int position;

public:
    // Constructor
    Car(string n, char d, int p) {
        name = n;
        direction = d;
        position = p;
    }

    // Turn one step to the right (clockwise)
    void turn() {
        if (direction == 'N')
            direction = 'E';
        else if (direction == 'E')
            direction = 'S';
        else if (direction == 'S')
            direction = 'W';
        else if (direction == 'W')
            direction = 'N';
    }

    // Overloaded turn function (change direction directly)
    void turn(char d) {
        if (d == 'N' || d == 'E' || d == 'S' || d == 'W')
            direction = d;
        else
            cout << "Invalid direction!" << endl;
    }

    // Move the car by a given distance
    void move(int distance) {
        if (direction == 'N')
            position += distance;
        else if (direction == 'S')
            position -= distance;
        else if (direction == 'E')
            position += distance;
        else if (direction == 'W')
            position -= distance;
    }

    // Display car information
    void display() {
        cout << "Car Name: " << name << endl;
        cout << "Direction: " << direction << endl;
        cout << "Position: " << position << endl;
    }
};

int main() {
    Car c1("Toyota", 'E', 0);

    cout << "Initial Car Information:" << endl;
    c1.display();

    // Turn one step right
    c1.turn();

    cout << "\nAfter turning right:" << endl;
    c1.display();

    // Turn directly to North
    c1.turn('N');

    cout << "\nAfter changing direction to North:" << endl;
    c1.display();

    // Move the car 10 units
    c1.move(10);

    cout << "\nAfter moving:" << endl;
    c1.display();

    return 0;
}

