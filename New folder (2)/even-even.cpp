#include<iostream>
using namespace std;


void state1(string w, int i);
void state2(string w, int i);
void state3(string w, int i);
void state4(string w, int i);


void state1(string w, int i){
    cout<<"State 1 ->";
    if(w.length()==i){
        cout<<"String is accepted";


    }
    else{
        if(w[i]=='a'){
            state2(w,i+1);
        }
        if(w[i]=='b'){
            state4(w,i+1);
        }
    }
}


void state2(string w, int i){
    cout<<"State 2 ->";
    if(w.length()==i){
        cout<<"String is rejected";


    }
    else{
        if(w[i]=='a'){
            state1(w,i+1);
        }
        if(w[i]=='b'){
            state3(w,i+1);
        }
    }
}


void state3(string w, int i){
    cout<<"State 3 ->";
    if(w.length()==i){
        cout<<"String is rejected";


    }
    else{
        if(w[i]=='a'){
            state4(w,i+1);
        }
        if(w[i]=='b'){
            state2(w,i+1);
        }
    }
}


void state4(string w, int i){
    cout<<"State 4 ->";
    if(w.length()==i){
        cout<<"String is rejected";


    }
    else{
        if(w[i]=='a'){
            state3(w,i+1);
        }
        if(w[i]=='b'){
            state1(w,i+1);
        }
    }
}


int main(){
    string w;
    cout<<"Enter String :- ";
    cin>>w;
    state1(w,0);
}
