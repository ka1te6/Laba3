#include <iostream>
#include <cstdlib> 
#include <ctime>  

int main() {

    setlocale(LC_ALL, "Russian");

    srand(static_cast<unsigned>(time(0)));  // Инициализация генератора случайных чисел

    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Некорректный размер массива" << std::endl;
        return 1;
    }

    // Выделяем память под массив в куче
    int* array = new int[size];

    std::cout << "Исходный массив: ";
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % 100;  // Заполняем массив случайными числами
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    // Вычисляем среднее арифметическое
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    double average = static_cast<double>(sum) / size;

    std::cout << "Среднее арифметическое: " << average << std::endl;

    // Освобождаем память
    delete[] array;

    return 0;
}
