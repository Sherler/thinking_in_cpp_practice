#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    string in;
    while (true){
        cin >> in;
	int type=0;
	int a = atoi(in.c_str()); 
        if(a%3==0){
	    type = a%3+1;
	}else{
	    type = a%3+2;
	}
        int should_end = false;
	switch(type%3){
	    case 0:
		cout << "target is hit! program ending..."<<endl;
		should_end = true;
	        break;
	    case 1:
		cout << "miss target" << endl;
		break;
	    default:
		cout << type << endl;
	}
	if(should_end){
	    break;
	}
    }
    return 0;
}
