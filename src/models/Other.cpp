#include "../../include/models/Other.h"

Other::Other()
{
    string soda = "";
    string bread = "";
    string dessert = "";
}


void Other::saveSoda() {

    ofstream fout;
    fout.open("Soda.txt", ios::app);
    if(fout.is_open()) {
        fout << soda << endl;
    }
    fout.close();
}

void Other::saveBread() {

    ofstream fout;
    fout.open("Bread.txt", ios::app);
    if(fout.is_open()) {
        fout << bread << endl;
    }
    fout.close();
}

void Other::saveDessert() {

    ofstream fout;
    fout.open("Desert.txt", ios::app);
    if(fout.is_open()) {
        fout << dessert << endl;
    }
    fout.close();
}

void Other::printSoda() {

    ifstream fin;
    string str;
    fin.open("Soda.txt");

    if(fin.is_open()) {
        while (!fin.eof()) {
            getline(fin, str);
            cout << str << endl;
        }
        fin.close();
    }
    else {
        cout << "Can not open file." << endl;
    }
}

void Other::printBread() {

    ifstream fin;
    string str;
    fin.open("Bread.txt");

    if(fin.is_open()) {
        while (!fin.eof()) {
            getline(fin, str);
            cout << str << endl;
        }
        fin.close();
    }
    else {
        cout << "Can not open file." << endl;
    }
}

void Other::printDessert() {
    ifstream fin;
    string str;
    fin.open("Dessert.txt");

    if(fin.is_open()) {
        while (!fin.eof()) {
            getline(fin, str);
            cout << str << endl;
        }
        fin.close();
    }
    else {
        cout << "Can not open file." << endl;
    }
}

ostream& operator << (ostream& out, Other& other) {

    out << other.soda << " " << other.bread;
    out << " " << other.dessert << endl;

    return out;
}

istream& operator >> (istream& in, Other& other) {

    char answer = ' ';

    while(answer != 'N' || answer != 'n') {
        cout << "Please type in sodas: ";
        in >> other.soda;
        cout << "Please type in other types of bread: ";
        in >> other.bread;
        cout << "Please type in desserts: ";
        in >> other.dessert;
        cout << endl << endl;
        cout << "Do you want to regester more? ";
        in >> answer;
    }

    return in;
}

void Other::startRegester(Other& other) {

    char input;

    do {
        cout << "What would you like to regester?" << endl << endl;
        cout << "s : Soda" << endl;
        cout << "b : Bread " << endl;
        cout << "d : Desserts" << endl;

    if (input == 's' || input == 'S'){
        char inputs;
        do{
            cout << "Type in the name of the soda";
            cin >> soda;
            saveSoda();

            cout << "Do you want to regester more soda's on the menu 'y' for yes or 'n' for no: ";
            cin >> inputs;
        }
        while (input == 'y'|| input == 'Y');

}
     if (input == 'b' || input == 'B'){
        char inputb;
        do{

        cout << "Type in the name of the bread";
        cin >> bread;
        saveBread();

        cout << "Do you want to regester more bread's on the menu 'y' for yes or 'n' for no: ";
        cin >> input;
        }
        while (input == 'y'|| input == 'Y');

    }
     if (input == 'd' || input == 'D'){

        char inputb;
        do{

        cout << "Type in the name of the Desert";
        cin >> dessert;
        saveDessert();

        cout << "Do you want to regester more bread's on the menu 'y' for yes or 'n' for no: ";
        cin >> input;
        }
        while (input == 'y'|| input == 'Y');

    }

}
    while (input == 's' || input == 'S');

}
