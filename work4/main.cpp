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

bool tests(){
    if(Calc("+", 1, 2) != 3) return false;
    if(Calc("*", 3, 3) != 9) return false;
    return true;
}

int main() {
    setlocale(LC_ALL, "Russian");
    if(tests() == true){
        cout << "Все тесты пройдены!" << endl;
    }
    else cout << "Тесты завершились неудачно" << endl;
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
