#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "ingresar un numero" << endl;
    cin >> N;

    if (N>10)
    {
        cout << N << " Es mayor a diez" << endl;
    }

    else
    {
        cout << N<< " No es mayor a diez" << endl;
    }

    return 0;
}
