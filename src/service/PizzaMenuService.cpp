#include "../../include/service/PizzaMenuService.h"


PizzaMenuService::PizzaMenuService(){
    //ctor
}

void PizzaMenuService::save(PizzaMenu& menu){
    repo.save(menu);

}

int PizzaMenuService::number_locations()
{
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

void PizzaMenuService::print_line (int line_no){ // Prentar uppgefna l�nu eftir l�nun�meri

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

int PizzaMenuService::finalPrice(PizzaMenu& pizza, int price){

    int t = 0;
    t = price + (pizza.gettoppingCnt() * pizza.gettoppingPrice());
    return pizza.setprice(t);

}

int PizzaMenuService::sizePrice(char input){
    if (input == '1'){

        this -> priceS = 1200;
        return priceS;

    }
    if (input == '2') {

        this -> priceS = 1600;
        return priceS;

    }
    if (input == '3'){

        this -> priceS = 1800;
        return priceS;

    }



}


