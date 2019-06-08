#include <iostream>
#include <stdio.h>

using namespace std;

// Main file for Hello World project
//
// Version 1.1.0
//
int main(int argc, char *argv[])
{
int i = 0;
cout << "Welcome to my world!" << endl;

while (i < argc)
    {
    cout << argv[i] << endl;
    i++;
    } // end of while

cout << "Hello, world, again!" << endl;
} // end of main
