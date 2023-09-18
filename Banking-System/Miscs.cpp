#include<iostream>
#include<Windows.h>
#include<ctime>
#include<time.h>
#include<iomanip>
#include"Miscs.h"

using namespace std;

void Miscs::logo()
{
    cout << "\n";
    cout << setw(69) << "--*--|---------------|" << endl;
    cout << setw(69) << "----*|---B---B---P---|" << endl;
    cout << setw(69) << "----*|---------------|" << endl;
    cout << setw(69) << "--*--|---------------|" << endl;
    cout << "\v\v\v\v";
    cout << setw(83) << "B  E  S  T   B  A  N  K   P  H  I  L  .\v\v\v\v\v";
}
void Miscs::ExitLogo()
{
    system("CLS");
    cout << "\n";
    cout << setw(69) << "--*--|---------------|" << endl;
    cout << setw(69) << "----*|---B---B---P---|" << endl;
    cout << setw(69) << "----*|---------------|" << endl;
    cout << setw(69) << "--*--|---------------|" << endl;
    cout << "\v\v\v\v\v\v" << setw(95) << "T H A N K  Y O U  F O R  U S I N G  B E S T  B A N K  P H I L .\v\v";
}
void Miscs::delay()
{
    float delay = 0.7;
    delay *= CLOCKS_PER_SEC;
    clock_t now = clock();
    while (clock() - now < delay);
    system("CLS");
}
void Miscs::cooldown()
{
    int counter = 15;
    Sleep(1000);
    while (counter >= 1)
    {
        logo();
        cout << "\rToo many attempts! Try again in:" << counter << flush;
        Sleep(1000);
        counter--;
        system("CLS");
    }
}
