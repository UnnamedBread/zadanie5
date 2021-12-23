#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    char* S = new char[256];
    cin >> S;
    int sum = 0;
    int k = 1;
    int p = 0;
    int i=0;
    S[strlen(S)] = '+';

    


    for (i = 0; i < strlen(S); i++) {
        if (k == 1) {
            p = atoi(&S[i]);
            k = 0;
            sum = sum + p;
            p = 0;
        }
        if (S[i] == '+') {
            k = 1;
        }
       
    }

    cout << sum;
    delete[] S;
    return(0);
}

