
#include <iostream>
using namespace std;

class human {
public:
    int height = 192;
    int ears_count = 2;
    double weight = 65.3;
    string name = "Jonathan";
    string eyes_color = "green";

    void MakeNoize() {
        cout << "Jonathan is talking!\n";
    }
    void Eat(string meal) {
        cout << "Jonathan is eating" << meal << "\n";
    }
    void Hobby(string entertainment) {
        cout << "Jonathan is playing games" << entertainment << "\n";
    }
    void Feel() {
        cout << "Jonathan is stressed\n";
    }
    void sleep() {
        cout << "Jonathan is sleeping\n";
    }
};

class room {
public:
    int height = 250;
    int width = 500;
    int window = 2;
    string name = "bedroom";
    string walls_color = "yellow";

    void Noize() {
        cout << "Someone knocking on the door\n";
    }
    void exist() {
        cout << "Room is existing\n";
    }
    void Destroy() {
        cout << "Walls are falling\n";
    }
    void Repair() {
        cout << "room is repared by humans\n";
    }
    void Feel() {
        cout << "room can`t feel anything, maybe";
    }
};

class mobile_phone {
public:
    int size = 15;
    int width = 7;
    string brand = "iphone";
    int serial_number = 15;
    string color = "black";

    void Noize(string alarm) {
        cout << "Time to wake up!" << alarm << "\n";
    }
    void Call(string ringtone) {
        cout << "Someone is calling!" << ringtone << "\n";
    }
    void count(string calculator) {
        cout << "how much will it be?" << calculator << "\n";
    }
    void Update() {
        cout << "Your iphone is updating...\n";
    }
    void Discharge() {
        cout << "little quantity of energy left\n";
    }

};

class pocket_weights {
public:
    int size = 11;
    int width = 5;
    string color = "gray";
    string weight_plat = "blue";
    int button = 5;

    void inclusion(string button_on) {
        cout << "00000" << button_on << "\n";
    }
    void unit(string button_unit) {
        cout << "turn on oz mode" << button_unit << "\n";
    }
    void weighing() {
        cout << "calculating weight\n";
    }
    void light(string light_button) {
        cout << "info platform is glowing";
    }
    void pcs() {
        cout << "show pcs\n";
    }
};

class door {
public:
    int size = 190;
    int width = 100;
    string color = "brown";
    string kh_color = "gold";
    string handle_size = "black";

    void open() {
        cout << "door is opening\n";
    }
    void close() {
        cout << "door is closing\n";
    }
    void closing(string key) {
        cout << "door is closing with a key" << key << "\n";
    }
    void opening(string key) {
        cout << "door is opening with a key" << key << "\n";
    }
    void opening_handle(string handle) {
        cout << "handle going down" << handle << "\n";
    }
};

int main()
{
    cout << "Hello World!\n";

}

