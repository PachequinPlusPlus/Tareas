//
//  main.cpp
//  Pythagorean Numbers
//
//  Created by Samuel Pacheco on 19/08/16.
//  Copyright © 2016 Samuel Pacheco. All rights reserved.
//

#include <iostream>
#include <cmath>


using namespace std;

using namespace std;

int main()
{
    int a,b,c,p;
    int n1,n2,n3,x;
    while(1)
    {
        cin>>a;
        if(a==0)break;// comprueba si el primer elemento ingresado es cero
        else cin>>b>>c;// en caso de que no sea cero ingreso los otros restantes
        
        if((a>=b)&&(b>=c))  //comparo cada elemento
        { n3=a;n2=b;n1=c;}
        
        else if((a>=c)&&(c>=b))
        { n3=a;n2=c;n1=b;}
        
        else if((b>=a)&&(a>=c))
        { n3=b;n2=a;n1=c;}
        
        else if((b>=c)&&(c>=a))
        { n3=b;n2=c;n1=a;}
        
        else if((c>=a)&&(a>=b))
        { n3=c;n2=a;n1=b;}
        
        else{ n3=c;n2=b;n1=a;}
        
        x=(pow(n1,2)+ pow(n2,2)); p=n3*n3;
        if(x==p)
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;
    }
    return 0;
    
}
