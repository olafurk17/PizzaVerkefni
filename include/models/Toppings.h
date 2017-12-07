#ifndef TOPPINGS_H
#define TOPPINGS_H
#include <string>
#include <istream>
#include <iostream>
#include <fstream>

using namespace std;

// Class to regester toppings
class Toppings
{
    public:
        Toppings();
        Toppings (string name);
        string get_name();
        friend ostream& operator <<(ostream& out, Toppings& topping);
        friend istream& operator >>(istream& in, Toppings& topping);
        void startRegester(Toppings& toppings);


    private:
        string name;

};

#endif // TOPPINGS_H
