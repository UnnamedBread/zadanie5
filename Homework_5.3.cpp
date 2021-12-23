#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
    //setlocale(LC_ALL, "Russian");
    char* S1 = new char[256];
    char* S2 = new char[256];
    char* S3 = new char[256];
    cin >> S1;
    cin >> S2;
    cin >> S3;
    cout << S2[0] << ". " << S3[0] << ". " << S1 << " " ;
    delete[] S1;
    delete[] S2;
    delete[] S3;
   
    return(0);
}