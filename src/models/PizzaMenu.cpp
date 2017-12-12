#include "../../include/models/PizzaMenu.h"
#include <string>
#include <istream>
#include <iostream>
#include <fstream>
#include "../../include/models/Toppings.h"
#include <vector>

//Klasi sem gerir starfsmanni kleift að búa til pizzur fyrir matseðil.

PizzaMenu::PizzaMenu(){

    int toppingCnt = 0;
    string name = "";
    int price = 0;
}

PizzaMenu::PizzaMenu(string name){

    this -> name = name;

}

PizzaMenu::PizzaMenu(string name, int toppingCnt, char sizePizza){
    this -> name = name;
    this -> toppingCnt = toppingCnt;
    int price = 0;
    this -> sizePizza = sizePizza;

}

ostream& operator <<(ostream& out, PizzaMenu& pizza){
    out << pizza.name << ", ";
    if (pizza.sizePizza == '1'){
        out << "9 inches, ";
    }
        if (pizza.sizePizza == '2'){
        out << "12 inches, ";
    }
        if (pizza.sizePizza == '3'){
        out << "16 inches, ";
    }
    for (int i = 0; i < pizza.gettoppingCnt(); i++)
        {
            out << pizza.pizzaToppings[i] << ", ";
        }
        out << pizza.price << ", ";
    out << endl;

    return out;
}

istream& operator >>(istream& in, PizzaMenu& pizza){

    return in;

}

string PizzaMenu::getname() {

this -> name  = name;
return name;

}

int PizzaMenu::gettoppingCnt(){

    this -> toppingCnt = toppingCnt;
    return toppingCnt;
}


int PizzaMenu::getprice(){

    this -> price = price;
    return price;
}

int PizzaMenu::gettoppingPrice(){

    this -> toppingPrice = 250;
    return toppingPrice;
}


string PizzaMenu::setname(string str) {

    this -> name = str;

}

int PizzaMenu::settoppingCnt(int t){

   this -> toppingCnt = t;
}


int PizzaMenu::setprice(int p){

    this -> price = p;
}

