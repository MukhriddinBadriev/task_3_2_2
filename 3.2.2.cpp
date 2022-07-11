#include <iostream>
using namespace std;
struct Bank
{
    int account=0;
    string name;
    double money=0;
};
void bank(Bank &u,double new_money) {
    
    cout << "Введите новый баланс: ";
    cin >> new_money;
    u.money = new_money;
}
int main()
{
    setlocale(LC_ALL, "rus");
    Bank man;  
    cout << "Введите номер счёта: ";
    cin >> man.account;
    cout << "Введите имя владельца: ";
    cin >> man.name;
    cout << "Введите баланс: ";
    cin >> man.money;
    bank(man,1);
    cout << "Ваш счёт: " << man.name << ", " << man.account << ", " << man.money << endl;
    return 0;
}