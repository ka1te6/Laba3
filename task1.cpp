#include <iostream>
#include <cstdlib> 
#include <ctime>  
const int ARRAY_SIZE = 10;

int main() {
    
    setlocale(LC_ALL, "Russian");

    srand(static_cast<unsigned>(time(0)));

    int array[ARRAY_SIZE];
   
    std::cout << "Исходный массив: ";
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        array[i] = rand() % 100;
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    int sum = 0;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        sum += array[i];
    }
    double average = static_cast<double>(sum) / ARRAY_SIZE;

    std::cout << "Среднее арифметическое: " << average << std::endl;

    return 0;
}
