#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#define iz_de 23
#define sup 80
#define inf 79

using namespace std;

/*	Name: Taller 1 Estructura de Datos II
	Author: Luis Jordan
*/
void gotoxy(int x,int y)//Funcion GoToXY
{
    HANDLE hcon;
	hcon =GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon,dwPos);
}

void margen ()//Funcion para margen de la ventana
{
	for(int a=0;a<sup;a++)//linea superior
	{	gotoxy(a,0);cout<<"+"<<endl;	}
	for(int b=0;b<iz_de;b++)//linea izquierda
	{	gotoxy(0,b);cout<<"+"<<endl;	}
	for(int c=0;c<sup;c++)//linea inferior
	{	gotoxy(c,iz_de);cout<<"+"<<endl;	}
	for(int e=0;e<iz_de;e++)//linea derecha
	{	gotoxy(inf,e);cout<<"+"<<endl;	}
}
int main()
{
int dato;

	do
	{	system("cls");margen();
		gotoxy(28,2);cout<<"MENU TALLER 1 ED2"<<endl;
        gotoxy(30,3);cout<<"MENU PRINCIPAL"<<endl;
		gotoxy(28,6);cout<<"Elija una opcion:"<<endl;
		gotoxy(28,8);cout<<"1. Ciclo While."<<endl;
		gotoxy(28,9);cout<<"2. Ciclo For."<<endl;
		gotoxy(28,10);cout<<"3. Array."<<endl;
		gotoxy(28,11);cout<<"4. Switch."<<endl;
		gotoxy(28,12);cout<<"5. Matrices."<<endl;
		gotoxy(28,13);cout<<"6. Estructuras."<<endl;
		gotoxy(28,14);cout<<"0. Salir."<<endl;gotoxy(46,6);cin>>dato;
		system("cls");

		switch(dato)
		{	case 0:
				dato=0;
			break;
			case 1:
			    int d1;
                system("cls");margen();
                gotoxy(28,2);cout<<"MENU TALLER 1 ED2"<<endl;
                gotoxy(28,3);cout<<"MENU CICLO WHILE"<<endl;
                gotoxy(25,6);cout<<"Elija una opcion:"<<endl;
                gotoxy(20,8);cout<<"1. Imprimir en Pantalla los numeros del 1 al 100."<<endl;
                gotoxy(20,9);cout<<"2. Sumar los numeros del 1 al 100."<<endl;
                gotoxy(20,10);cout<<"3. Sumar los numeros pares del 1 al 50"<<endl;
                gotoxy(20,11);cout<<"4. Sumar los numeros impares del 1 al 50."<<endl;
                gotoxy(20,12);cout<<"0. atras."<<endl;gotoxy(43,6);cin>>d1;
                system("cls");

			    switch (d1)
			    {
                case 1:
                    int valor=0;
                        while (valor < 100)
                        {   valor++;cout<<valor<<" ";   }
                    break;
                case 2:
                    int v1=0,s=0;
                        while ( v1 < 100)
                        {   v1=v1+1;s=s+v1;  }
                        cout<<"La suma es " <<s<<".";
                    break;
                case 3:
                    int par=1,sp=0;
                        while(par<50)
                        {   if(par%2==0)
                            {	sp=sp+par;	}
                            par++;
                        }
                        cout<<"La Suma de los Pares es "<<sp<<".";
                    break;
                case 4:
                    int imp=1,sp=0;
                        while(imp<50)
                        {   if(imp%2==0){}
                                else{   sp=sp+imp;	}
                            imp++;
                        }
                        cout<<"La Suma de los Impares es "<<sp<<".";
                    break;
                default:
				margen();
				gotoxy(25,7);cout<<"El valor ingresado no es valido. Debe ser 0, 1, 2, 3 o 4"<<endl;
			break;
			    }

			break;
			case 2:

				break;
			case 3:

				break;
			case 4:

				break;
			case 5:

				break;
			case 6:

				break;
			default:
				margen();
				gotoxy(25,7);cout<<"El valor ingresado no es valido. Debe ser 0, 1, 2, 3, 4, 5 o 6"<<endl;
			break;
		}
		if(dato!=0)
		{getch();}
	}while(dato>0);
	system("pause");
	return 0;
}
