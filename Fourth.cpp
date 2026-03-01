#include<iostream>
#include<fstream>

int main() {
    setlocale(LC_ALL, "RUS");
    std::ifstream file("C:\\Users\\Линар\\Desktop\\3homework.txt");
    int rows{}, columns{};
    file >> rows;
    file >> columns;
    int** arr = new int* [rows];
    for (size_t i = 0; i < rows; i++) {
        arr[i] = new int[columns];
    }
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < columns; j++) {
            file >> arr[i][j];
        }
    }
    file.close();
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = columns; j > 0; j--) {
            std::cout << arr[i][j - 1] << " ";
        }
        std::cout << std::endl;
    }

    for (size_t i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return EXIT_SUCCESS;
}