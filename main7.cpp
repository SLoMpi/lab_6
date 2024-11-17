#include <iostream>
#include <vector>

using namespace std;

void plusesDeleter(vector<int>& v) {
    for (auto it = v.begin(); it != v.end(); ) {
        if (*it > 0) {
            it = v.erase(it);
        } else {
            ++it;
        }
    }
}

int main() {
    vector<int> v = {1, 0, -8, -9, 0, 10, 23, -7};
    cout << "Исходный вектор: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
    plusesDeleter(v);
    cout << "Вектор после удаления положительных чисел: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
}