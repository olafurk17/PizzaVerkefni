#include "ToppingRepo.h"

ToppingRepo::ToppingRepo()
{
    //ctor
}

void ToppingRepo::save(Toppings& toppings) {

    ofstream fout;
    fout.open("toppings.txt", ios::app);
    if(fout.is_open()){
        fout << toppings << endl;
    }
    fout.close();
}

void ToppingRepo::print() {

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
