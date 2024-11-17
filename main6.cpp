#include <iostream>
#include <list>

using namespace std;

void reverseNum(list<int>& nums) {
    auto it = nums.begin();
    while (it != nums.end()) {
        int currentValue = *it;
        it = nums.insert(it, -currentValue);
        ++it;
        ++it;
    }
}

int main() {
    list<int> nums = {1, 5, 4, -3};
    cout << "Исходный список: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    reverseNum(nums);
    cout << "Список после вставки обратных элементов: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}