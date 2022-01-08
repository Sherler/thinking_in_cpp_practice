#include<iostream>
using namespace std;

void pass_by_pointer(string* str_p){

    *str_p = "modified through potinter.";
}

void pass_by_refer(string &str_r){
    str_r = "modified through reference.";
}

int main(){
    string origin = "this is origin string";
    cout << origin << endl;
    pass_by_pointer(&origin);
    cout << origin << endl;
    pass_by_refer(origin);
    cout << origin << endl;
}
