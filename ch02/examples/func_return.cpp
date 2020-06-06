#include <iostream>
#include <vector>
using namespace std;

char cfunc(int i ){
    if (i==0){
        return 'a';
    }else 
    {
        return 'v';
    }
}

int main(){
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    
    cout << "type an integer: ";
    int val;
    cin >> val;
    cout << cfunc(val) << endl;
}
