 #include "../../include/models/Toppings.h"



//constructor sem núll stillir
Toppings::Toppings(){

    string name = "";
    //int price = 0;
}

//constructor til að slá inn
Toppings::Toppings(string name){

    this -> name = name;
}

string Toppings::get_name(){
    return this-> name;
}

ostream& operator <<(ostream& out, Toppings& topping){

    out << topping.name << " ";

    return out;
}

istream& operator >>(istream& in, Toppings& topping){

    in >> topping.name;

    return in;

}

/*void Toppings::save(){

    ofstream fout;
    fout.open("toppings.txt", ios::app);
    if(fout.is_open()){
        fout << name << endl;
        //fout << " " << price << endl;
    }
    fout.close();
}

void Toppings::print(){

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

void Toppings::startRegester(Toppings& toppings) {

    char input = 'y';

    while (input == 'y'|| input == 'Y'){
        cout << "Type the name of the topping: ";
        cin >> toppings;
        toppings.save();

        cout << "Do you want to regester more toppings type 'y' for yes or 'n' for no: ";
        cin >> input;

    }

}
*/

