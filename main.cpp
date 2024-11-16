#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

vector<int>::iterator Find(vector<int>::iterator first, vector<int>::iterator last, int el) {
    while (first != last) {
        if (*first == el)  return first;
        ++first;
    }
    throw runtime_error("Эллемент не найден");
    }

int main() {
    vector<int> v;
    int n;
    cout << "Введите количество элементов: ";
    cin >> n;
    cout << "Введите элементы вектора: " << endl;
    for (int i = 0; i < n; ++i) {
        int el;
        cout << (i + 1) << ": ";
        cin >> el;
        v.push_back(el);
    }
    int eFind;
    cout << "Введите элемент для поиска: ";
    cin >> eFind;
    vector<int>::iterator it = Find(v.begin(), v.end(), eFind);
    if (it != v.end()) {
        cout << "Элемент " << eFind << " найден на позиции: " << distance(v.begin(), it) << endl;
    }
    return 0;
}