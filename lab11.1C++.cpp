#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

// Функція для підрахунку входжень заданих символів у рядку
void countCharacters(const string& line, int& plusCount, int& minusCount, int& equalCount) {
    for (char ch : line) {
        if (ch == '+') {
            plusCount++;
        }
        else if (ch == '-') {
            minusCount++;
        }
        else if (ch == '=') {
            equalCount++;
        }
    }
}

// Функція для зчитування вмісту файлу і підрахунку символів
void countSymbolsInFile(const string& filename, int& plusCount, int& minusCount, int& equalCount) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Не вдалося відкрити файл: " << filename << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        countCharacters(line, plusCount, minusCount, equalCount);
    }

    file.close();
}

// Основна функція
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string filename = "t.txt";
    int plusCount = 0, minusCount = 0, equalCount = 0;

    countSymbolsInFile(filename, plusCount, minusCount, equalCount);

    cout << "Кількість входжень символів:" << endl;
    cout << "'+': " << plusCount << endl;
    cout << "'-': " << minusCount << endl;
    cout << "'=': " << equalCount << endl;

    return 0;
}
