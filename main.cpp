#include "matrix.h"
#include <iostream>

int main()
{
	int rows = 2;
	int columns = 3;
	int number = 3;

	MatrixOperation operation;

	std::cout << "\tSOURCE MATRIX :" << '\n';
	int** matrix = operation.createMatrix(rows, columns);
	operation.fillMatrix(matrix, rows, columns);
	operation.printMatrix(matrix, rows, columns);
	
	std::cout << '\n';

	std::cout << "\tMULTIPLICATION MATRIX:" << '\n';
	int** newMatrix = operation.MultiplicateMatrixByNumber(matrix, rows, columns, number);
	operation.printMatrix(newMatrix, rows, columns);

	operation.deleteMatrix(matrix, rows, columns);
	operation.deleteMatrix(newMatrix, rows, columns);
}