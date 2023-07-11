#include <iostream>
using namespace std;

const int SIZE = 1000;

struct sfg
{
    int id;
    char info[SIZE];
};
sfg a10;
void menu();
void enter_data();
void output_data();



int main()
{
    menu();
}

void menu()
{
    
    int num;
    cout << "Choose what you want to do with the table\n enter data(1), output data(2)\n";
    cin >> num;
    
    

    switch (num)
    {
    case 1:
        enter_data();
        break;
    case 2:
        output_data();
    }
}

void enter_data()
{

    
    cout<<"Enter an integer: ";
    cin >>a10.id;
    
    cout<<"Enter an info: ";
    cin >> a10.info;
    menu();
}

void output_data()
{
    cout<<"ID : ";
    cout << a10.id << endl;

    cout<<"INFO : ";
    cout << a10.info << endl;
    menu();
}