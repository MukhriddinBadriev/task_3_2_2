#include <iostream>
using namespace std;
struct Bank
{
    int account;
    string name;
    double money;
};
void bank(Bank &u) {
    double new_money;
    cout << "Введите номер счёта: ";
    cin >> u.account;
    cout << "Введите имя владельца: ";
    cin >> u.name;
    cout << "Введите баланс: ";
    cin >> u.money;
    cout << "Введите новый баланс: ";
    cin >> new_money;
    cout <<"Ваш счёт: " << u.name << ", " << u.account << ", " << new_money<<endl;
}
int main()
{
    setlocale(LC_ALL, "rus");
    Bank man;  
    bank(man);
    return 0;
}