#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

struct Item 
{
    string name;
    double price;
    int quantity;
};


double calculateTotalBill(const vector<Item>& items) 
{
    double total = 0.0;
    for (const Item& item : items) 
	{
        total += item.price * item.quantity;
    }
    return total;
}


void printBill(const vector<Item>& items, double total) 
{
    cout << "-------------------------\n";
    cout << "       SHOPPING BILL      \n";
    cout << "-------------------------\n";
    cout << setw(20) << left << "Item" << setw(10) << "Price" << setw(10) << "Quantity" << setw(10) << "Total" << endl;
    cout << "-------------------------\n";
    for (const Item& item : items) {
        cout << setw(20) << left << item.name << setw(10) << fixed << setprecision(2) << item.price << setw(10) << item.quantity << setw(10) << fixed << setprecision(2) << item.price * item.quantity << endl;
    }
    cout << "-------------------------\n";
    cout << "Total Bill: " << fixed << setprecision(2) << total << endl;
    cout << "-------------------------\n";
}

int main() 
{
    vector<Item> items;
    char choice;
    do 
	{
        Item newItem;
        cout << "Enter item name: ";
        cin >> newItem.name;
        cout << "Enter item price: ";
        cin >> newItem.price;
        cout << "Enter quantity: ";
        cin >> newItem.quantity;
        items.push_back(newItem);
        cout << "Do you want to add another item? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    double totalBill = calculateTotalBill(items);
    printBill(items, totalBill);

    return 0;
}
