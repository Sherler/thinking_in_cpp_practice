#include<iostream>
using namespace std;

void if_else(){
    int i;
    cout << "type a number and press 'Enter' " << endl;
    cin >> i;
    if( i > 5){
        cout << "It's greater than five. " << endl;
    }else{
        if (i<5){
            cout << "It's less than five." << endl;
        }else{
            cout << "It's equal to five" << endl;
        }
    }
    cout << "Type a number and press 'Enter'. " << endl;
    cin >> i;
    if(i < 10){
        if( i > 5){
            cout << "5 < i <10" << endl;
        }else{
            cout << "i <= 5" << endl;
        }
    }else
        cout << "i >= 10" <<endl;
}

//control looping
void while_func(){
    int secret = 15;
    int guess = 0;
    while (guess != secret){
        cout << "guess the number" << endl;
        cin >> guess;
    }
    cout << "Bingo you guessed it !";
}

void do_while_example(){
    int secret = 10;
    int guess = 0;
    do {
        cout << "guess the number "<<endl ;
        cin >> guess;
    }while( secret != guess);
    cout << "You guessed it!" <<endl ;
}

void for_example(){
    for (int i = 0; i < 128; i++){
        if (i != 26)
            cout << "value: "<< i 
                 << " character: "
                 << char(i)
                 << endl;
    }
}

void goto_example(){
    long val = 0 ;
    for(int i = 1; i < 1000; i++){
        for (int j = 1; j<100; j++){
            val = i*j;
            if(val > 47000)
                goto bottom;
        }
    }
    bottom:
    cout << val << endl;
}

int main(){
    // if_else();
    // while_func();
    // do_while_example();
    // for_example();
    goto_example();
} ///:~