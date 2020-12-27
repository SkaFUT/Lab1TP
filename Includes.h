#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <cmath>
using namespace std;


int main();
void Menu();

void Seminar5();
void FileCreater(char path[64]);
void CheckFile(int chouse, char path[64]);

void Seminar4();
int ZeroCounter(int ROW,int COL,int **Array2D);
void OutRowsWithoutZero(int i, int COL, int** Array2D);
int FindMaxElement(int ROW, int COL, int* Arr);
void SortArray(int ROW, int COL, int* Arr);
bool CheckMaxValue(int ROW, int COL, int* Arr);
bool CheckSizeOfArray(int ROW, int COL);

void Seminar3();
int CheckArraySize();
double SummOfElements(int size,double *Array);
void SortAnArray(double* Array, int size);
double ProizArray(int size, double* Array);