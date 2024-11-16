#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

void qSort(vector<int>& nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        return a > b;
    });
}

vector<int>::iterator Find(vector<int>::iterator first, vector<int>::iterator last, int el) {
    while (first != last) {
        if (*first == el)  return first;
        ++first;
    }
    return last;
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
    qSort(v);
    vector<int>::iterator it = Find(v.begin(), v.end(), eFind);
    if (it != v.end()) {
        cout << "Элемент " << eFind << " найден на позиции: " << distance(v.begin(), it) << endl;
    } else cout<<"Элемент не найден";
    return 0;
}