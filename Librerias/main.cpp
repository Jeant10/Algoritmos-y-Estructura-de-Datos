#include <iostream>
#include "lista.h"
#include "lista2.h"

using namespace quicksort;

int main()
{
    int A[N];
    ofstream archivo;
    archivo.open("quicksort.txt", ios::out);
    cout<<"ALGORITMO: QuickSort"<<endl;
    archivo<<"ALGORITMO: QuickSort"<<endl;

    cout<<"INGRESE 10 ELEMENTOS AL ARREGLO :"<<endl;
    quicksort::ingresar(A,N);

    cout<<"Elementos originales"<<endl;
    archivo<<"Elementos originales"<<endl;

    for(int i=0;i<N;i++)
    {
        cout<<"["<<A[i]<<"]";
        archivo<<"["<<A[i]<<"]";
    }

    cout<<"\nElementos ordenados"<<endl;
    archivo<<"\nElementos ordenados"<<endl;
    quicksort::ordenar(A,0,N-1);

    for(int i=0;i<N;i++)
    {
      cout<<"["<<A[i]<<"]";
      archivo<<"["<<A[i]<<"]";
    }

    archivo.close();
    return 0;
}

