#include <iostream>
using namespace std;

int main(){
    char c;
    unsigned char cu;
    int i;
    unsigned int iu;
    short int is;
    short s;
    unsigned short int isu;
    unsigned short su;
    long int il;
    long l;
    unsigned long int ilu;
    unsigned long lu;
    float f;
    double d;
    long double dl;
    cout 
        << "\n char=" << sizeof c 
        << "\n unsigned char=" << sizeof cu 
        << "\n int=" << sizeof i
        << "\n unsigned int=" << sizeof iu
        << "\n short int=" << sizeof(int)
        << "\n short=" << sizeof(s)
        << "\n unsigned short int=" << sizeof(isu)
        << "\n unsigned short=" << sizeof(su)
        << "\n long int=" << sizeof(il)
        << "\n long=" << sizeof(l)
        << "\n unsigned long int=" << sizeof(ilu)
        << "\n unsigned long=" << sizeof(lu)
        << "\n float=" << sizeof(float)
        << "\n double=" << sizeof(d)
        << "\n long double=" << sizeof(long double)
        << endl;
    return 0;
}