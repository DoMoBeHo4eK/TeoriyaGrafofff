#include <iostream>
using namespace std;
int main() {
    int f = 1;//флаг
    int k = 0;//сумма степеней
    int b;//Вводимая переманная
    cout << "Введите Колличество вершин графа: ";
    cin >> b;//та самая переменная из 6 строки
    cout << '\n';
    int* mas = new int[b];//динамический массив
    for (int i = 0; i < b; i++) {
        cout << "Введите степень " << i + 1 << " вершины: ";
        cin >> mas[i];
        k += mas[i];
    }
    cout << '\n';
    for (int i = 0; i < b; i++) {
        if ((mas[i] < 0) || (k % 2 != 0) || (k <= b)) {
            f = 0;
            cout << "Графа нет ";
            return 0;
        }
    }
    if (f == 1)
    {
        cout << "Граф  существует ";
        return 0;
    }
}
