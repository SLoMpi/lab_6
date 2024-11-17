#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string, int> uniqueWords(const string& str) {
    map<string, int> wordCount;
    string word;
    for (char c : str) {
        if (c == ' ' || c == ',' || c == '.') {
            if (!word.empty()) {
                wordCount[word]++;
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        wordCount[word]++;
    }
    return wordCount;
}
int main() {
    string str = "can you can";
    map<string, int> words = uniqueWords(str);
    cout << "Уникальные слова: " ;
    for (const auto& pair : words) {
        cout << pair.first << " ";
    }
}
