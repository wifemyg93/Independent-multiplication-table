#include <iostream>

using namespace std;

const int ROWS = 4;
const int COLS = 4;

int main() 
{
    setlocale(0, "");

    int matrix[ROWS][COLS]; //Определяют размеры матрицы
    int rowSum[ROWS] = { 0 }; //Массив - матрица, а массивы rowSum и colSum используются для хранения сумм элементов в строках и столбцах
    int colSum[COLS] = { 0 };

    cout << "Введите элементы матрицы:\n";

    for (int i = 0; i < ROWS; i++) //Заполнение матрицы и вычисление сумм элементов в каждой строке и каждом столбце
    {
        for (int j = 0; j < COLS; j++) 
        {
            cin >> matrix[i][j];

            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }

    cout << "Заполненная матрица:\n";

    for (int i = 0; i < ROWS; i++) //программа выводит заполненную матрицу
    {
        for (int j = 0; j < COLS; j++) 
        {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }

    cout << "Сумма элементов в каждой строке:\n";

    for (int i = 0; i < ROWS; i++) //Суммы элементов для каждой строки
    {
        cout << "Строка " << i + 1 << ": " << rowSum[i] << endl;
    }

    cout << "Сумма элементов в каждом столбце:\n";

    for (int j = 0; j < COLS; j++) //Суммы элементов для каждого столбца
    {
        cout << "Столбец " << j + 1 << ": " << colSum[j] << endl;
    }

    return 0;
}