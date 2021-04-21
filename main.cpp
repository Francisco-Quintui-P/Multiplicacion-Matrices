#include <iostream>
#include <vector>

using namespace std;

vector<vector<double>> ConstruirMatriz(int nFilas, int nColumnas)
{
    vector<vector<double>> v(nFilas,vector<double>(nColumnas, 0));
    return v;
}

void LeerMatriz(vector<vector<double>>& Matriz)//Paso por parametro matriz como una referencia para que pueda ser modificado en el interior
{
    for(size_t f = 0; f<Matriz.size(); ++f)
    {
        for(size_t c = 0; c<Matriz[f].size(); ++c)
        {
            cout<< "Matriz["<<f<<"]["<<c<<"]:";
            cin >> Matriz[f][c];//le asigno valores a la posicion en (c,f) de la matriz
        }
        cout << endl;
    }
}
void MostrarMatriz(vector<vector<double>>& Matriz)//muestro la matriz con sus nuevos valores
{
    for(auto p : Matriz)
    {
        for(auto s : p)
        {
            cout << s;
        }
        cout<<endl;
    }
}

int main()
{
    int filas, columnas;
    cout << "N filas: "; cin>> filas;
    cout << "N columnas: "; cin>> columnas;
    vector<vector<double>> Matriz = ConstruirMatriz(filas, columnas);//asigno a la variable matriz del tipo vector<vector>
    //el valor que me trae la función ConstuirMatriz con los parametros dados
    LeerMatriz(Matriz);
    MostrarMatriz(Matriz);

    return 0;
}
