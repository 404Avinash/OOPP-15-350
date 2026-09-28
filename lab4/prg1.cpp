#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Item {
public:
    string name;
    int quantity;
    double price;
};

void displayCart(vector<Item>& cart) {
    cout << left << setw(15) << "Name"
         << setw(12) << "Quantity"
         << setw(10) << "Price" << endl;

    cout << "---------------------------------------" << endl;

    for (auto item : cart) {
        cout << left << setw(15) << item.name
             << setw(12) << item.quantity
             << setw(10) << item.price << endl;
    }
}

double calculateTotal(vector<Item>& cart) {
    double total = 0;

    for (auto item : cart)
        total += item.quantity * item.price;

    return total;
}

Item findMostExpensiveItem(vector<Item>& cart) {
    Item item = cart[0];

    for (auto x : cart) {
        if (x.price > item.price)
            item = x;
    }

    return item;
}

void applyDiscount(vector<Item>& cart) {
    for (auto& item : cart) {
        if (item.price > 1000)
            item.price = item.price * 0.90;
    }
}

int main() {
    vector<Item> cart = {
        {"Laptop", 1, 55000},
        {"Mouse", 2, 800},
        {"Keyboard", 1, 1500},
        {"Headphones", 1, 2500}
    };

    cout << "\n             SHOPPING CART\n";
    cout << "=======================================\n\n";

    displayCart(cart);

    cout << "\n---------------------------------------\n";
    cout << "Total Amount       : Rs. " << calculateTotal(cart) << endl;

    Item expensive = findMostExpensiveItem(cart);

    cout << "Most Expensive Item: " << expensive.name << endl;
    cout << "Price              : Rs. " << expensive.price << endl;

    applyDiscount(cart);

    cout << "\n          AFTER APPLYING DISCOUNT\n";
    cout << "=======================================\n\n";

    displayCart(cart);

    cout << "\n---------------------------------------\n";
    cout << "Updated Cart Total : Rs. "
         << calculateTotal(cart) << endl;
    cout << "=======================================\n";

    return 0;
}