// MatrixLib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "matrix.h"
#include <iostream>

// TODO: Функции
int** MatrixOperation::MultiplicateMatrixByNumber(int** sourceMatrix, int sourceRows, int sourceColumns, int multiplicationNumber)
{
	if(sourceColumns <= 0 || sourceRows <= 0 || sourceMatrix == nullptr)
		return nullptr;

	int** newMatrix = createMatrix(sourceRows, sourceColumns);

	for (int i = 0; i < sourceRows; i++)
	{
		for (int j = 0; j < sourceColumns; j++)
		{
			newMatrix[i][j] = sourceMatrix[i][j] * multiplicationNumber;
		}
	}

	return newMatrix;
}

int** MatrixOperation::createMatrix(int rows, int columns)
{
	int** matrix{ new int* [rows] {} };

	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int [columns];
	}

	return matrix;
}

void MatrixOperation::deleteMatrix(int** matrix, int rows, int columns)
{
	if (matrix == nullptr)
		return;

	for (int i = 0; i < rows; ++i)
	{
		delete matrix[i];
	}

	delete[] matrix;
	matrix = nullptr;
}

void MatrixOperation::printMatrix(int** matrix, int rows, int columns)
{
	if (matrix == nullptr)
		return;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << matrix[i][j] << '\t';
		}
		std::cout << std::endl;
	}
}

void MatrixOperation::fillMatrix(int** matrix, int rows, int columns)
{
	if (matrix == nullptr)
		return;

	Randomization random;

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			matrix[i][j] = random.randomInRange(1,10);
		}
	}
}

int Randomization::randomInRange(int min, int max)
{
	return min + std::rand() % (max - min);
}
