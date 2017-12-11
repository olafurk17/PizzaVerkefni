#ifndef PIZZAMENU_H
#define PIZZAMENU_H
#include <string>
#include <istream>
#include <iostream>
#include <fstream>
#include "toppings.h"
#include <vector>
#include "Other.h"

using namespace std;


class PizzaMenu

{
    public:
        PizzaMenu();
        PizzaMenu(string name);
        friend ostream& operator <<(ostream& out, PizzaMenu& pizza);
        friend istream& operator >>(istream& in, PizzaMenu& pizza);
        string getname();
        string setname(string str);
        vector <string> pizzaToppings;
    private:
        string name;
};

#endif // PIZZAMENU_H
