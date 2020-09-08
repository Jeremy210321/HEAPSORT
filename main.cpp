#include <iostream>
#include <fstream>
using namespace std;
void heapSort(int b[], int n);
void imprimir(int b[], int n);
void ingresar(int b[], int n);
int A[100],n;

ofstream archivo;
int main()
{
	archivo.open( "heapsort.txt", fstream::out);
	
	cout<<"Ingrese la cantidad de elementos: ";cin>>n;
	ingresar(A, n);
	archivo<<"El arreglo orginal: "<<endl;
	imprimir(A, n);
	archivo<<endl;
	heapSort(A,n);
	archivo<<"\t\tUtilizando ALGORITMO DE ORDENAMIENTO HEAPSORT"<<endl;
	archivo<<"El arreglo ordenado: "<<endl;
	imprimir(A, n);
	archivo.close();
}
void heapSort(int b[], int n)
{
	int valor, temp, a;

    for( int i = n; i> 0 ; i--)
    {
        for ( int j = 1 ; j <= i; j ++)
        {
            valor = b [j];
            a = j / 2 ;
            while (a> 0 && b [a] <valor)
            {
                b [j] = b [a];
                j = a;
                a = a / 2 ;
            }
            b [j] = valor;
        }
        temp = b [ 1 ];
        b [ 1 ] = b [i];
        b [i] = temp;
    }
}
void ingresar(int b[], int n)
{
  for(int i=1 ; i<=n;i++)
	{
		cin>>b[i];
	}
}
void imprimir(int b[], int n)
{
  for(int i=1;i<=n;i++)
	{
		archivo<<"["<<A[i]<<"]";
	}
}