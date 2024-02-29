#include <iostream>
using namespace std;
int main() {
    int f = 1;
    int k = 0;
    int n;
    cout << "Введите Колличество вершин графа: ";
    cin >> n;
    cout << '\n';
    int* mas = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Введите степень " << i + 1 << " вершины: ";
        cin >> mas[i];
        k += mas[i];
    }
    cout << '\n';
    for (int i = 0; i < n; i++) {
        if ((mas[i] <= 0) or (k % 2 != 0) or (k <= n)) {
            flag = 0;
            cout << "Графа не существует ";
            return 0;
        }
    }
    if (f == 1)
    {
        cout << "Граф  существует ";
        return 0;
    }
}
