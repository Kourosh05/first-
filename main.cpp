#include <iostream>
#include <fstream>
#include "conio.h"
using namespace std;


int main(){
//    ofstream F1 ("readme.dat",ios::app);
//    if (!F1){
//        cout << "error";
//        exit(0);
//    }
    string s;
//    cin >> s;
//    F1 << s;
//    F1.close();
    ifstream F2 ("readme.dat");
    if (!F2){
       cout << "error";
       exit(0);
    }
    F2 >>s;
    while (!F2.eof()){
        cout << s;
        F2 >>s;
    }
    F2.close();
    return 0;
}

