//
//  main.cpp
//  Sum_Project
//
//  Created by Samuel Pacheco on 19/08/16.
//  Copyright © 2016 Samuel Pacheco. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    
    int iNumberOne;
    int iFinalNumber = 0;
    
    
    cin >> iNumberOne;
    
    
    if (iNumberOne > 0)
    {
        
    
    for (int i=1; i<=iNumberOne; i++)
        {
        
        iFinalNumber = iFinalNumber + i;
        
        }
        
    }
    
    else if (iNumberOne <= 1)
    {
        
        for (int u=1; u >= iNumberOne; u--)
        {
            
            iFinalNumber = iFinalNumber + u;
            
        }

        
        
    }
    
    
    cout << iFinalNumber << endl;
    
    
    return 0;
}
