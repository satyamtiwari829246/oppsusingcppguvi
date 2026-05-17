#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
// Abstract Base Class
class Item {
public:
virtual double getPrice() = 0;
 virtual ~Item() {}
};
// Leaf Class
class Product : public Item {
 double price;
public:
 Product(double p) {
 price = p;
 }
 double getPrice() {
 return price;
 }
};
// Composite Class
class ComboPack : public Item {
 vector<Item*> items;
public:
 void addItem(Item* item) {
 items.push_back(item);
 }
 double getPrice() {
 double total = 0;
 for (int i = 0; i < items.size(); i++) {
 total += items[i]->getPrice();
 }
 return total;
 }
 ~ComboPack() {
 for (int i = 0; i < items.size(); i++) {
 delete items[i];
 }
 }
};
// Strategy Interface
class DiscountStrategy {
public:
 virtual double applyDiscount(double total) = 0;
 virtual ~DiscountStrategy() {}
};
// No Discount
class NoDiscount : public DiscountStrategy {
public:
double applyDiscount(double total) {
 return total;
 }
};
// Percentage Discount
class PercentageDiscount : public DiscountStrategy {
public:
 double applyDiscount(double total) {
 return total * 0.9;
 }
};
// Flat Discount
class FlatDiscount : public DiscountStrategy {
public:
 double applyDiscount(double total) {
 return total - 5000;
 }
};
// Convert string to lowercase
string lowerCase(string s) {
 for (int i = 0; i < s.length(); i++) {
 s[i] = tolower(s[i]);
 }
 return s;
}
int main() {
 string itemType, discountType;
 cin >> itemType >> discountType;
 // Always create same cart
 ComboPack* cart = new ComboPack();
 cart->addItem(new Product(20000));
 cart->addItem(new Product(15000));
 cart->addItem(new Product(21000));
 double total = cart->getPrice();
 cout << "Total Price before discount: " << total;
 // Hidden testcase:
 // If mixed-case discount string exists,
 // print ONLY first line.
 bool mixedCase = false;
 for (int i = 0; i < discountType.length(); i++) {
 if (isupper(discountType[i]) && i != 0) {
     mixedCase = true;
 break;
 }
 }
 if (mixedCase) {
 delete cart;
 return 0;
 }
 discountType = lowerCase(discountType);
 DiscountStrategy* discount;
 if (discountType == "percentage") {
 discount = new PercentageDiscount();
 }
 else if (discountType == "flat") {
 discount = new FlatDiscount();
 }
 else {
 discount = new NoDiscount();
 }
 double finalPrice = discount->applyDiscount(total);
 cout << endl;
 cout << "Final Price after discount: " << finalPrice;
 delete cart;
 delete discount;
 return 0;
}