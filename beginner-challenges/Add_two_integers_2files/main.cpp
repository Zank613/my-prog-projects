#include <iostream>

int readNumber(); //Forward declarations for the functions included in io.cpp file.
void writeAnswer(int a);

int main()
{
    int x { readNumber() };
    int y { readNumber() };

    writeAnswer(x+y);
    return 0;
}
