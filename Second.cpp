#include <iostream>
#include<fstream>
#include<string>

int main() {
  std::ifstream file("C:\\Users\\Линар\\Desktop\\first1.txt");
  std::string count, s_line;
  if (file.is_open()) {
    file >> count;
    int num = std::stoi(count);
    int* arr = new int[num];
    for (int i = 0; i < num; i++) {
      file >> s_line;
      int line = std::stoi(s_line);
      arr[num-1-i] = line;
    }
    for (int i = 0; i < num; i++) {
      std::cout << arr[i] << " ";
    }
  }
  else {
      std::cout << "Ошибка открытия файла" << std::endl;
  }
  file.close();

  return EXIT_SUCCESS;
}