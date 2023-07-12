#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
    
    float precio=0,preciofinal=0,Iva=75;
    cout<<"El precio del juego es:";
    cin>>precio;
    preciofinal=(precio*Iva)/100+precio;
    cout<<"El precio del juego mas los impuestos es:"<<preciofinal;
    
    
    
    
    
    
    
    return 0;
}

