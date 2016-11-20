//
//  main.cpp
//  Godzila
//
//  Created by Samuel Pacheco on 07/09/16.
//  Copyright © 2016 Samuel Pacheco. All rights reserved.
//

#include <iostream>
using namespace std;


void Procesa() {
    
            //Funcion para leer los datos de las armadas, detectas el mayor y mostrarme quien gana
    
    int ng, nm;
    int highNG, highNM, dato;
    
    cin >> ng >> nm;
    
    highNG = 0;
    highNM = 0;
    
    for (int i = 0 ; i < ng; i++)
{
        
                //Godzila
        cin >> dato;
        
        if (dato > highNG)
        {
            highNG = dato;
        }
        
}
    for (int i = 0; i < nm; i++)
 {
        
        cin >> dato;
        
        if (dato > highNM)
            
        {
            highNM = dato;
        }
 }
    
    if (highNG >= highNM) {
        cout << "Godzilla" << endl;
    }
    
    else {
        cout << "MechaGodzilla" << endl;
    }
    
}

int main() {
    
    
    int t;
    
    cin >> t;
    
    
    for (int i = 0; i < t; i++)
    {
        
                //Ciclar cada caso
        
        
        Procesa();
        
    }
    
    return 0;
}
