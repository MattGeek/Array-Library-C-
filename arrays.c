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

#include "arrays.h"

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

/** \brief Caricamento di un vettore chiedendone i valori da caricare all'utente
 *
 * \param vet[] Vettore da caricare (passato per indirizzo)
 * \param size Dimensione del vettore da caricare (passato per valore)
 *
 * \return N/A E' una procedura
 **/
void loadArray1D(int vet[], int size){
    int i;
    for (i=0;i<size;i++) {
        printf("Inserisci il %d^ numero: ", i + 1);
        scanf("%d", &vet[i]);
    }
}

/** \brief Caricamento di un vettore chiedendone i valori(float) da caricare all'utente
 *
 * \param vet[] Vettore da caricare (passato per indirizzo)
 * \param size Dimensione del vettore da caricare (passato per valore)
 *
 * \return N/A E' una procedura
 **/
void loadArray1DF(float vet[], int size){
    int i;
    for (i=0;i<size;i++) {
        printf("Inserisci il %d^ numero: ", i + 1);
        scanf("%f", &vet[i]);
    }
}

/*(Non Pronta)* \brief Caricamento di una matrice chiedendone i valori da caricare all'utente
 *
 * \param mat[][] matrice da caricare (passato per indirizzo)
 * \param
 *
 * \return N/A E' una procedura
 **/
/*void loadArray2D(int mat[][nC], int size){
    int i;
    for (i=0;i<size;i++) {
        printf("Inserisci il %d^ numero della %d^ riga: ", i + 1, i);
        scanf("%d", &vet[i]);
    }
}*/

/** \brief Caricamento di un vettore con numeri generati casualmente, in un range definito dall'utente
 *
 * \param vet[] Vettore da caricare (passato per indirizzo)
 * \param size Dimensione del vettore da caricare (passato per valore)
 * \param max Numero più grande da generare (passato per valore)
 * \param min Numero più piccolo da generare (passato per valore)
 *
 * \return N/A E' una procedura
 **/
void loadArray1DRandomly(int vet[], int size, int max, int min){
    srand(time(NULL));
    int i;
    for (i=0;i<size;i++) {
        vet[i]=rand()%max+min;
    }
}

/** \brief Stampa di un vettore
 *
 * \param vet[] Vettore da stampare (passato per indirizzo)
 * \param size Dimensione del vettore da stampare (passato per valore)
 *
 * \return N/A E' una procedura
 **/
void printArray1D(int vet[], int size){
    int i;
    for(i=0;i<size;i++)
        printf("%d\t", vet[i]);
    printf("\n");

}

/** \brief Stampa di un vettore (float)
 *
 * \param vet[] Vettore da stampare (passato per indirizzo)
 * \param size Dimensione del vettore da stampare (passato per valore)
 *
 * \return N/A E' una procedura
 **/
void printArray1DF(float vet[], int size){
    int i;
    for(i=0;i<size;i++)
        printf("%.2f\t", vet[i]);
    printf("\n");

}

/** \brief Inizializza un vettore a 0
 *
 * \param vet[] Vettore da inizializzare (passato per indirizzo)
 * \param size Dimensione del vettore da inizializzare (passato per valore)
 *
 * \return N/A E' una procedura
 **/
void resetArray1D(int vet[], int size){
    int i;
    for(i=0;i<size;i++)
        vet[i]=0;
}

/** \brief Unisce due vettori
 *
 * \param vetI1[] Primo vettore da unire (passato per indirizzo)
 * \param sizeI1 Dimensione del primo vettore da unire (passato per valore)
 * \param vetI2[] Secondo vettore da unire (passato per indirizzo)
 * \param sizeI1 Dimensione del secondo vettore da unire (passato per valore)
 * \param vetO[] Vettore che conterrà l'unione dei due vettori
 *
 * \return N/A E' una procedura
 **/
