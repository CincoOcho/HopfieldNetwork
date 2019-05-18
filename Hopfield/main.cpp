#include <iostream>


using namespace std;

void matrixA(){





}

void aprendizaje()
{
    char opc;
    bool salir;
    salir = ((opc)=!('X'|'x'));
    int i,j;
    int matrix[13][13];

    do
    {
        cout<<"Elija una opcion a continuación\n";
        cout<<"INSERTE LA LETRA QUE DESEA OBSERVAR!!\n";
        cout<<"NO NUMEROS !!\n";
        cout<<"OPC #1.- Matriz 'A', INPUT = A-a\n";
        cout<<"OPC #2.- Matriz 'E', INPUT = E-e\n";
        cout<<"OPC #3.- Matriz 'I', INPUT = I-i\n";
        cout<<"OPC #4.- Matriz 'O', INPUT = O-o\n";
        cout<<"OPC #5.- Matriz 'U', INPUT = U-u\n";
        cout<<"OPC #6.- SALIR A MENU PRINCIPAL, INPUT = X-x\n";
        cout<<"INPUT: ";
        cin>>opc;
        system("cls");

        switch(opc)
        {

        //DIBUJA MATRIZ
        case 'a'|'A':

        matrix[0][0]=0;
        matrix[0][1]=0;
        matrix[0][2]=0;
        matrix[0][3]=0;
        matrix[0][4]=0;
        matrix[0][5]=0;
        matrix[0][6]=0;
        matrix[0][7]=0;
        matrix[0][8]=0;
        matrix[0][9]=0;
        matrix[0][10]=0;
        matrix[0][11]=0;
        matrix[0][12]=0;
        matrix[0][13]=0;

        matrix[0][0]=0;
        matrix[0][1]=0;
        matrix[0][2]=0;
        matrix[0][3]=0;
        matrix[0][4]=0;
        matrix[0][5]=0;
        matrix[0][6]=0;
        matrix[0][7]=0;
        matrix[0][8]=0;
        matrix[0][9]=0;
        matrix[0][10]=0;
        matrix[0][11]=0;
        matrix[0][12]=0;
        matrix[0][13]=0;

        for(i=0;i<12;i+++){
                cout<<
            for(j=0;j<12;j++){

            }
        }
            break;
        case 'e'|'E':
            break;
        case 'i'|'I':
            break;
        case 'o'|'O':
            break;
        case 'u'|'U':
            break;
        case 'x'|'X':
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


void matrixFull()
{

    int i;
    for(i=0; i<9; i++)
    {

        cout<<"Text....";
    }
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

            break;
        case 3:
            break;
        case 4:
            cout<<"Saliendo..";
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
