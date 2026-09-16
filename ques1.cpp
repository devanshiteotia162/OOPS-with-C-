#include <iostream>
#include <string>
using namespace std;
class Product {
private:
    string productId;
    string name;
    double price;

public:
   
    Product(string id, string prodName, double prodPrice) {
        productId = id;
        name = prodName;
        price = prodPrice;
    }

    Product comparePrice(const Product& other) const {
        if (this->price >= other.price) {
            return *this;
        } else {
            return other;
        }
    }

    void displayDetails() const {
        cout << "Product ID: " << productId << "\n";
        cout << "Name: " << name << "\n";
        cout << "Price: ₹ " << price << "\n";
    }
};

int main() {
    Product prod1("P101", "Laptop", 89999.99);
    Product prod2("P102", "Smartphone", 10999.49);

    cout << "--- Product 1 Details ---\n";
    prod1.displayDetails();
    cout << "\n--- Product 2 Details ---\n";
    prod2.displayDetails();

    
    Product expensiveProduct = prod1.comparePrice(prod2);

    cout << "\n--- Most Expensive Product ---\n";
    expensiveProduct.displayDetails();

    return 0;
}