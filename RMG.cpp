// RMG.cpp : RMG - Random Matrix Generator. Этот файл содержит реализацию функций для рандомных матриц.

#include <iostream>
#include <random>


void MatrixOut(int** matrix, short size) {
	for (short i = 0; i < size; i++) {
		for (short j = 0; j < size; j++) {
			std::cout << matrix[i][j] << ' ';
		}
		std::cout << std::endl;
	}
}

void MatrixOut(int** matrix, short size_x, short size_y) {
	for (short i = 0; i < size_x; i++) {
		for (short j = 0; j < size_y; j++) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}


// Параметры по умолчанию
constexpr short m = 50;
constexpr short n = 50;
constexpr short min_limit = -250;
constexpr short max_limit = 1013;

int** GetRandomDualMatrix() {
	int** matrix = new int* [m];
	for (short i = 0; i < m; i++) matrix[i] = new int [n]; 

	std::random_device random_device;
	std::mt19937 generator(random_device());
	std::uniform_int_distribution<> distribution(min_limit, max_limit);
	for (short i = 0; i < m; i++) {
		for (short j = 0; j < n; j++) {
			matrix[i][j] = distribution(generator);
		}
	}
	return matrix;
}

int** GetRandomDualMatrix(short size) {
	int** matrix = new int* [size];
	for (short i = 0; i < size; i++) matrix[i] = new int[size];

	std::random_device random_device;
	std::mt19937 generator(random_device());
	std::uniform_int_distribution<> distribution(min_limit, max_limit);
	for (short i = 0; i < size; i++) {
		for (short j = 0; j < size; j++) {
			matrix[i][j] = distribution(generator);
		}
	}
	return matrix;
}

int** GetRandomDualMatrix(short size_x, short size_y) {
	int** matrix = new int* [size_x];
	for (short i = 0; i < size_x; i++) matrix[i] = new int[size_y];

	std::random_device random_device;
	std::mt19937 generator(random_device());
	std::uniform_int_distribution<> distribution(min_limit, max_limit);
	for (short i = 0; i < size_x; i++) {
		for (short j = 0; j < size_y; j++) {
			matrix[i][j] = distribution(generator);
		}
	}
	return matrix;
}

int** GetRandomDualMatrix(short size_x, short size_y, short max_limit) {
	int** matrix = new int* [size_x];
	for (short i = 0; i < size_x; i++) matrix[i] = new int[size_y];

	std::random_device random_device;
	std::mt19937 generator(random_device());
	std::uniform_int_distribution<> distribution(0, max_limit);
	for (short i = 0; i < size_x; i++) {
		for (short j = 0; j < size_y; j++) {
			matrix[i][j] = distribution(generator);
		}
	}
	return matrix;
}

int** GetRandomDualMatrix(short size_x, short size_y, short min_limit, short max_limit) {
	int** matrix = new int* [size_x];
	for (short i = 0; i < size_x; i++) matrix[i] = new int[size_y];

	std::random_device random_device;
	std::mt19937 generator(random_device());
	std::uniform_int_distribution<> distribution(min_limit, max_limit);
	for (short i = 0; i < size_x; i++) {
		for (short j = 0; j < size_y; j++) {
			matrix[i][j] = distribution(generator);
		}
	}
	return matrix;
}