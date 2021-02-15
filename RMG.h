#pragma once
// RMG.h : RMG - Random Matrix Generator. Этот файл содержит заголовки функций для рандомных матриц.


/// <summary> Вывод матрицы в консоль. </summary>
void MatrixOut(int** matrix, short size);

/// <summary> Вывод матрицы в консоль. </summary>
void MatrixOut(int** matrix, short size_x, short size_y);



/// <summary> Генерация матрицы по умолчанию. </summary>
int** GetRandomDualMatrix();

/// <summary> Генерация матрицы определенного размера. </summary>
int** GetRandomDualMatrix(short size);

/// <summary> Генерация матрицы определенного размера. </summary>
int** GetRandomDualMatrix(short size_x, short size_y);

/// <summary> Генерация матрицы определенного размера с заполнением элементов
/// случайным значением ниже определенного максимума. </summary>
int** GetRandomDualMatrix(short size_x, short size_y, short max_limit);

/// <summary> Генерация матрицы определенного размера с заполнением элементов
/// с случайным значением в заданных рамках. </summary>
int** GetRandomDualMatrix(short size_x, short size_y, short min_limit, short max_limit);