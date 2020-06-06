#include<iostream>
using namespace std;

int main(){
    int q = 0;
    for(int i=0;i<100;i++){
        q++;
        
    }
    cout << "q" << q << endl;
    while( char c = cin.get() != 'q'){
        cout<<c<<endl;
    }
}