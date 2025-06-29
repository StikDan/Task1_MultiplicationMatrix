#pragma once

#define WIN32_LEAN_AND_MEAN             // Исключите редко используемые компоненты из заголовков Windows

class MatrixOperation
{
public:
	int** MultiplicateMatrixByNumber(int** sourceMatrix, int sourceRows, 
		int sourceColumns, int multiplicationNumber);
	int** createMatrix(int rows, int columns);
	void fillMatrix(int** matrix, int rows, int columns);
	void deleteMatrix(int** matrix, int rows, int columns);
	void printMatrix(int** matrix, int rows, int columns);
};

class Randomization
{
public:
	int min =0, max = 0;
	int randomInRange(int min, int max);
};