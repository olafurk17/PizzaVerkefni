#include "PizzaMenuRepo.h"

PizzaMenuRepo::PizzaMenuRepo(){
    //ctor
}
<<<<<<< HEAD


void PizzaMenuRepo::write(PizzaMenu& menu){
 ofstream fout;
    fout.open("Pizza-Menu.txt", ios::app);
    if(fout.is_open()){
        fout << menu;
    }
    fout.close();
}

void PizzaMenuRepo::read(){
=======
void PizzaMenuRepo::print(){
>>>>>>> 1179c7c0b10694e6c705846d2d65f7df6d524ef7

    ifstream fin;
    string str;
    fin.open("Pizza-Menu.txt");
    vector<string> pizza;

    if (fin.is_open()){
<<<<<<< HEAD
            while (getline(fin, str)){
                    pizza.push_back(str);
                    str = "";
=======
            while (!fin.eof()){
                getline(fin,str);
                cout << str << endl;
>>>>>>> 1179c7c0b10694e6c705846d2d65f7df6d524ef7
            }
            for(size_t i = 0; i < pizza.size(); i++){
        cout << pizza[i] << endl;
         fin.close();
        }
    }

    else{

        cout << "can not write in file, file is closed" << endl;
    }
}

void PizzaMenuRepo::save(PizzaMenu& menu){
 ofstream fout;
    fout.open("Pizza-Menu.txt", ios::app);
    if(fout.is_open()){
        fout << menu;
    }
    fout.close();
}
