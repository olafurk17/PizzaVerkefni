#include "../../include/models/PizzaMenu.h"
#include <string>
#include <istream>
#include <iostream>
#include <fstream>
#include "../../include/models/Toppings.h"
#include <vector>

//Klasi sem gerir starfsmanni kleift að búa til pizzur fyrir matseðil.

PizzaMenu::PizzaMenu(){

    int topping_cnt = 0;
    string name = "";
    int price = 0;
}

PizzaMenu::PizzaMenu(string name){

    this -> name = name;

}

PizzaMenu::PizzaMenu(string name, int topping_cnt, char size_pizza){
    this -> name = name;
    this -> topping_cnt = topping_cnt;
    int price = 0;
    this -> size_pizza = size_pizza;

}

ostream& operator <<(ostream& out, PizzaMenu& pizza){
    out << pizza.name << ", ";
    if (pizza.size_pizza == '1'){
        out << "9 inches, ";
    }
        if (pizza.size_pizza == '2'){
        out << "12 inches, ";
    }
        if (pizza.size_pizza == '3'){
        out << "16 inches, ";
    }
    for (int i = 0; i < pizza.get_topping_cnt(); i++)
        {
            out << pizza.pizza_toppings[i] << ", ";
        }
        out << pizza.price << ", ";
    out << endl;

    return out;
}

istream& operator >>(istream& in, PizzaMenu& pizza){

    return in;

}

string PizzaMenu::get_name() {

this -> name  = name;
return name;

}

int PizzaMenu::get_topping_cnt(){

    this -> topping_cnt = topping_cnt;
    return topping_cnt;
}


int PizzaMenu::get_price(){

    this -> price = price;
    return price;
}

int PizzaMenu::get_topping_price(){

    this -> topping_price = 250;
    return topping_price;
}


string PizzaMenu::set_name(string str) {

    this -> name = str;

}

int PizzaMenu::set_topping_cnt(int t){

   this -> topping_cnt = t;
}


int PizzaMenu::set_price(int p){

    this -> price = p;
}

