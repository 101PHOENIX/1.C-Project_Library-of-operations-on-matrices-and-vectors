/*
@main.c
@Dinamik iki ve tek boyutlu matrisleri çağırdığımız kısım
@1.Proje
@07/12/2022
@Şerafettin Doruk SEZER/ sdoruksezer@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrixlib.h"

// #define size 10

int main(int argc,char *argv[]){
    /*
     * Oluşturacağımız bir boyutlu bir vektörün uzunluğunu giriyoruz.
     * Sistem bir boyutlu bir vektöre random sayılar girerek, oluşturuyor ve ekranda matris şeklinde gösteriyor.
     * enson da bir boyutlu bir vektörün ortalamasını bulup, ekrana yazıyor.
     */

    float  *dizi1;
    int size;
    printf("enter the size of the one dimensional vector");
    srand(atoi(argv[1]));
    scanf("%d",&size);
    dizi1 = returnVector(size);

    printVector(dizi1,size);

    float mean1;
    mean1 = mean(dizi1,size);

    printf("Mean: %f ", mean1);

    // Bu kısımda ayırdığımız alanı sisteme geri iade ediyor.
    free(dizi1);

//**************************************

    //kullanıcıdan satır ve sütun değerlerini alıp, iki boyutlu bir vektör oluşturup, ekrana yazıyor.

 /* float **dizi2;
    int row = 0, col = 0;
    printf("enter the number of rows.");
    scanf("%d",&row);
    printf("enter the number of columns.");
    scanf("%d",&col);

    dizi2 = returnMatrix(row,col);

    printMatrix(dizi2,row,col);

    printf("\n ********************\n"); */


    // Bu kısımda iki boyutlu bir vektör için ayırdığımız alanı sisteme geri iade ediyor.

   /*
    freeMatrix(dizi2,row);
    printf("dizi2 pointer is free"); */

   // Bu kısımda iki boyutlu bir vektörün satırlarının ortalamasını
   // bir boyutlu bir vektöre atıp, sonucu ekrana yazdırıyor.

 /* printf("\n rowMeans:");

    float *rowM;

    rowM = rowMeans(dizi2,row,col);

    printVector(rowM,row);

    printf("\n ********************");

    // kullandığımız bütün alanları sisteme geri verdik.
    free(rowM);
    freeMatrix(dizi2,row); */

  // Bu kısımda iki boyutlu bir vektörün sütunlarının ortalamasını
  // bir boyutlu bir vektöre atıp, sonucu ekrana yazdırıyor.
 /*  printf("\n columnMeans:\n");

   float *colM;

   colM = columnMeans(dizi2,row,col);

  printVector(colM,col);

   // kullandığımız bütün alanları sisteme geri verdik.
    free(colM);
    freeMatrix(dizi2,row);  */

    // Bu kısımda iki boyutlu bir vektörün tarnspozesini,
    // iki boyutlu bir vektöre atıp sonucu ekrana yazdırıyor.
   /*   printf("Transpose:\n");

      float **dizi2_Transpose;

       dizi2_Transpose = matrixTranspose(dizi2,row,col);

      printMatrix(dizi2_Transpose,col,row);

      // Bu kısımda iki boyutlu bir vektör için ayırdığımız alanı sisteme geri iade ediyor.
      // kullandığımız bütün alanları sisteme geri verdik.
      freeMatrix(dizi2_Transpose,col);
      freeMatrix(dizi2,row);  */

    //*****************************************************

    // iki tane bir boyutlu vektör oluşturmak için dizi1_x'nin uzunluğunu ve
    // dizi1_y'nin uzunluğunu girip tek boyutlu vektörlerimizi oluşturup, yazdırıyoruz.

  /*  float *dizi1_x;
    float *dizi1_y;
    int size_covariance;
    int size1,size2;
    printf("enter the size of the first one-dimensional vector");
    scanf("%d",&size_covariance);
    dizi1_x = returnVector(size_covariance);
    printVector(dizi1_x,size_covariance);
    size1 = size_covariance;

    printf("\n enter the size of the second one-dimensional vector");
    scanf("%d",&size_covariance);
    dizi1_y = returnVector(size_covariance);
    printVector(dizi1_y,size_covariance);
    size2 = size_covariance;

   // oluşturduğumuz iki tane bir boyutlu vektörlerin kovaryanslarını buluyoruz.
  float cov;

    // boyutları aynı olup, olmadığını kontrol ediyoruz.
    if(size1 == size2){
        cov = covariance(dizi1_x,dizi1_y,size_covariance);
        printf(" covariance: %.18f ", cov);
    } else{
        printf("the vectors which you entered are not the same size.");
    }
    // oluşturduğumuz iki tane bir boyutlu vektörlerin korelasyonunu buluyoruz.
    printf("\n*****************************\n");
    float corr;

    // boyutları aynı olup, olmadığını kontrol ediyoruz.
    if(size1 == size2){

        corr = correlation(dizi1_x,dizi1_y,size_covariance);
        printf(" \n correlation: %.18f ", corr);

    } else{
        printf("the vectors which you entered are not the same size.");
    }
    // kullandığımız bütün alanları sisteme geri verdik.
    free(dizi1_x);
    free(dizi1_y); */

    //*******************************************
    // iki tane iki boyutlu vektör oluşturmak için dizi2_1'nin satır ve sütununu,
    // dizi2_2'nin satır ve sütun uzunluğunu girip iki boyutlu vektörlerimizi oluşturup, yazdırıyoruz.
 /*   float **dizi2_1;
    float **dizi2_2;
    int row1 = 0, col1 = 0, row2 = 0, col2 = 0;
    printf("Enter the number of rows of the 1st matrix.");
    scanf("%d",&row1);
    printf("Enter the number of columns of the 1st matrix.");
    scanf("%d",&col1);
    printf("Enter the number of rows of the 2nd matrix.");
    scanf("%d",&row2);
    printf("Enter the number of columns of the 2nd matrix.");
    scanf("%d",&col2);

    dizi2_1 = returnMatrix(row1,col1);
    printMatrix(dizi2_1,row1,col1);

    dizi2_2 = returnMatrix(row2,col2);
    printMatrix(dizi2_2,row2,col2);

    printf("\n*****************************\n");

    float **matrixM;

    matrixM = returnMatrix(col1,row2);
    printf("Before the process\n");
    printMatrix(matrixM,col1,row2);

   matrixM = matrixMultiplication(dizi2_1,dizi2_2,row1,col1,row2,col2);
    printf("After the process\n");
    printMatrix(matrixM,col1,row2);

    // kullandığımız bütün alanları sisteme geri verdik.
    freeMatrix(matrixM,col1);
    freeMatrix(dizi2_1,row1);
    freeMatrix(dizi2_2,row2); */

