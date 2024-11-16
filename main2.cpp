#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int wordsCounter(const string& str) {
    int count = 0;
    bool a = false;
    for (size_t i = 0; i < str.length(); ++i) {
        char c = str[i];
        if (c == ' ' || c == ',' || c == '.') {
            a = false;
        } else {
            if (!a) {
                count++;
                a = true;
            }
        }
    }
    return count;
}

int main() {
    string sentence = "Can you, can you.";
    int count = wordsCounter(sentence);
    cout << "Количество уникальных слов: " << count << endl; 
    return 0;
}