#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    setlocale(LC_ALL, "Russian");

    srand(static_cast<unsigned>(time(0)));

    int n, m, l;
    std::cout << "������� ���������� ����� ������ ������� (n): ";
    std::cin >> n;
    std::cout << "������� ���������� �������� ������ ������� (� ����� ������ �������) (m): ";
    std::cin >> m;
    std::cout << "������� ���������� �������� ������ ������� (l): ";
    std::cin >> l;

    int** A = new int* [n];
    int** B = new int* [m];
    int** C = new int* [n];

    for (int i = 0; i < n; ++i) {
        A[i] = new int[m];
    }
    for (int i = 0; i < m; ++i) {
        B[i] = new int[l];
    }
    for (int i = 0; i < n; ++i) {
        C[i] = new int[l];
    }

    std::cout << "������� A:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            A[i][j] = rand() % 10;
            std::cout << A[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "������� B:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < l; ++j) {
            B[i][j] = rand() % 10;
            std::cout << B[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < l; ++j) {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < l; ++j) {
            for (int k = 0; k < m; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    std::cout << "��������� ������������ ������ A � B (������� C):\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < l; ++j) {
            std::cout << C[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; ++i) {
        delete[] A[i];
    }
    delete[] A;

    for (int i = 0; i < m; ++i) {
        delete[] B[i];
    }
    delete[] B;

    for (int i = 0; i < n; ++i) {
        delete[] C[i];
    }
    delete[] C;

    return 0;
}

