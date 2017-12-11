#include "OrderRepo.h"

OrderRepo::OrderRepo()
{
    //ctor
}

void read(vector<Order>& order_vector)
{
    /*ifstream fin;
    string str;
    fin.open("activeorders.txt");


    if (fin.is_open()){
            while (!fin.eof()){
                getline(fin,str, ',');
                Order order();
                order_vector.push_back(order);
            }

        fin.close();
        toppingVector.pop_back();
    }
    else{

        cout << "can not write in file, file is closed" << endl;
    }*/
}

void write(Order& order)
{
    ofstream fout;
    fout.open("activeorders.txt", ios::app);
    if(fout.is_open()){
        fout << order << endl;
    }
    fout.close();
}
