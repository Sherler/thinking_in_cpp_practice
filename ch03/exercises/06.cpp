//: C03:YourPets2.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
#include <iostream>
using namespace std;

int dog; 
float cat;
double bird;
long int fish;

void f(int pet) {
  cout << "pet id number: " << pet << endl;
}

int main() {
  int i, j, k;
  cout << "f(): " << (long)&f << endl;
  cout << "dog: " << (long)&dog << "size of dog: "<< sizeof dog << endl;
  cout << "cat: " << (long)&cat << "size of cat: "<< sizeof cat << endl;
  cout << "bird: " << (long)&bird << "size of bird: "<< sizeof bird << endl;
  cout << "fish: " << (long)&fish << "size of fish: "<< sizeof fish << endl;
  cout << "i: " << (long)&i << endl;
  cout << "j: " << (long)&j << endl;
  cout << "k: " << (long)&k << endl;
} ///:~
