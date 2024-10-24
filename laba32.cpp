#include <iostream>
#include <cstdlib> 
#include <ctime>  

int main() {

    setlocale(LC_ALL, "Russian");

    srand(static_cast<unsigned>(time(0)));  // ������������� ���������� ��������� �����

    int size;
    std::cout << "������� ������ �������: ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "������������ ������ �������" << std::endl;
        return 1;
    }

    // �������� ������ ��� ������ � ����
    int* array = new int[size];

    std::cout << "�������� ������: ";
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % 100;  // ��������� ������ ���������� �������
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    // ��������� ������� ��������������
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    double average = static_cast<double>(sum) / size;

    std::cout << "������� ��������������: " << average << std::endl;

    // ����������� ������
    delete[] array;

    return 0;
}
