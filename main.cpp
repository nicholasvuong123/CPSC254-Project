/*lab4
// Luciano and Nicholas
// :)*/

#include <iostream>
#include <fstream>
#include "function.h"

using namespace std;

void reading_function()
{
    string string;
    ifstream readfile;
    readfile.open("README.md");
    while(!infile.eof)
    {
        getline(readfile, string);
        cout << string;
    }
    readfile.close();
}

int main()
{
    reading_function();
    return 0;
}