#include <iostream>
using namespace std;

int dog, cat, bird, fish;

void f(int pet){
    cout << "pet id number: " << pet << endl;
}

int main(){
    int i,j,k;
    cout << "f(): " << (long long)&f << endl;
    cout << "dog: " << (long long)&dog << endl;
    cout << "cat: " << (long long)&bird << endl;
    cout << "bird: " << (long long)&fish << endl;
    return 0;
}