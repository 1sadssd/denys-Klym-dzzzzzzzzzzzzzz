#include <iostream>
#include<fstream>
#include<string>
#include <Windows.h>
using namespace std;
int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int rahynok = 0;
    char bykva;
    ifstream file("text.txt");
    string word;
    
    cout << "Введіть букву : ";
    cin >> bykva;

    while (file >> word) 
    {
        if (word[0] == bykva) 
        {
            rahynok ++;
        }
    }
    file.close();

    cout << "К-сть слів що починаються на літеру  " << bykva << ": " << rahynok << endl;

    return 0;



}