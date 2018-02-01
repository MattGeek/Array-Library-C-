/* **************************************************************************\
 *  Copyright (C) 2018 Mattia D'ambrosio                                    *
 *  All rights reserved!                                                    *
 *                                                                          *
 *  Lincesed under the BSD 3-Clause License, (the "License").               *
 *  You may not use this file except in compliance with the License.        *
 *  You may obtain a copy of the License in the repository of this project 	*
 *  in the License file.                                                    *
 *                                                                          *
 *                                                                          *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS     *
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT       *
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS       *
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE          *
 *  COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,    *
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,    *
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS   *
 *  OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED      *
 *  AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,  *
 *  OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF   *
 *  THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH    *
 *  DAMAGE.                                                                 *
 *                                                                          *
 *  Version: 2.4 (20180201)                                               	*
\* **************************************************************************/


///Caricamento array monodimensionale da parte dell'utente
void loadArray1D(int *, int);

///Caricamento (float) array monodimensionale da parte dell'utente
void loadArray1DF(float *, int);

///(Non Pronta) Caricamento array bidimensionale da parte dell'utente
void loadArray2D(int **, int, int);

///Caricamento array monodimensionale con numeri casuali
void loadArray1DRandomly(int *, int, int, int);

///(Non Pronta) Caricamento array bidimensionale con numeri casuali
void loadArray2DRandomly(int **, int, int, int, int);

///Stampa array monodimensionale
void printArray1D(int *, int);

///Stampa (float) array monodimensionale
void printArray1DF(float *, int);

///(Non Pronta) Stampa array bidimensionale
void printArray2D(int **, int, int);

///(Non Pronta) Stampa diagonale principale matrice quadrata
void printPrimarySqMxDiagonal(int **, int, int);

///(Non Pronta) Stampa diagonale secondaria matrice quadrata
void printSecondarySqMxDiagonal(int **, int, int);

///Reset array monodimensionale a 0
void resetArray1D(int *, int);

///(Non Pronta) Reset array bidimensionale a 0
void resetArray2D(int **, int, int);

///Unisce due array monodimensionale
void merge2Arrays1D(int *, int, int *, int, int *);

///Divide un array monodimensionali in due array, uno negativo l'altro positivo
void splitArray1DPN(int*, int, int*, int*);

///Spostamento elementi verso sinistra
void shiftLeftArray1D(int *, int);

///Spostamento elementi verso destra
void shiftRightArray1D(int *, int);

///(Non Pronta) Calcolo determinante di una matrice quadrata 2x2
int sqMx2Deteminant(int **, int, int);

///Ricerca binaria (dicotomica) di un'elemento all'interno di un'array (float)
_Bool binarySearchF(float *, int, float);

///Ordinamento array monodimensionale crescente Insertion Sort
void ascendingInsertionSort(int *, int);

///Ordinamento array monodimensionale decrescente Insertion Sort
void descendingInsertionSort(int *, int);

///Ordinamento array monodimensionale crescente Bubble Sort
void ascendingBubbleSort(int *, int);

///Ordinamento array monodimensionale decrescente Bubble Sort
void descendingBubbleSort(int *, int);

///Ordinamento array monodimensionale crescente Select Sort
void ascendingSelectSort(int *, int);

///Ordinamento array monodimensionale decrescente Select Sort
void descendingSelectSort(int *, int);

///Ordinamento array (float) monodimensionale crescente Quick Sort
void ascendingQuickSortF(float *, int, int, int);

///Scambia due elementi all'interno di un'array (float)
void swapElementF (float *, int, int);
