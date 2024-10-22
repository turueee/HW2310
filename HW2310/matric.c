/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void create_matrix(int* columns, int* strings, int*** matrix)
{
  scanf("%d %d", columns, strings);
  (**matrix) = (int**)malloc(sizeof(int*) * *columns);
  for (int counter = 0; counter < strings; counter++)
  {
    (*matrix)[counter] = (int*)malloc(sizeof(int) * *strings);
  }

  for (int counter1 = 0; counter1 < columns; counter1++)
  {
    for (int counter2 = 0; counter2 < strings; counter2++)
    {
      (*matrix)[counter1][counter2] = 0;
    }
  }

  for (int counter1 = 0; counter1 < columns; counter1++)
  {
    for (int counter2 = 0; counter2 < strings; counter2++)
    {
      printf("%d\t", (matrix)[counter1][counter2]);
    }
  }
}

void free_matrix(int* columns, int** matrix)
{
  for (int counter = 0; counter < columns; counter++)
    free(*matrix[counter]);
  free(matrix);
}

int main()
{
  int columns, strings;
  int** matrix;
  create_matrix(&columns, &strings, &matrix);
  free_matrix(columns,matrix);
}
*/