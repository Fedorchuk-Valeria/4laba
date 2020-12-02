#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int N, M, i, j, s, S, a, b, t;
    cout << "Enter the number of lines: ";
    cin >> N;
    cout << "Enter the number of columns: ";
    cin >> M;
    srand (time(0));
    int **matriza = new int* [N];
    for (i = 0; i < N; i++)
    {
        matriza[i] = new int [M];
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
            {
            matriza [i][j] = rand () % 100 - 30;
            }
    }
     for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            cout << matriza[i][j] << "\t";
        }
            cout << endl;
    }

    cout << endl;
     for (a = 1; a < N; a++)
    {
        for (b = N - 1; b >= a; b--)
        {   i = b;
            s = 0;
            S = 0;
            for (j = 0; j < M; j++)
            { if (matriza[i][j] > 0 && matriza[i][j] % 2 == 0)
            {
                s += matriza[i][j];
            } if (matriza[i-1][j] > 0 && matriza[i-1][j] % 2 == 0)
            {
                S += matriza[i-1][j];} }
                if (s < S)
                { for (j = 0; j < M; j++)
                {
                    t = matriza[i][j];
                    matriza[i][j] = matriza[i-1][j];
                    matriza[i-1][j] = t; }
                }
            }
        }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            cout << matriza[i][j] << "\t";
        }
            cout << endl;
    }



    for (i = 0; i < N; i++)
        delete [] matriza[i];
        delete [] matriza;
        matriza = nullptr;
    return 0;
}
