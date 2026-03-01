#include <iostream>
#include<Windows.h>
#include<fstream>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int size{};
    std::cout << "Введите размер массива: ";
    std::cin >> size;
    int* arr = new int[size];
    for (size_t i = 0; i < size; i++) {
        int element{};
        std::cout << "arr[" << i << "] = ";
        std::cin >> element;
        arr[i] = element;
    }
    std::fstream file("C:\\Users\\Линар\\Desktop\\3homework.txt", std::ios::out);
    if (file.is_open()) {
        for (size_t i = size; i > 0; i--) {
            file << arr[i - 1] << " ";
        }
    }
    else {
        std::cout << "Ошибка открытия файла " << std::endl;
    }
    file.close();
    delete[] arr;

    return EXIT_SUCCESS;
}