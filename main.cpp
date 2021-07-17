#include <iostream>
#include <vector>

using namespace std;



vector<vector<double>> ConstruirMatriz(double nFilas, double nColumnas){
    return vector<vector<double>>(nFilas, vector<double>(nColumnas, 0));
}

void AsignarValores(vector<vector<double>>& M, string Matriz){
    for(int f = 0; f<M.size(); f++){
        for(int c = 0; c<M[f].size(); c++){
            cout<<Matriz<<"["<<f<<"]["<<c<<"]";
            cin >> M[f][c];
        }
    }
}

vector<vector<double>> MultiplicarMatrices(vector<vector<double>>& mA, vector<vector<double>>& mB, double N, double M, double P){
    vector<vector<double>> result = ConstruirMatriz(N, M);

    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++)  {
            for (int k=0; k<P; k++){
                result[i][j] += mA[i][k] * mB[k][j];
            }
        }
    }
    return result;
}


void MostrarMatriz(vector<vector<double>>& MatrizResultado){
    for(auto f : MatrizResultado){
        for(auto c : f){
            cout<<c<<" ";
        }cout<<"\n";
    }
}

int main()
{
    double filasA, columnasA, filasB, columnasB;
    cout << "N filas Matriz A: "; cin>> filasA;
    cout << "N columnas Matriz A: "; cin>> columnasA;
    vector<vector<double>> MatrizA = ConstruirMatriz(filasA, columnasA);

    cout << "N filas Matriz B: "; cin>> filasB;
    cout << "N columnas Matriz B: "; cin>> columnasB;
    vector<vector<double>> MatrizB = ConstruirMatriz(filasB, columnasB);
    
    if(columnasA == filasB){
        AsignarValores(MatrizA, "MatrizA");
        cout<<"\n";
        AsignarValores(MatrizB, "MatrizB");
        cout<<"\n";
        vector<vector<double>> a = MultiplicarMatrices(MatrizA, MatrizB, filasA, columnasB, filasB);
        MostrarMatriz(a);

    }else{
        cout<<"No es posible multiplicar las matrices";
        return 0;
    }
    
    
    return 0;
}
