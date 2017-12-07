#include "PizzaMenuRepo.h"

PizzaMenuRepo::PizzaMenuRepo(){
    //ctor
}
void PizzaMenuRepo::print(){

    ifstream fin;
    string str;
    fin.open("Pizza-Menu.txt");

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

void PizzaMenuRepo::save(PizzaMenu& menu){
 ofstream fout;
    fout.open("Pizza-Menu.txt", ios::app);
    if(fout.is_open()){
        fout << menu;
    }
    fout.close();
}
