/*
@matrixlib.h
@Dinamik iki ve tek boyutlu matrislerlerin fonksiyon prototipleri
@1. Proje
@07/12/2022
@Şerafettin Doruk SEZER/ sdoruksezer@gmail.com
*/
#ifndef BLM19204_MATRIXLIB_H
#define BLM19204_MATRIXLIB_H

float *returnVector(int size);

void printVector(float *dizi,int n);

float **returnMatrix(int row, int col);

void  printMatrix(float **dizi,int row, int col);

void freeMatrix(float **mat, int row);

float mean(const float *vec, int size);

float covariance(float *vec1, float *vec2, int size);

float correlation(float *vec, float *vec2, int size);

float **matrixTranspose(float **mat, int row, int col);

float *rowMeans(float **mat, int row, int col);

float *columnMeans(float **mat, int row, int col);

float **matrixMultiplication(float **mat1, float **mat2, int row1, int col1, int row2, int col2);

float determinant(float **mat, int row);

float **covarianceMatrix(float **mat, int row, int col);



#endif //BLM19204_MATRIXLIB_H
