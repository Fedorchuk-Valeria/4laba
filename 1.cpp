#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int k, i, summa, kolichestvo;
    float srednee_znach;
    kolichestvo = 0;
    summa = 0;
    cout << "Enter amount of numbers:";
    cin >> k;
    cout << "Array: ";
    int p [100000];
    srand (time(0));
    for (i = 0; i < k; i++)
    {
        p [i] = rand () % 50;
        cout << p[i] << " ";
    }
    cout << "\n";
    for (i = 0; i < k; i++)
    {
        summa += p[i];
    }
    srednee_znach = summa / k;

    for (i = 0; i < k; i++)
    {
        if (p[i] <= srednee_znach + 3 && p[i] >= srednee_znach - 3)
        {
            kolichestvo++;
        }
    }
    cout << "Answer: " << kolichestvo;
    return 0;
}
