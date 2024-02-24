#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int nacimiento, actual;
    time_t ahora = time(0);
    tm* local = localtime(&ahora);
    actual = 1900 + local->tm_year;
    cout << "Ingrese su año de nacimiento: ";
    cin >> nacimiento;
    if (nacimiento > 1900 && nacimiento < actual)
        cout << "año de nacimiento valido " << endl;
    else
        cout << "año de nacimiento invalido " << endl;
    return 0;
}
