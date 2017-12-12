#include "PizzaMenuRepo.h"

PizzaMenuRepo::PizzaMenuRepo(){
    //ctor
}


void PizzaMenuRepo::write(PizzaMenu& menu){
 ofstream fout;
    fout.open("Pizza-Menu.txt", ios::app);
    if(fout.is_open()){
        fout << menu;
    }
    fout.close();
}



void PizzaMenuRepo::read_in_vector(string line){
    string str = "";
    vector<string> pizza;
    for (unsigned int i = 0; i < line.length(); i++) {
        if (line[i] == ','){
             pizza.push_back(str);
            str = "";
        }
        else {
            str += line[i];
        }

    }
    for(size_t i = 0; i < pizza.size(); i++){
        cout << pizza[i] << endl;

    }

}

void PizzaMenuRepo::read(){

    ifstream fin;
    string str;
    fin.open("Pizza-Menu.txt");

    if (fin.is_open()){
            while (getline(fin, str)){
                    read_in_vector(str);

            }

        fin.close();
    }
    else{

        cout << "can not write in file, file is closed" << endl;
    }
}