// *********************************************
    // iki boyutlu bir tane vektör oluşturmak için kullanıcıdan satır ve sütun değerlerini aldık
    // oluşturduğumuz vektörü ekrana yazdık.
 /* float **dizi2_deter;
    int row_deter = 0, col_deter = 0;
    printf("enter the number of row_deter.");
    scanf("%d",&row_deter);
    printf("enter the number of col_deter.");
    scanf("%d",&col_deter);

    dizi2_deter = returnMatrix(row_deter,col_deter);

    printMatrix(dizi2_deter,row_deter,col_deter);

    printf("****************************************\n");

    // İşlem yapacağımız vektör eşit satır ve sütun sayısına sahip olacağı için bunun kontrolünü yapıyoruz.
    if(row_deter == col_deter){
      // row_deter = row_deter+2;
        float deter;
    // determinant fonksiyonunu çalıştırıyoruz.
        deter = determinant(dizi2_deter,row_deter);
        printf("\n ****************************************\n");
        printf(" determinant: %f",deter);
    } else{
        printf("row_deter and col_deter are not equal");
    }
    // Aldığımız alanı geri iade ediyoruz.
    freeMatrix(dizi2_deter,row_deter);  */

 // *********************************************************
    // iki boyutlu bir tane vektör oluşturmak için kullanıcıdan satır ve sütun değerlerini aldık
    // oluşturduğumuz vektörü ekrana yazdık.
 /*   float **dizi2_covar_matrix;
    int row_covar_matris = 0, col_covar_matris = 0;
    printf("enter the number of row_deter.");
    scanf("%d",&row_covar_matris);
    printf("enter the number of col_deter.");
    scanf("%d",&col_covar_matris);

    dizi2_covar_matrix = returnMatrix(row_covar_matris,col_covar_matris);

    printMatrix(dizi2_covar_matrix,row_covar_matris,col_covar_matris);
    printf("\n covarianceMatrix:\n");

    // covarianceMatrix fonksiyonu 2 boyutlu vektör döndürdüğü için
    // 2 pointırlı dinamik bir değer oluşturduk.
    float **covarianceM;
    // covarianceMatrix fonskiyonunu çalıştırdık.
    covarianceM = covarianceMatrix(dizi2_covar_matrix,row_covar_matris,col_covar_matris);
    // sonuç matrisini yazdırdık.
    printf("\n Result:\n");
    printMatrix(covarianceM,col_covar_matris,col_covar_matris);
    // Aldığımız alanları geri iade ediyoruz.
    freeMatrix(dizi2_covar_matrix,row_covar_matris);
    freeMatrix(covarianceM,col_covar_matris); */

    return 0;
}