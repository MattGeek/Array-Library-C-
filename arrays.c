/* ******************************************************************* *\
 *  Copyright ©2017 Mattia D'ambrosio                                  *
 *  ALL RIGHTS RESERVED!                                               *
 *                                                                     *
 *  Version: 2.3.0.3 (20171217)                                        *
\* ******************************************************************* */

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

