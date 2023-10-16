// MyOvercoat.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <typeinfo>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
//#include <cstdlib>
#include <ctype.h>

using namespace std;

class Overcoat
{
public:
    string _name;
    double _price;

    Overcoat(const string& Name, const double& Price) : _name(Name), _price(Price) {};
    bool operator ==(const Overcoat& OvercoatN) {
        if (this->_name == OvercoatN._name) {
            return true;
        }
        else {
            return false;
        }
    }

    Overcoat operator =(const Overcoat& OvercoatN) {
        return Overcoat(this->_name = OvercoatN._name, this->_price = OvercoatN._price);
    }

    bool operator>(const Overcoat& OvercoatN)
    {
        return this->_price > OvercoatN._price ? true : false;
    }

};

int main()
{
    std::cout << "Hello World!\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
