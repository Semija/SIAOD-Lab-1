#pragma once
// Sort.h : Этот файл содержит заголовки функций для сортировки.


/// <summary> Сортировка выбором. </summary>
void SelectionSort(int** matrix, int size);
/// <summary> Сортировка выбором. </summary>
void SelectionSort(int** matrix, int size_x, int size_y);


/// <summary> Сортировка вставками. </summary>
void InsertSort(int** matrix, int size);
/// <summary> Сортировка вставками. </summary>
void InsertSort(int** matrix, int size_x, int size_y);


/// <summary> Сортировка пузырьками (обменом). </summary>
void BubbleSort(int** matrix, int size);
/// <summary> Сортировка пузырьками (обменом). </summary>
void BubbleSort(int** matrix, int size_x, int size_y);