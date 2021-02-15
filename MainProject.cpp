// MainProject.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// TODO: - доделать алгоритмы сортировки;

#include <iostream>
#include <ctime>
#include "RMG.h"
#include "Sort.h"

int main() {

    setlocale(LC_ALL, "Russian");

    short state = 1;
    while (state != 0) {

        std::cout << "Выберите задание (1-3). Введите 0 чтобы выйти из программы: " << std::endl; std::cin >> state;
        if (state == 0) exit;
        if (state < 0 || state > 3)
        {
            std::cerr << "\nОшибка, вводимое число должно быть больше 3 и не меньше 0 ! \n \n";
            state = 1;
            continue;
        }
        std::cout << std::endl;

        switch (state) {
            case 1:
                std::cout << "Hello, World !" << std::endl;
            break;

            case 2:
                MatrixOut(GetRandomDualMatrix(15, 5, 1), 15, 5);
            break;



            case 3:
                int sortType;
                std::cout << "Способы сортировки:\n"
                             "Выбором       - 1\n"
                             "Вставкой      - 2\n"
                             "Обменом       - 3\n"
                             "Шелла         - 4\n"
                             "Турнирная     - 5\n"
                             "Быстрая       - 6\n"
                             "Пирамидальная - 7\n";
                std::cout << "Выберите способ сортировки: " << std::endl; std::cin >> sortType;

                unsigned int size = 50;
                unsigned int size1 = 20;

                std::cout << "\nИсходная матрица размером " << size << "x" << size << ":\n";
                int** matrix = GetRandomDualMatrix(size,size1,20);
                MatrixOut(matrix, size, size1);

                clock_t t;
                switch (sortType) {
                case 1: 
                    t = clock();
                    SelectionSort(matrix, size, size1);
                    t = clock() - t;
                    break;

                case 2:
                    t = clock();
                    InsertSort(matrix, size, size1);
                    t = clock() - t;
                    break;

                case 3:
                    t = clock();
                    BubbleSort(matrix, size, size1);
                    t = clock() - t;
                    break;

                }

                std::cout << "\nОтсортированная матрица:\n";
                MatrixOut(matrix, size, size1);
                std::cout << "\nВремя выполнения: " << ((float) t) / CLOCKS_PER_SEC *1000 << " секунды\n" << std::endl;

                for (int i = 0; i < size; i++) {
                delete[] matrix[i];
                } delete[] matrix;

            break;
        }
        std::cout << std::endl;
    }
}