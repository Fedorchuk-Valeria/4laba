#include <iostream>

using namespace std;

int main()
{
    int massiv [5][3] = {
    9, 8, 5,
    4, 7, 10,
    3, 31, 25,
    21, 26, 13,
    5, 17, 30
    };
    int i, j, maxi;
    cout << "Matriza: " << endl;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
        cout << massiv [i][j] << "\t" ;
        }
        cout << "\n";
    }
    for (i = 0; i < 5; i++)
    {
       maxi = massiv [i][0];
       for (j = 1; j < 3; j++)
       {
           if (massiv [i][j] > maxi && massiv [i][j])
           {
               maxi = massiv [i][j];
           }
       }
       cout << "Max in " << i + 1 << " row: " << maxi << endl;
    }
    return 0;
}
