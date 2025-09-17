#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

void print_arrow(int leftCol, int size)
{
  for (int i = 0; i < size; i++) { //top part of the arrow
    for(int j = 0; j < leftCol + size + i; ++j){
      putchar(' ');
    }
    putchar('#');
    putchar('\n');
  }
  
  for(int j = 0; j < leftCol; ++j){
      putchar(' ');
  }
  
  for(int j = 0; j < size + 1; ++j){
      putchar('#');
      putchar(' ');
  }
  putchar('\n');

  for (int i = size - 1; i >= 0; i--) { //bottom part of the arrow
    for(int j = 0; j < leftCol + size + i; ++j){
      putchar(' ');
    }
    putchar('#');
    putchar('\n');
  }
}
