#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int change(char* S1, char* S2) {
    int t = -1;
    for (int i = 0; i < strlen(S1); i++) {
        if (S1[i] == '.')
            t = i;
    }
    if (t == -1) {
        t = strlen(S1);
    }
    for (int i = 0; i < strlen(S2); i++) {
        S1[t] = S2[i];
        t++;
    }
    S1[t] = '\0';
    return(1);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    char* S1 = new char[256];
    cin >> S1;
    char* S2 = new char[256];
    cin >> S2;
    change(S1, S2);
    cout << S1;

    delete[] S1;
    delete[] S2;
    return(0);
}