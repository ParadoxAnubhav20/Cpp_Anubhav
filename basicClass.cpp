#include <iostream>
#include <string>
using namespace std;
class Game {
private:
    string name;
    int rating;
public:
    Game(string n, int r) : name(n), rating(r) {
        cout << "Constructor Invoked\n";
    }
    void details() {
        cout << "The Name of the Game is: " << name << endl;
        cout << "Average rating is: " << rating << endl;
    }
    ~Game() {
        cout << "Destructor Invoked\n";
    }
};
int main() {
    Game g1("Apex Legends", 92);
    Game g2("DOTA 2", 86);
    Game* g3 = new Game("Elden Ring", 95); // Dynamic allocation
    g1.details();
    g2.details();
    g3->details();
    delete g3; // Remember to free the memory
    return 0;
}
