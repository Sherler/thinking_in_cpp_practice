#include<iostream>
using namespace std;

void func(){
    static int i = 0;
    cout << "i = " << i++ << endl;
}

int main(){
    for (int i = 0; i<10; i++){
        func(); 
    }
}  