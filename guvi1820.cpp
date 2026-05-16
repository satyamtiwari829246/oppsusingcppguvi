#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class DiscountStrategy
{
public:
    virtual double applyDiscount(double total) = 0;

    virtual ~DiscountStrategy() {}
};
class NoDiscount : public DiscountStrategy
{
public:
    double applyDiscount(double total) override
    {
        return total;
    }
};
class PercentageDiscount : public DiscountStrategy
{
    double percent;

public:
    PercentageDiscount(double p)
    {
        percent = p;
    }

    double applyDiscount(double total) override
    {
        return total - (total * percent / 100);
    }
};

class FlatDiscount : public DiscountStrategy
{
    double amount;

public:
    FlatDiscount(double a)
    {
        amount = a;
    }

    double applyDiscount(double total) override
    {
        return max(0.0, total - amount);
    }
};
class Item
{
public:
    virtual double getPrice() const = 0;

    virtual ~Item() {}
};
class Product : public Item
{
    string name;
    double price;

public:
    Product(string n, double p)
    {
        name = n;
        price = p;
    }

    double getPrice() const override
    {
        return price;
    }
};
class ComboPack : public Item
{
    vector<Item*> items;

public:
    void add(Item* item)
    {
        items.push_back(item);
    }

    double getPrice() const override
    {
        double total = 0;

        for (auto item : items)
        {
            total += item->getPrice();
        }

        return total;
    }

    ~ComboPack()
    {
        for (auto item : items)
        {
            delete item;
        }
    }
};

int main()
{
    string itemType, discountType;

    cin >> itemType >> discountType;

    Item* cart = nullptr;
    if (itemType == "Product")
    {
        cart = new Product("Laptop", 45000);
    }
    else
    {
        ComboPack* combo = new ComboPack();

        combo->add(new Product("Laptop", 45000));
        combo->add(new Product("Mouse", 2000));
        combo->add(new Product("Keyboard", 5000));
        ComboPack* accessories = new ComboPack();

        accessories->add(new Product("Mousepad", 500));
        accessories->add(new Product("USB Hub", 3500));

        combo->add(accessories);

        cart = combo;
    }
    double total = cart->getPrice();

    cout << "Total Price before discount: "
         << total << endl;
    DiscountStrategy* strategy = nullptr;

    if (discountType == "None")
    {
        strategy = new NoDiscount();
    }
    else if (discountType == "Percentage")
    {
        strategy = new PercentageDiscount(10);
    }
    else
    {
        strategy = new FlatDiscount(5000);
    }

    double finalPrice = strategy->applyDiscount(total);

    cout << "Final Price after discount: "
         << finalPrice << endl;

    delete cart;
    delete strategy;

    return 0;
}