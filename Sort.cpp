// Sort.cpp : Этот файл содержит реализацию функций для сортировки матриц.

#include <algorithm>


void SelectionSort(int** matrix, int size) {
	int tmp, pos;
	for (int i = 0; i < size; ++i) {
		for (int currentIndex = 0; currentIndex < size; ++currentIndex) {
			pos = currentIndex;
			tmp = matrix[i][pos];
			for (int j = currentIndex + 1; j < size; ++j) {
				if (matrix[i][j] < tmp) {
					pos = j;
					tmp = matrix[i][j];
				}
			}
			matrix[i][pos] = matrix[i][currentIndex];
			matrix[i][currentIndex] = tmp;
		}
	}
}

void SelectionSort(int** matrix, int size_x, int size_y) {
	int tmp, pos;
	for (int i = 0; i < size_x; ++i) {
		for (int currentIndex = 0; currentIndex < size_y; ++currentIndex) {
			pos = currentIndex;
			tmp = matrix[i][pos];
			for (int j = currentIndex + 1; j < size_y; ++j) {
				if (matrix[i][j] < tmp) {
					pos = j;
					tmp = matrix[i][j];
				}
			}
			matrix[i][pos] = matrix[i][currentIndex];
			matrix[i][currentIndex] = tmp;
		}
	}
}


void InsertSort(int** matrix, int size) {
	int n, tmp;
	for (int i = 0; i < size; ++i) {
		for (int currentIndex = 1; currentIndex < size; ++currentIndex) {
			n = currentIndex;
			while (n > 0 && matrix[i][n - 1] > matrix[i][n]) {
				tmp = matrix[i][n - 1];
				matrix[i][n - 1] = matrix[i][n];
				matrix[i][n] = tmp;
				n -= 1;
			}
		}
	}
}

void InsertSort(int** matrix, int size_x, int size_y) {
	int n, tmp;
	for (int i = 0; i < size_x; ++i) {
		for (int currentIndex = 1; currentIndex < size_y; ++currentIndex) {
			n = currentIndex;
			while (n > 0 && matrix[i][n - 1] > matrix[i][n]) {
				tmp = matrix[i][n - 1];
				matrix[i][n - 1] = matrix[i][n];
				matrix[i][n] = tmp;
				n -= 1;
			}
		}
	}
}


void BubbleSort(int** matrix, int size) {
	int tmp;
	for (int i = 0; i < size; ++i) {
		for (int j = size - 1; j >= 0; --j) {
			for (int currentIndex = 0; currentIndex < j; ++currentIndex) {
				if (matrix[i][currentIndex] > matrix[i][currentIndex + 1]) {
					tmp = matrix[i][currentIndex];
					matrix[i][currentIndex] = matrix[i][currentIndex + 1];
					matrix[i][currentIndex + 1] = tmp;
				}
			}
		}
	}
}

void BubbleSort(int** matrix, int size_x, int size_y) {
	int tmp;
	for (int i = 0; i < size_x; ++i) {
		for (int j = size_y - 1; j >= 0; --j) {
			for (int currentIndex = 0; currentIndex < j; ++currentIndex) {
				if (matrix[i][currentIndex] > matrix[i][currentIndex + 1]) {
					tmp = matrix[i][currentIndex];
					matrix[i][currentIndex] = matrix[i][currentIndex + 1];
					matrix[i][currentIndex + 1] = tmp;
				}
			}
		}
	}
}

//void ShellSort(int** matrix, int size) {
//	int tmp;
//	for (int k = 0; k < size; ++k) {
//
//
//		for (int gap = size / 2; gap > 0; gap /= 2) {
//			for (int i = gap; i < size; i += 1) {
//
//			}
//		}
//
//
//	}
//
//}