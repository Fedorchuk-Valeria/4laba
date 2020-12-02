#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int N, M, i, j, k, a, b;
    cout << "Enter the number of lines(<=100): ";
    cin >> N;
    cout << "Enter the number of columns(<=100): ";
    cin >> M;
    srand (time(0));
    int **matrizaA = new int* [N];
    for (i = 0; i < N; i++)
    {
        matrizaA[i] = new int [M];
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
            {
            matrizaA [i][j] = rand () % 100 - 30;
            }
    }
    cout << "A:" << endl;
     for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            cout << matrizaA[i][j] << "\t";
        }
            cout << endl;
    }
    cout << endl;
    cout << "B:" << endl;
    for (i = 0; i < N; i++)
    {
        for (a = 0; a < M; a++)
    { for (b = M - 1; b >= a; b--)
    {
        { if (b != a){
        if (matrizaA[i][a] == matrizaA[i][b])
        {
            cout << matrizaA[i][a] << "\t";
        }
         }
    }
    }
    }cout << endl;}

    for (i = 0; i < N; i++)
        delete [] matrizaA[i];
        delete [] matrizaA;
        matrizaA = nullptr;

    return 0;
}
