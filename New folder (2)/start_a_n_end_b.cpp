// Design a Finite Automata (FA) that accepts language L2, over S= {a, b} where L2= a(a+b)*b. Write
// a program to simulate this FA.

#include<iostream>
using namespace std;


void state1(string w, int i);
void state2(string w, int i);
void state3(string w, int i);


void state1(string w, int i){
    cout<<"state1"<<endl;
    if(w.length()==i){
        cout<<"String is rejected";
    }
    else{
        if(w[i]=='a'){
            state2(w,i+1);
        }
        if(w[i]=='b'){
            cout<<"String is Rejected";
        }
    }
}


void state2(string w, int i){
    cout<<"state2"<<endl;
    if(w.length()==i){
        cout<<"String is rejected";
    }
    else{
        if(w[i]=='a'){
            state2(w,i+1);
        }
        if(w[i]=='b'){
            state3(w,i+1);
        }
    }
}


void state3(string w, int i){
    cout<<"state3"<<endl;
    if(w.length()==i){
        cout<<"String is Accepted";
    }
    else{
        if(w[i]=='b'){
            state3(w,i+1);
        }
        if(w[i]=='a'){
            state2(w,i+1);
        }
    }
}


int main(){
    string w;
    cout<<"Enter String: ";
    cin>>w;


    state1(w,0);
}
