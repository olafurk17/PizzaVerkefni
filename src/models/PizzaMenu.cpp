#include "../../include/models/PizzaMenu.h"
#include <string>
#include <istream>
#include <iostream>
#include <fstream>
#include "../../include/models/Toppings.h"
#include <vector>

//Klasi sem gerir starfsmanni kleift að búa til pizzur fyrir matseðil.

PizzaMenu::PizzaMenu() {

    int toppingCnt = 0;
    string name = "";
    int price = 0;
}

ostream& operator <<(ostream& out, PizzaMenu& pizza) {


    return out;
}

istream& operator >>(istream& in, PizzaMenu& pizza) {

    return in;

}


void PizzaMenu::print() {

    ifstream fin;
    string str;
    fin.open("toppings.txt");

    if (fin.is_open()){
            while (!fin.eof()){
                getline(fin,str);
                cout << str << endl;
            }

        fin.close();
    }
    else{

        cout << "can not write in file, file is closed" << endl;
    }
}



void PizzaMenu::save() {

 ofstream fout;
    fout.open("Pizza-Menu.txt", ios::app);
    if(fout.is_open()){
        fout << name;
         for (int i = 0; i < toppingCnt; i++)
        {
            fout << pizzaToppings[i];
        }
        fout << price << endl;
    }
    fout.close();

}

void PizzaMenu::startRegester(PizzaMenu& pizza) {

    char input = 'y';

    while (input == 'y'|| input == 'Y')
    {
        cout << "Name of the pizza? ";
        cin >> name;
        cout << "How many toppings are on " << name << " ? ";
        cin >> toppingCnt;
        cout << "What toppings are on " << name << " ? ";
        for (int i = 0; i < toppingCnt; i++)
        {
            string str;
            cin >> str;

            pizzaToppings.push_back(str);
        }

            pizza.save();

        cout << "Do you want to regester more pizza's on the menu 'y' for yes or 'n' for no: ";
        cin >> input;

    }

}

void PizzaMenu::menu() {



}

int PizzaMenu::number_locations() {

    ifstream fin;
    string str;
    // open file to search
    fin.open("Pizza-Menu.txt");
    if(fin.is_open()) {
        unsigned int count_line = 0;
        while(getline(fin, str)) {
            count_line++;
        }
        fin.close();
        return count_line;
    }
    else cout << "Unable to open file.";

}

void PizzaMenu::print_line (int line_no){ // Prentar uppgefna línu eftir línunúmeri

    ifstream fin;
    string str;
    // open file to search
    fin.open("Pizza-Menu.txt");
    if(fin.is_open()) {
        unsigned int count_line = 0;
        while(getline(fin, str)) {
            count_line++;
            if (count_line == line_no) {
                cout << str << endl;
            }
        }
                fin.close();
    }
    else cout << "Unable to open file.";
}
