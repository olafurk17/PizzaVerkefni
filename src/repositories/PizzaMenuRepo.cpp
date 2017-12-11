#include "PizzaMenuRepo.h"

PizzaMenuRepo::PizzaMenuRepo(){
    //ctor
}
void PizzaMenuRepo::read(vector<PizzaMenu>& pizzaMenuVector){

    ifstream fin;
    string str;
    fin.open("Pizza-Menu.txt");

    if (fin.is_open()){
            while (!fin.eof()){
                getline(fin,str);
                PizzaMenu menu(str);
                pizzaMenuVector.push_back(menu);
            }

        fin.close();
        pizzaMenuVector.pop_back();
    }
    else{

        cout << "can not write in file, file is closed" << endl;
    }
}

void PizzaMenuRepo::write(PizzaMenu& menu){
 ofstream fout;
    fout.open("Pizza-Menu.txt", ios::app);
    if(fout.is_open()){
        fout << menu;
    }
    fout.close();
}
