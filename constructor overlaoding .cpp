// C++ program to demonstrate constructor overloading
#include <iostream>
using namespace std;

class Room {
   private:
    double length;
    double breadth;

   public:
    Room() {
        length = 6.9;
        breadth = 4.2;
    }
    Room(double l, double b) {
        length = l;
        breadth = b;
    }
    Room(double len) {
        length = len;
        breadth = 7.2;
    }
    double calculateArea() {
        return length * breadth;
    }
};

int main() {
    Room room1, room2(8.2, 6.6), room3(8.2);
    cout << "Area of room = " << room1.calculateArea() << endl;
    cout << "Area of room = " << room2.calculateArea() << endl;
    cout << "Area of room = " << room3.calculateArea() << endl;

    return 0;
}