void merge2Arrays1D(int vetI1[], int sizeI1, int vetI2[], int sizeI2, int vetO[]){
    int i, j;
    for (i=0; i<sizeI1; i++)
        vetO[i]=vetI1[i];
    for (j=0; j<sizeI2; j++){
        vetO[i]=vetI2[j];
        i++;
    }
}

/** \brief Divide un vettore
 *
 * \param vetI[] Vettore da dividere (passato per indirizzo)
 * \param sizeI1 Dimensione del vettore da dividere (passato per valore)
 * \param vetON[] Vettore che conterrà i numeri negativi (passato per indirizzo)
 * \param vetOP[] Vettore che conterrà i numeri positivi (passato per indirizzo)
 *
 * \return N/A E' una procedura
 **/
void splitArray1DPN(int vetI[], int size, int vetOP[], int vetON[]){
    int i, neg=0, pos=0;
    for (i=0; i<size; i++){
        if(vetI[i]<0){
            vetON[neg]=vetI[i];
            neg++;
        } else if(vetI[i]>0){
            vetOP[pos]=vetI[i];
            pos++;
        }

    }

}

/** \brief Sposta gli elementi del vettore verso sinistra
 *
 * \param vet[] Vettore con gli elementi da spostare (passato per indirizzo)
 * \param size Dimensione del vettore con gli elementi da spostare (passato per valore)
 *
 * \return N/A E' una procedura
 **/
void shiftLeftArray1D(int vet[], int size){
    int i,temp=vet[0];
    for (i=0;i<size-1;i++)
        vet[i]=vet[i+1];
    vet[size-1]=temp;
}

/** \brief Sposta gli elementi del vettore verso destra
 *
 * \param vet[] Vettore con gli elementi da spostare (passato per indirizzo)
 * \param size Dimensione del vettore con gli elementi da spostare (passato per valore)
 *
 * \return N/A E' una procedura
 **/
void shiftRightArray1D(int vet[], int size){
    int i,temp;
    for (i=0; i<size-1; i++){
        temp=vet[size-1];
        vet[size-1]=vet[i];
        vet[i]=temp;
    }
}

/** \brief Ricerca binaria (dicotomica) di un elemento (float)
 *
 * \param vet[] Vettore in cui cercare  (passato per indirizzo)
 * \param size Dimensione del vettore da ordinare (passato per valore)
 * \param e2F Elemento da cercare (passato per valore);
 *
 * \return boolean true se l'elemento ricercato è stato trovato altrimenti false
 **/
_Bool binarySearchF(float vet[], int size, float e2F){
    int first=0, last=size-1, avg=(first+last)/2;
    int t=false;
    while((first<=last) && (t==0)){
        if(e2F==vet[avg])
            t=true;
        else{
            if(e2F<vet[avg])
                last=avg-1;
            else
                first=avg+1;
            avg=(first + last)/2;
        }
    }
    return t;
}

/** \brief Ordinamento crescente di un'array sfruttando l'algoritmo: Insertion Sort
 *
 * \param vet[] Vettore da ordinare (passato per indirizzo)
 * \param size Dimensione del vettore da ordinare (passato per valore)
 *
 * \return N/A E' una procedura
 **/
void ascendingInsertionSort(int vet[], int size){
    int i,j,t;
    for (i=1;i<size;i++){
        t=vet[i];
        j=i-1;
        while(j>=0&&vet[j]>t){
            vet[j+1]=vet[j];
            j--;
        }
        vet[j+1]=t;
    }

}

/** \brief Ordinamento decrescente di un'array sfruttando l'algoritmo: Insertion Sort
 *
 * \param vet[] Vettore da ordinare (passato per indirizzo)
 * \param size Dimensione del vettore da ordinare (passato per valore)
 *
 * \return N/A E' una procedura
 **/
void descendingInsertionSort(int vet[], int size){
    int i,j,t;
    for (i=1;i<size;i++){
            t=vet[i];
            j=i-1;
            while(j>=0&&vet[j]<t){
                  vet[j+1]=vet[j];
                  j--;
                  vet[j+1]=t;
            }
      }
}

