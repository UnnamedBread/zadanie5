#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    char* S = new char[256];
    cin >> S;
    int i;
    for (i = 0; i <= strlen(S) / 2; i++) {
        if (S[i] != S[strlen(S) - i - 1]) {
            cout << "no";
            delete[] S;
            return(1);
        }
    }

    cout << "yes";
    delete[] S;
    return(0);
}