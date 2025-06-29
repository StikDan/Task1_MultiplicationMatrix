#include "pch.h"
#include "matrix.h"
#include <iostream>

MatrixOperation operation;

TEST(MatrixTests, NullptrMatrix)
{
	int rows = 2;
	int columns = 3;
	int number = 3;

	int** matrix = operation.createMatrix(rows, columns);
	int** newMatrix = operation.MultiplicateMatrixByNumber(matrix, rows, columns, number);

	if (newMatrix == nullptr)
	{
		operation.deleteMatrix(matrix, rows, columns);
		operation.deleteMatrix(newMatrix, rows, columns);
		EXPECT_TRUE(true);
	}
	else
	{
		operation.deleteMatrix(matrix, rows, columns);
		operation.deleteMatrix(newMatrix, rows, columns);
		EXPECT_FALSE(false);
	}
}

TEST(MatrixTests, NullRowsMatrix)
{
	int rows = 0;
	int columns = 3;
	int number = 3;

	int** matrix = operation.createMatrix(rows, columns);
	operation.fillMatrix(matrix, rows, columns);

	int** newMatrix = operation.MultiplicateMatrixByNumber(matrix, rows, columns, number);

	if (newMatrix == nullptr)
	{
		operation.deleteMatrix(matrix, rows, columns);
		operation.deleteMatrix(newMatrix, rows, columns);
		EXPECT_TRUE(true);
	}
	else
	{
		operation.deleteMatrix(matrix, rows, columns);
		operation.deleteMatrix(newMatrix, rows, columns);
		EXPECT_FALSE(false);
	}
}

TEST(MatrixTests, NullColumnsMatrix)
{
	int rows = 2;
	int columns = 0;
	int number = 3;

	int** matrix = operation.createMatrix(rows, columns);
	operation.fillMatrix(matrix, rows, columns);

	int** newMatrix = operation.MultiplicateMatrixByNumber(matrix, rows, columns, number);

	if (newMatrix == nullptr)
	{	
		operation.deleteMatrix(matrix, rows, columns);
		operation.deleteMatrix(newMatrix, rows, columns);
		EXPECT_TRUE(true);
	}	
	else
	{
		operation.deleteMatrix(matrix, rows, columns);
		operation.deleteMatrix(newMatrix, rows, columns);
		EXPECT_FALSE(false);
	}
		
}

TEST(MatrixTests, MultiplicationCorrect)
{
	int rows = 2;
	int columns = 3;
	int number = 3;

	int** matrix = operation.createMatrix(rows, columns);
	operation.fillMatrix(matrix, rows, columns);

	int** newMatrix = operation.MultiplicateMatrixByNumber(matrix, rows, columns, number);

	if (newMatrix != nullptr)
	{
		operation.deleteMatrix(matrix, rows, columns);
		operation.deleteMatrix(newMatrix, rows, columns);
		EXPECT_TRUE(true);
	}
	else
	{
		operation.deleteMatrix(matrix, rows, columns);
		operation.deleteMatrix(newMatrix, rows, columns);
		EXPECT_FALSE(false);
	}
}