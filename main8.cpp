#include <iostream>
#include <list>
using namespace std;
void Sort(list<int>& nums) {
    nums.sort();
    nums.reverse();
}
int main() {
    std::list<int> nums = {1, 5, 4, -3};
    cout << "Исходный список: ";
    for (int num : nums) {
        cout << num << " ";
    }
    Sort(nums);
    cout << "\nСписок после сортировки по убыванию: ";
    for (int num:nums) {
        std::cout << num <<" ";
    }
    return 0;
}
