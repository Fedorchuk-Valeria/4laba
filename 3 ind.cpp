#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int N, i, j, S_gl, S_vishe, S_nije;
    cout << "Enter the order of the square matrix: ";
    cin >> N;
    srand (time(0));
    int **matriza = new int* [N];
    for (i = 0; i < N; i++)
    {
        matriza[i] = new int [N];
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            {
            matriza [i][j] = rand () % 100 - 50;
            }
    }
     for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            cout << matriza[i][j] << "\t";
        }
            cout << endl;
    }
    S_gl = 0;
    S_vishe = 0;
    S_nije = 0;
    for (i = 0; i < N; i++)
    {
        if (matriza [i][0] < 0)
            {
                for (j = 0; j < N; j++)
                {
                     if (i == j)
                     {
                     S_gl += matriza[i][j];
                     } else if (i < j)
                     {
                         S_vishe += matriza[i][j];
                     } else { S_nije += matriza[i][j];}

                }
            }
        }
            cout << endl;
            cout << "Summa na glavnoi diagonali: " << S_gl << endl;
            cout << "Summa vishe glavnoi diagonali: " << S_vishe << endl;
            cout << "Summa nije glavnoi diagonali: " << S_nije << endl ;
    for (i = 0; i < N; i++)
        delete [] matriza[i];
        delete [] matriza;
        matriza = nullptr;
    return 0;
}
