#include<iostream>
#include<string.h>
#include<iomanip>
#include<ctime>
#include<time.h>
#include<cmath>
#include<Windows.h>
#include"Bank_info.h"


using namespace std;

void logo()
{
    cout << "\n";
    cout << setw(69) << "--*--|---------------|" << endl;
    cout << setw(69) << "----*|---B---B---P---|" << endl;
    cout << setw(69) << "----*|---------------|" << endl;
    cout << setw(69) << "--*--|---------------|" << endl;
    cout << "\v\v\v\v";
    cout << setw(83) << "B  E  S  T   B  A  N  K   P  H  I  L  .\v\v\v\v\v";
}
void ExitLogo()
{
    system("CLS");
    cout << "\n";
    cout << setw(69) << "--*--|---------------|" << endl;
    cout << setw(69) << "----*|---B---B---P---|" << endl;
    cout << setw(69) << "----*|---------------|" << endl;
    cout << setw(69) << "--*--|---------------|" << endl;
    cout << "\v\v\v\v\v\v" << setw(95) << "T H A N K  Y O U  F O R  U S I N G  B E S T  B A N K  P H I L .\v\v";
}
void delay()
{
    float delay = 0.7;
    delay *= CLOCKS_PER_SEC;
    clock_t now = clock();
    while (clock() - now < delay);
    system("CLS");
}
void cooldown()
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


Bank_info bankAccess;

int accNumber = 12345;
int pass = 102938;
int main()
{
    do
    {


        cout << "Enter Account Number: ";
        // cin >> accNumber;
        cout << "Enter Pin: ";
        // cin >> pass;
        while (true)
        {
            bankAccess.accountAccess(accNumber, pass);
        }

    } while (true);

}
/*
* What i left:
* we were working on fixing the computation of our withdrawal.
* after everytime we withdraw, the balance amount doesnt change when we balance inquiry.
*/



