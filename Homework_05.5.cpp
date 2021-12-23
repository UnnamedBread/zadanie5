#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int proverka(char* S1, char* S2) {
    int k = 0;
    int t = 0;
    for (int i = 0; i < strlen(S1); i++) {
        if (S1[i] != S2[t]) {
            t = 0;
        }
        if (S1[i] == S2[t] && t < strlen(S2)) {
            t++;
        }
        if (t == strlen(S2)) {
            k++;
            t = 0;
        }
        
    }

    return(k);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    char* S1 = new char[256];
    cin >> S1;
    char* S2 = new char[256];
    cin >> S2;
    cout << proverka(S1, S2);

    delete[] S1;
    delete[] S2;
    return(0);
}