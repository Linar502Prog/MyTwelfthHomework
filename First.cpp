#include<iostream>
#include<fstream>
#include<string>


int main() {
    setlocale(LC_ALL, "RUS");
    std::ifstream file("first2.txt");
    std::string s;
    if (file.is_open()) {
        while (file >> s) {
            std::cout << s << std::endl;
        }
    }
    else {
        std::cout << "Файл не найден" << std::endl;
    }

    return EXIT_SUCCESS;
}


