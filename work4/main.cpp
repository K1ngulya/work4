#include <iostream>
using namespace std;

int Calc(string znak, int num1, int num2){
    int suma, minus, del, umn;
    if (znak == "+") {
        suma = num1 + num2;
        return suma;
    }else if (znak == "-") {
        minus = num1 - num2;
        return minus;
    }
    else if (znak == "*") {
        umn = num1 * num2;
        return umn;
    }
    else if (znak == "/") {
        del = num1 / num2;
        return del;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    printf("Калькулятор запущен!\n");
    while(true){
        int num1, num2;
        string znak;
        cout << ("Введите первое число: ");
        cin >> num1;
        cout << ("Введите второе число: ");
        cin >> num2;
        cout << ("Что вы хотите сделать? * или + или - или / ") << endl;
        cin >> znak;
        cout << "Ответ: " << Calc(znak, num1, num2);
        cout << endl << "-----------------" << endl;
    }
}
