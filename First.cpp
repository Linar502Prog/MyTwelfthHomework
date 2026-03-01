#include<iostream>
#include<fstream>
#include<string>
#include<Windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    std::ifstream file("C:\\Users\\Линар\\Desktop\\first1.txt");
    std::string s;
    if (file.is_open()) {
        while (!(file >> s).eof()) {
            std::cout << s << std::endl;
        }
    }
    else {
        std::cout << "Файл не найден" << std::endl;
    }

    return EXIT_SUCCESS;
}

