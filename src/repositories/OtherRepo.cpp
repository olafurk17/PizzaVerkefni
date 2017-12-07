#include "OtherRepo.h"

OtherRepo::OtherRepo()
{
    //ctor
}

void OtherRepo::saveSoda(Other& other)
{
    ofstream fout;
    fout.open("Soda.txt", ios::app);
    if(fout.is_open()) {
        fout << other.getsoda() << endl;
    }
    fout.close();
}

void OtherRepo::saveBread(Other& other)
{
    ofstream fout;
    fout.open("Bread.txt", ios::app);
    if(fout.is_open()) {
        fout << other.getbread() << endl;
    }
    fout.close();
}
void OtherRepo::saveDessert(Other& other)
{
    ofstream fout;
    fout.open("Desert.txt", ios::app);
    if(fout.is_open()) {
        fout << other.getdessert() << endl;
    }
    fout.close();
}
void Other::printSoda()
{
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

void Other::printBread()
{
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

void Other::printDesert()
{
    ifstream fin;
    string str;
    fin.open("Desert.txt");

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
