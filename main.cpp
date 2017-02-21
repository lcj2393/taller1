#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <time.h>
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
int v,s,l,m,n,c;
int imp,par,sp,fac;
int v1[5];
float dec[4];
int matriz[4][4];

//MENU PRINCIPAL
	do//CICLO REPETIR PARA RETORNAR SIEMPRE AL MENU PRINCIPAL
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
			case 1://MENU PARA CICLOS WHILE (TERMINADO)
			    int d1;
			    do{
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
                case 0:
                        d1=0;
                    break;
                case 1://OK
                        m=5;
                        system("cls");margen();gotoxy(10,3);cout<<"Los numeros del 1 al 10 son: "<<endl;
                        v=0;
                        while (v<10)
                        {   v++;gotoxy(10,m);cout<<v<<" ";m++;   }
                    break;
                case 2://OK
                        v=0,s=0;
                        while ( v < 100)
                        {   v++;s=s+v;  }
                        system("cls");margen();gotoxy(25,10);cout<<"La suma es " <<s<<".";
                    break;
                case 3://OK
                        par=1,sp=0;
                        while(par<50)
                        {   if(par%2==0)
                            {	sp=sp+par;	}
                            par++;
                        }
                        system("cls");margen();gotoxy(25,10);cout<<"La Suma de los Pares es "<<sp<<".";
                    break;
                case 4://OK
                        imp=1,sp=0;
                        while(imp<50)
                        {   if(imp%2==0){}
                                else{   sp=sp+imp;	}
                            imp++;
                        }
                        system("cls");margen();gotoxy(25,10);cout<<"La Suma de los Impares es "<<sp<<".";
                    break;
                default:
				margen();
				gotoxy(5,7);cout<<"El valor ingresado no es valido. Debe ser 0, 1, 2, 3 o 4"<<endl;
			break;
			    }}while(d1!=0);
			break;

			case 2://MENU PARA CICLOS FOR (TERMINADO)
			    int d2;
			    do{
                system("cls");margen();
                gotoxy(28,2);cout<<"MENU TALLER 1 ED2"<<endl;
                gotoxy(30,3);cout<<"MENU CICLO FOR"<<endl;
                gotoxy(25,6);cout<<"Elija una opcion:"<<endl;
                gotoxy(10,8);cout<<"1. Imprimir en Pantalla los numeros del 1 al 100."<<endl;
                gotoxy(10,9);cout<<"2. Imprimir las tablas de multiplicar de un numero del 1 al 20."<<endl;
                gotoxy(10,10);cout<<"3. Solucionar el Factorial de un numero."<<endl;
                gotoxy(10,11);cout<<"4. Solucionar el numero de Fibonacci."<<endl;
                gotoxy(10,12);cout<<"5. Pedir al usuario 5 numeros aleatorios y alamcenarlos y "<<endl;
                gotoxy(12,13);cout<<" mostrarlos en un array."<<endl;
                gotoxy(10,14);cout<<"0. atras."<<endl;gotoxy(43,6);cin>>d2;
                system("cls");

			    switch (d2)
			    {
                case 0:
                    d2=0;
                    break;
                case 1://OK
                    m=10,n=5;
                    system("cls");margen();gotoxy(10,3);cout<<"Los numeros del 1 al 100 son: "<<endl;
                    for (v=0;v<100;v++)
                    {   gotoxy(m,n);cout<<v+1<<" ";if((v==30) or (v==60) or (v==90)){ n++;}else{m=m+2;} }
                    break;
                case 2://OK
                        system("cls");margen();gotoxy(10,4);cout<<"Digite un numero para generar tabla de multiplicar del 1 a 20."<<endl;
                        gotoxy(10,5);cout<<"Numero: "<<endl;gotoxy(18,5);cin>>n;

                        system("cls");margen();gotoxy(10,2);cout<<"La Tabla de Multiplicar de "<<n<<" es: "<<endl;
                        s=3;
                        for(v=0;v<20;v++)
                        {
                            m=(n*(v+1));
                            gotoxy(10,s);cout<<n<<"x"<<v+1<<"= "<<m;s++;
                        }
                    break;
                case 3://OK
                        system("cls");margen();gotoxy(10,4);cout<<"Digite un numero para calcular su factorial."<<endl;
                        gotoxy(10,5);cout<<"Numero: "<<endl;gotoxy(18,5);cin>>n;
                        fac=1;
                        for (v=1;v<=n;v++)
                        {   fac=v*fac;  }
                        gotoxy(10,7);cout << "El factorial de "<<n<<" es: " <<fac<<"."<<endl;

                    break;
                case 4://OK
                        s=1,m=1,c=0,l=8;
                        system("cls");margen();gotoxy(10,2);cout<<"Calculo de Serie Fibonacci"<<endl;
                        gotoxy(10,4);cout<<"Digite numero de la cadena: ";gotoxy(38,4);cin>>n;
                        gotoxy(10,6);cout<<s<<endl;gotoxy(10,7);cout<<m<<endl;
                        for(v=0;v<(n-2);v++)
                        {  c=s+m;gotoxy(10,l);cout<<c<<endl;s=m; m=c;l++;   }
                    break;
                 case 5://OK
                        l=5;
                        system("cls");margen();gotoxy(10,3);cout<<"Ingrese los 5 valores."<<endl;
                        for(v=0;v<5;v++)
                        {   gotoxy(10,l);cout<<"Valor "<<v+1<<": ";cin>>v1[v];cout;l++;   }

                        gotoxy(10,12);cout<<"Los valores ingresados fueron: "<<endl;
                        l=13;
                        for(v=0;v<5;v++)
                        {   gotoxy(10,l);cout<<"Valor "<<v+1<<"= "<<v1[v]<<endl;l++;    }
                    break;
                default:
				margen();
				gotoxy(5,7);cout<<"El valor ingresado no es valido. Debe ser 0, 1, 2, 3, 4 o 5"<<endl;
			    }}while(d2!=0);
				break;
			case 3:
                    int d3;//MENU PARA PROCESOS ARRAY(TERMINADO)
                    do{
                    system("cls");margen();
                    gotoxy(28,2);cout<<"MENU TALLER 1 ED2"<<endl;
                    gotoxy(33,3);cout<<"MENU ARRAY"<<endl;
                    gotoxy(25,6);cout<<"Elija una opcion:"<<endl;
                    gotoxy(10,8);cout<<"1. Array de numeros decimales."<<endl;
                    gotoxy(10,9);cout<<"2. Generar Array a partir de 2 valores ingresados."<<endl;
                    gotoxy(10,10);cout<<"3. Array 4x4."<<endl;
                    gotoxy(10,11);cout<<"0. atras."<<endl;gotoxy(43,6);cin>>d3;
                    system("cls");

			    switch (d3)
			    {
                case 0:
                        d3=0;
                    break;
                case 1://OK
                    l=5;
                    system("cls");margen();
                    dec[0]=32.583;
                    dec[1]=11.239;
                    dec[2]=45.781;
                    dec[3]=22.237;
                    gotoxy(10,3);cout<<"Los valores Decimales almacenados son: "<<endl;
                    for(v=0;v<4;v++)
                    {   gotoxy(10,l);cout<<v+1<<"). "<<dec[v]<<endl;l++;   }
                    break;
                case 2://OK
				    int ancho,largo;
                    system("cls");margen();gotoxy(10,3);cout<<"Digite el tamaño para la Matriz."<<endl;
                    gotoxy(10,5);cout<<"Ancho: ";cin>>ancho;cout<<endl;
                    gotoxy(10,6);cout<<"Largo: ";cin>>largo;cout<<endl;
                    s=1;
                    for(m=0;m<ancho;m++)
                    {   for(n=0;n<largo;n++)
                        {   matriz[m][n]=s;   }s=0;
                    }
                    l=10;
                    c=10;
                    gotoxy(10,8);cout<<"La matriz Generada es: "<<endl;

                    for(m=0;m<ancho;m++)
                    {   for(n=0;n<largo;n++)
                        {   gotoxy(c,l);cout<<matriz[m][n]<<" ";l++;   }cout<<endl;c=c+2;l=10;
                    }
                    break;
                case 3://OK
                   system("cls");margen();gotoxy(10,3);cout<<"Digite los valores para la Matriz."<<endl;
                   l=5;
                    for(m=0;m<4;m++)
                    {   for(n=0;n<4;n++)
                        {   gotoxy(10,l);cout<<"Pocision ("<<m<<"."<<n<<"): "; cin>>matriz[m][n];l++;   }
                    }
                    for(m=0;m<4;m++)
                    {   for(n=0;n<4;n++)
                        {   if(m==1){ s=matriz[m][n];matriz[m][n]=pow(s,2);}else
                            { if(m==2){ s=matriz[m][n];matriz[m][n]=pow(s,3);}else
                                { if(m==3){ s=matriz[m][n];matriz[m][n]=pow(s,4);}

                    }}}}
                    l=11;c=10;
                    system("cls");cout<<"La matriz ingresada es: "<<endl;

                    for(m=0;m<4;m++)
                    {   for(n=0;n<4;n++)
                        {   cout<<matriz[m][n]<<" ";l=l+4;   }cout<<endl;
                    }

                    break;

                default:
				margen();
				gotoxy(10,7);cout<<"El valor ingresado no es valido. Debe ser 0, 1, 2 o 3"<<endl;
			    }}while(d3!=0);
			case 4://MENU PARA PROCESOS CON SWITCH

                    int d4;
                    char vocal;
                    do{
                    system("cls");margen();
                    gotoxy(28,2);cout<<"MENU TALLER 1 ED2"<<endl;
                    gotoxy(30,3);cout<<"MENU SWITCH"<<endl;
                    gotoxy(25,6);cout<<"Elija una opcion:"<<endl;
                    gotoxy(10,8);cout<<"1. Consultar mes del Sistema."<<endl;
                    gotoxy(10,9);cout<<"2. Convertir Vocales a ASCCI."<<endl;
                    gotoxy(10,10);cout<<"3. Convertir numeros del 1 al 9 a ASCCI."<<endl;
                    gotoxy(10,11);cout<<"0. atras."<<endl;gotoxy(43,6);cin>>d4;
                    system("cls");

			    switch (d4)
			    {
                case 0:
                        d4=0;
                    break;
                case 1:

                    break;
                case 2://OK
                    system("cls");margen();gotoxy(10,3);cout<<"Digite la Vocal a convertir: "<<endl;gotoxy(40,3);cin>>vocal;
                    switch(vocal)
                    {
                    case 'a':
                        {   gotoxy(10,5);cout<<"ASCII: 97";   }
                        break;
                    case 'e':
                        {   gotoxy(10,5);cout<<"ASCII: 101";   }
                        break;
                    case 'i':
                        {   gotoxy(10,5);cout<<"ASCII: 105";   }
                        break;
                    case '0':
                        {   gotoxy(10,5);cout<<"ASCII: 111";   }
                        break;
                    case 'u':
                        {   gotoxy(10,5);cout<<"ASCII: 117";   }
                        break;
                    default:
                        {  margen();gotoxy(5,7);cout<<"El valor ingresado no es valido. "<<endl;  }
                        break;
                        }getch();
                        break;
                case 3://OK
                    int d4_1;
                    system("cls");margen();gotoxy(10,3);cout<<"Digite la Numero a convertir: "<<endl;gotoxy(40,3);cin>>d4_1;
                    switch(d4_1)
                    {
                    case 0:
                        {    gotoxy(10,5);cout<<"SACII: 48";    }
                        break;
                    case 1:
                        {    gotoxy(10,5);cout<<"SACII: 49";    }
                        break;
                    case 2:
                        {    gotoxy(10,5);cout<<"SACII: 50";    }
                        break;
                    case 3:
                        {    gotoxy(10,5);cout<<"SACII: 51";    }
                        break;
                    case 4:
                        {    gotoxy(10,5);cout<<"SACII: 52";    }
                        break;
                    case 5:
                        {    gotoxy(10,5);cout<<"SACII: 53";    }
                        break;
                    case 6:
                        {    gotoxy(10,5);cout<<"SACII: 54";    }
                        break;
                    case 7:
                        {    gotoxy(10,5);cout<<"SACII: 55";    }
                        break;
                    case 8:
                        {    gotoxy(10,5);cout<<"SACII: 56";    }
                        break;
                    case 9:
                        {    gotoxy(10,5);cout<<"SACII: 57";    }
                    break;
                         default:
                        margen();gotoxy(5,7);cout<<"El valor ingresado no es valido. Debe ser 0, 1, 2 o 3"<<endl;
                    }getch();
                    break;
                default:
				margen();gotoxy(5,7);cout<<"El valor ingresado no es valido. Debe ser 0, 1, 2 o 3"<<endl;
			    }}while(d4!=0);
			    break;
			case 5://MENU PARA PROCESOS DE MATRICES(TERMINADO)
                    int d5;
                    system("cls");margen();
                    gotoxy(28,2);cout<<"MENU TALLER 1 ED2"<<endl;
                    gotoxy(30,3);cout<<"MENU MATRICES"<<endl;
                    gotoxy(25,6);cout<<"Elija una opcion:"<<endl;
                    gotoxy(10,8);cout<<"1. Rellenar Matriz Manualmente"<<endl;
                    gotoxy(10,9);cout<<"2. Llenar Matriz Automaticamente.."<<endl;
                    gotoxy(10,10);cout<<"0. atras."<<endl;gotoxy(43,6);cin>>d5;
                    system("cls");

			    switch (d5)
			    {
                case 1://OK
                    system("cls");margen();gotoxy(10,3);cout<<"Digite los valores para la Matriz."<<endl;
                    l=5;c=10;
                    for(m=0;m<4;m++)
                    {   for(n=0;n<4;n++)
                        {   gotoxy(c,l);cout<<"Pocision ("<<m<<"."<<n<<"): "; cin>>matriz[m][n];l++;   }
                    }

                    system("cls");cout<<"La matriz ingresada es: "<<endl;
                    for(m=0;m<4;m++)
                    {   for(n=0;n<4;n++)
                        {   cout<<matriz[m][n]<<" ";   }cout<<endl;
                    }
                    break;
				case 2://OK
				    cout<<"La matriz generada automaticamente es: "<<endl;
                    for(m=0;m<4;m++)
                    {   for(n=0;n<4;n++)
                        { cout<<matriz[m][n]<<" <+> ";}
                        cout<<endl;
                    }
				    break;
                default:
				margen();
				gotoxy(10,7);cout<<"El valor ingresado no es valido. Debe ser 0, 1, o 2"<<endl;
			    }
			    break;
			case 6://MENU CON PROCESO STRUC

			    struct semestre
                {   float n1[3],n2[3],n3[3];
                    char nombre[3][30];
                };
                semestre estudiante;
                int nfinal[3];

                    for(m=0;m<5;m++)
                    {
                        system("cls");margen();gotoxy(24,3);gotoxy(28,3);cout<<"NOTAS ESTUDIANTES COTECNOVA"<<endl<<endl;
                        gotoxy(10,8);cout<<"Digite Nombre del Estudiante: ";gotoxy(44,8);cin.getline(estudiante.nombre[m],30);cout<<endl;

                        system("cls");margen();gotoxy(29,3);cout<<"NOTAS ESTUDIANTES COTECNOVA"<<endl<<endl;
                        gotoxy(25,6);cout<<"Estudiante "<<estudiante.nombre[m]<<endl;
                        gotoxy(25,8);cout<<"Digite Notas"<<endl;
                        gotoxy(25,10);cout<<"Nota 1: ";gotoxy(33,10);cin>>estudiante.n1[m];cout<<endl;
                        gotoxy(25,11);cout<<"Nota 2: ";gotoxy(33,11);cin>>estudiante.n2[m];cout<<endl;
                        gotoxy(25,12);cout<<"Nota 3: ";gotoxy(33,12);cin>>estudiante.n3[m];cout<<endl;
                        nfinal[m]=((estudiante.n1[m]*35)/100)+((estudiante.n2[m]*35)/100)+((estudiante.n3[m]*30)/100);
                        system("cls");
                    }

				break;
			default:
				margen();
				gotoxy(5,7);cout<<"El valor ingresado no es valido. Debe ser 0, 1, 2, 3, 4, 5 o 6"<<endl;
			break;
		}
		if(dato!=0)
		{getch();}
	}while(dato>0);
	system("pause");
	return 0;
}
