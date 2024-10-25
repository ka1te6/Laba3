#include <iostream>
#include <vector>
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

    std::vector<std::vector<int>> A(n, std::vector<int>(m));
    std::vector<std::vector<int>> B(m, std::vector<int>(l));
    std::vector<std::vector<int>> C(n, std::vector<int>(l, 0));

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

    return 0;
}
