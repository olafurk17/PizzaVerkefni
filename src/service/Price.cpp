#include "Price.h"

Price::Price()
{
    meat = 0.0;
    vegetable = 0.0;
    cheese = 0.0;
}

Price::~Price()
{
    //dtor
}

void Price::setPrice(double meat, double vegetable, double cheese)
{
    this->meat = meat;
    this->vegetable = vegetable;
    this->cheese = cheese;
}

void Price::txtPrice()
{
    cout << "What is the price of meat? ";
    cin >> meat;
    cout << "What is the price of vegetables? ";
    cin >> vegetable;
    cout << "What is the price of extra cheese? ";
    cin >> cheese;
    cout << endl;


    ofstream fout;
    fout.open("PriceList.txt", ios::app);
    if(fout.is_open()){
      fout << meat << endl;
      fout << vegetable << endl;
      fout << cheese << endl;
    }
    fout.close();
}

void Price::printPrice()
{
    string str;
    ifstream fin;
    fin.open("PriceList.txt");
    if(fin.is_open()) {
        while(!fin.eof()) {
            getline(fin, str);
            fin >> meat;
            fin >> vegetable;
            fin >> cheese;

            cout << "The price that you entered for toppings are " << endl;
            cout << "Price for meat:        " << meat << endl;
            cout << "Price for vegetables:  " << vegetable << endl;
            cout << "Price for cheese:      " << cheese << endl;
        }
        cout << fin.eof() << endl;
    }
    else {
        cout << "File not open" << endl;
    }
}

/*void Price::readPrice()
{
    cout << "What is the price of meat? ";
    cin >> meat;
    cout << "What is the price of vegetables? ";
    cin >> vegetable;
    cout << "What is the price of extra cheese? ";
    cin >> cheese;
    cout << endl;
}*/

void Price::setNumber(int numbMeat, int numbVegetable, int numbCheese)
{
    this->numbMeat = numbMeat;
    this->numbVegetable = numbVegetable;
    this->numbCheese = numbCheese;
}

void Price::multipleTopping()
{
    cout << "How many toppings of meat do you want? ";
    cin >> numbMeat;
    cout << "How many toppings of vegetables do you want? ";
    cin >> numbVegetable;
    cout << "How many layers of extra cheese do you want? ";
    cin >> numbCheese;
    cout << endl;

}

void Price::calcTopping()
{
    meat = numbMeat*meat;
    vegetable = numbVegetable*vegetable;
    cheese = numbCheese*cheese;
}

void Price::totalPrice()
{
    cout << "Total price for your pizza with " << numbMeat << " toppings of meat, ";
    cout << numbVegetable << " toppings of vegetables and " << numbCheese << " layers of extra cheese is: ";
    cout << meat+vegetable+cheese << endl;

    cout << endl;
}

ostream& operator << (ostream& out, const Price& price)
{
    out << "The price for meat is: " << price.meat << endl;
    out << "The price vegetables is: " << price.vegetable << endl;
    out << "The price for cheese is: " << price.cheese << endl;

    return out;
}
