
#include <iostream>
#include <string>
using namespace std;

class FoodOrder {
public:
    FoodOrder(string foodType);
    static int GetNextId();
private:
    string type = "None";
    int id = 0;
    static int nextId;
};

FoodOrder::FoodOrder(string foodType) {
    type = foodType;
    id = nextId;

    nextId += 4;
}

int FoodOrder::GetNextId() {
    return nextId;
}

int FoodOrder::nextId = 70;

int main() {
    FoodOrder order1("Sushi");
    FoodOrder order2("Cake");
    FoodOrder order3("Crab");

    cout << "Next ID: " << FoodOrder::GetNextId() << endl;

    return 0;
}