/** \brief Ordinamento crescente di un'array sfruttando l'algoritmo: Bubble Sort
 *
 * \param vet[] Vettore da ordinare (passato per indirizzo)
 * \param size Dimensione del vettore da ordinare (passato per valore)
 *
 * \return N/A E' una procedura
 **/
void ascendingBubbleSort(int vet[], int size){
    int i,t;
    bool continueToExchange;
    do{
        continueToExchange=false;
        for (i=0;i<size-1;i++)
            if(vet[i]>vet[i+1]){
                t=vet[i];
                vet[i]=vet[i+1];
                vet[i+1]=t;
                continueToExchange=true;
            }
    }while(continueToExchange);
}

/** \brief Ordinamento decrescente di un'array sfruttando l'algoritmo: Bubble Sort
 *
 * \param vet[] Vettore da ordinare (passato per indirizzo)
 * \param size Dimensione del vettore da ordinare (passato per valore)
 *
 * \return N/A E' una procedura
 **/
void descendingBubbleSort(int vet[], int size){
    int i,t;
    bool continueToExchange;
    do{
        continueToExchange=false;
        for (i=0;i<size-1;i++)
            if(vet[i]<vet[i+1]){
                t=vet[i];
                vet[i]=vet[i+1];
                vet[i+1]=t;
                continueToExchange=true;
            }
    }while(continueToExchange);
}

/** \brief Ordinamento crescente di un'array sfruttando l'algoritmo: Select Sort
 *
 * \param vet[] Vettore da ordinare (passato per indirizzo)
 * \param size Dimensione del vettore da ordinare (passato per valore)
 *
 * \return N/A E' una procedura
 **/
void ascendingSelectSort(int vet[], int size){
    int i,j,t,min;
    for (i=0;i<size-1;i++){
         min=i;
        for (j=i+1;j<size;j++)
            if (vet[j]<vet[min])
                min=j;
        if (i!=min){
            t=vet[min];
            vet[min]=vet[i];
            vet[i]=t;
        }
    }
}

/** \brief Ordinamento decrescente di un'array sfruttando l'algoritmo: Select Sort
 *
 * \param vet[] Vettore da ordinare (passato per indirizzo)
 * \param size Dimensione del vettore da ordinare (passato per valore)
 *
 * \return N/A E' una procedura
 **/
void descendingSelectSort(int vet[], int size){
   int i,j,t,max;
   for (i=0;i<size-1;i++){
         max=i;
        for (j=i+1;j<size;j++)
            if (vet[j]>vet[max])
                max=j;
        if (i!=max){
            t=vet[max];
            vet[max]=vet[i];
            vet[i]=t;
        }
    }
}

/** \brief Ordinamento crescente di un'array (float) sfruttando l'algoritmo: Quick Sort
 *
 * \param vet[] Vettore da ordinare (passato per indirizzo)
 * \param size Dimensione del vettore da ordinare (passato per valore)
 * \param low
 * \param high
 *
 * \return N/A E' una procedura
 **/
void ascendingQuickSortF(float vet[], int size, int low, int high){
   int r=high,l=low,pivot=vet[(low+high)/2];
   while (l<=r){
        while(vet[l]<pivot)
            l++;
        while(vet[r]>pivot)
            r--;
        if(l<r)
            swapElementF(vet,l,r);
        if(l<=r){
            l++;
            r--;
        }
   }

   if(low<r)
        ascendingQuickSortF(vet,size,low,r);
   if(l<high)
        ascendingQuickSortF(vet,size,l,high);
}

/** \brief Scambia due elementi all'interno di un'array float
 *
 * \param vet[] Vettore da ordinare (passato per indirizzo)
 * \param x Indice primo elemento (passato per valore)
 * \param y Indice secondo elemento (passato per valore)
 *
 * \return N/A E' una procedura
 **/
void swapElementF (float vet[], int x, int y){
  	float tmp=vet[x];
    vet[x]=vet[y];
   	vet[y]=tmp;
}

