#include <iostream>


using namespace std;
char matrix1[7][7];
int matrix2[7][7];
void matrixA()
{
    for(int x=0; x<=6; x++)
    {
        for(int y=0; y<=6; y++)
        {
            matrix1[x][y]=0;
        }
    }
//---------------------------------------
    matrix1[0][3]=1;
    matrix1[1][2]=1;
    matrix1[1][4]=1;
    matrix1[2][1]=1;
    matrix1[2][5]=1;
    matrix1[3][0]=1;
    matrix1[3][6]=1;
    matrix1[4][0]=1;
    matrix1[4][1]=1;
    matrix1[4][2]=1;
    matrix1[4][3]=1;
    matrix1[4][4]=1;
    matrix1[4][5]=1;
    matrix1[4][6]=1;
    matrix1[5][0]=1;
    matrix1[5][6]=1;
    matrix1[6][0]=1;
    matrix1[6][6]=1;

    cout<<"imprimiendo valor de A\n"<<endl;

    for(int x=0; x<7; x++)
    {
        for(int y=0; y<7; y++)
        {
            cout<<matrix1[x][y]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    system("pause");
    system("cls");


}
void matrixE()
{
    for(int x=0; x<=6; x++)
    {
        for(int y=0; y<=6; y++)
        {
            matrix1[x][y]=0;
        }
    }
//---------------------------------------
    matrix1[0][0]=1;
    matrix1[0][1]=1;
    matrix1[0][2]=1;
    matrix1[0][3]=1;
    matrix1[0][4]=1;
    matrix1[0][5]=1;
    matrix1[0][6]=1;
    matrix1[1][0]=1;
    matrix1[2][0]=1;
    matrix1[3][0]=1;
    matrix1[3][1]=1;
    matrix1[3][2]=1;
    matrix1[3][3]=1;
    matrix1[3][4]=1;
    matrix1[4][0]=1;
    matrix1[5][0]=1;
    matrix1[6][0]=1;
    matrix1[6][1]=1;
    matrix1[6][2]=1;
    matrix1[6][3]=1;
    matrix1[6][4]=1;
    matrix1[6][5]=1;
    matrix1[6][6]=1;

    cout<<"imprimiendo valor de E\n"<<endl;

    for(int x=0; x<7; x++)
    {
        for(int y=0; y<7; y++)
        {
            cout<<matrix1[x][y]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    system("pause");
    system("cls");


}

void matrixI()
{

    for(int x=0; x<=6; x++)
    {
        for(int y=0; y<=6; y++)
        {
            matrix1[x][y]=0;
        }
    }

    //---------------------------------------

    matrix1[0][1]=1;
    matrix1[0][2]=1;
    matrix1[0][3]=1;
    matrix1[0][4]=1;
    matrix1[0][5]=1;
    matrix1[1][3]=1;
    matrix1[2][3]=1;
    matrix1[3][3]=1;
    matrix1[4][3]=1;
    matrix1[5][3]=1;
    matrix1[6][1]=1;
    matrix1[6][2]=1;
    matrix1[6][3]=1;
    matrix1[6][4]=1;
    matrix1[6][5]=1;


    cout<<"imprimiendo valor de I\n"<<endl;

    for(int x=0; x<7; x++)
    {
        for(int y=0; y<7; y++)
        {
            cout<<matrix1[x][y]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    system("pause");
    system("cls");


}

void matrixO()
{


    for(int x=0; x<=6; x++)
    {
        for(int y=0; y<=6; y++)
        {
            matrix1[x][y]=0;
        }
    }

    //---------------------------------------
    matrix1[0][2]=1;
    matrix1[0][3]=1;
    matrix1[0][4]=1;
    matrix1[1][1]=1;
    matrix1[1][5]=1;
    matrix1[2][0]=1;
    matrix1[2][6]=1;
    matrix1[3][0]=1;
    matrix1[3][6]=1;
    matrix1[4][0]=1;
    matrix1[4][6]=1;
    matrix1[5][1]=1;
    matrix1[5][5]=1;
    matrix1[6][2]=1;
    matrix1[6][3]=1;
    matrix1[6][4]=1;

    cout<<"imprimiendo valor de O\n"<<endl;

    for(int x=0; x<7; x++)
    {
        for(int y=0; y<7; y++)
        {
            cout<<matrix1[x][y]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    system("pause");
    system("cls");


}

void matrixU()
{

    for(int x=0; x<=6; x++)
    {
        for(int y=0; y<=6; y++)
        {
            matrix1[x][y]=0;
        }
    }
//---------------------------------------

    matrix1[0][1]=1;
    matrix1[0][5]=1;
    matrix1[1][1]=1;
    matrix1[1][5]=1;
    matrix1[2][1]=1;
    matrix1[2][5]=1;
    matrix1[3][1]=1;
    matrix1[3][5]=1;
    matrix1[4][1]=1;
    matrix1[4][5]=1;
    matrix1[5][1]=1;
    matrix1[5][5]=1;
    matrix1[6][1]=1;
    matrix1[6][2]=1;
    matrix1[6][3]=1;
    matrix1[6][4]=1;
    matrix1[6][5]=1;


    cout<<"imprimiendo valor de U\n"<<endl;

    for(int x=0; x<7; x++)
    {
        for(int y=0; y<7; y++)
        {
            cout<<matrix1[x][y]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    system("pause");
    system("cls");

}

void aprendizaje()
{
    int opc;
    bool salir;
    salir = ((opc)=!('X'|'x'));



    do
    {
        cout<<"Elija una opcion a continuación\n";
        cout<<"OPC #1.- Matriz 'A'\n";
        cout<<"OPC #2.- Matriz 'E'\n";
        cout<<"OPC #3.- Matriz 'I'\n";
        cout<<"OPC #4.- Matriz 'O'\n";
        cout<<"OPC #5.- Matriz 'U'\n";
        cout<<"OPC #6.- SALIR A MENU PRINCIPAL\n";
        cout<<"INPUT: ";
        cin>>opc;
        system("cls");

        switch(opc)
        {
        case 1:
            matrixA();
            break;
        case 2:
            matrixE();
            break;
        case 3:
            matrixI();
            break;
        case 4:
            matrixO();
            break;
        case 5:
            matrixU();
            break;
        case 6:
            cout<<"Saliendo de muestras de aprendizaje\n";
            system("pause");
            system("cls");

            break;
        default:
            cout<<"Error inesperado intente de nuevo!!\n";
            system("pause");
            system("cls");
        }

    }
    while(salir);

}

void matrizAcumulada()
{

    matrix2[0][0]=2;
    matrix2[0][1]=1;
    matrix2[0][2]=2;
    matrix2[0][3]=3;
    matrix2[0][4]=2;
    matrix2[0][5]=1;
    matrix2[0][6]=2;

    matrix2[1][0]=2;
    matrix2[1][1]=1;
    matrix2[1][2]=1;
    matrix2[1][3]=0;
    matrix2[1][4]=1;
    matrix2[1][5]=1;
    matrix2[1][6]=1;

    matrix2[2][0]=3;
    matrix2[2][1]=1;
    matrix2[2][2]=0;
    matrix2[2][3]=0;
    matrix2[2][4]=0;
    matrix2[2][5]=1;
    matrix2[2][6]=2;

    matrix2[3][0]=4;
    matrix2[3][1]=1;
    matrix2[3][2]=1;
    matrix2[3][3]=1;
    matrix2[3][4]=1;
    matrix2[3][5]=0;
    matrix2[3][6]=3;

    matrix2[4][0]=4;
    matrix2[4][1]=1;
    matrix2[4][2]=1;
    matrix2[4][3]=1;
    matrix2[4][4]=1;
    matrix2[4][5]=1;
    matrix2[4][6]=3;

    matrix2[5][0]=3;
    matrix2[5][1]=2;
    matrix2[5][2]=0;
    matrix2[5][3]=0;
    matrix2[5][4]=0;
    matrix2[5][5]=2;
    matrix2[5][6]=2;

    matrix2[6][0]=2;
    matrix2[6][1]=2;
    matrix2[6][2]=3;
    matrix2[6][3]=3;
    matrix2[6][4]=3;
    matrix2[6][5]=2;
    matrix2[6][6]=2;

//---------------------------------------




    cout<<"\t Matriz acummulada de vocales '(a,e,i,o,u)'\n"<<endl;

    for(int x=0; x<7; x++)
    {
        for(int y=0; y<7; y++)
        {
            cout<<matrix2[x][y]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    system("pause");
    system("cls");



}





void mainMenu()
{
    int opc;
    opc=0;

    do
    {

        cout<<"Elija una opción a continuación:\n";
        cout<<"1.-Mostrar aprendizajes insertados\n";
        cout<<"2.-Ver matriz acumulada\n";
        cout<<"3.-Insertar valor a comparar\n";
        cout<<"4.-Salir\n";
        cout<<"INPUT:";
        cin>>opc;
        system("cls");

        switch(opc)
        {

        case 1:
            aprendizaje();
            break;
        case 2:
            matrizAcumulada();
            break;
        case 3:
            break;
        case 4:
            cout<<"Saliendo..\n";
            system("pause");
            system("cls");
            exit(0);

        }
    }
    while(opc!=5);
}




int main()
{
    mainMenu();
    return 0;
}
