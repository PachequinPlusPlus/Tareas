#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int iTests;
    cin >> iTests;
    
    while (iTests--) {
        
        
        
        
        vector<string> myGrind;
        
        int myNumbeR;
        cin >> myNumbeR;
        
        for (int i=0; i<myNumbeR; i++) {
            string line;
            cin >> line;
            myGrind.push_back(line);
        }
        
        for (int i=0; i<myNumbeR; i++) {
            //Cambiar puntos y # de la primera linea
            myGrind[0][i] == '.' ? myGrind[0][i] = '1':myGrind[0][i] = '0';
            
        }
        
        for (int i=1; i<myNumbeR; i++) {
            
            for (int j=0; j<myNumbeR; j++) {
                if (j != 0) {
                    //Construir el vector viendo que tamaño de cuadro se puede hacer con cierto index
                    if (myGrind[i][j] == '.') {
                        
                        
                        
                        if (myGrind[i-1][j-1] != '0') {
                            
                            //Entonces si se hace un cuadrado
                            int iDeArriba = myGrind[i-1][j-1] - '0';
                            int k = 1;
                            
                            for (k; k<=iDeArriba; k++) {
                                
                                //Checar si el cuadrado de los lados tiene la misma medida que el de adentro
                                if (myGrind[i-k][j] != '0') {
                                    //Ok
                                }else {
                                    //Hay un 0 entonces no se puede completar el cuadro
                                    break;
                                }
                                if (myGrind[i][j-k] != '0') {
                                    //OK
                                }else {
                                    //Hay un 0 entonces no se puede completar el cuadro
                                    break;
                                }
                            }
                            myGrind[i][j] = k + '0';
                            
                        }
                        
                        else {
                            myGrind[i][j] = '1';
                            
                        }
                    }
                    else {
                        myGrind[i][j] = '0';
                    }
                    
                }
                else{
                    
                    if (myGrind[i][j] == '#') {
                        myGrind[i][j] = '0';
                    }
                    else {
                        myGrind[i][j] = '1';
                        
                    }
                    
                }
                
                
            }
        }
        
        int maxNumber=0;
        for (int i=0; i<myNumbeR; i++) {
            
            for (int j=0; j<myNumbeR; j++) {
                
                if (myGrind[i][j] - '0' > maxNumber) {
                    maxNumber = myGrind[i][j] - '0';
                }
            }
        }
        
        cout << maxNumber << endl;
        
        
        /*
            Muchos fallos
         for (int i=1; i<myNumbeR; i++) {
         for (int j=1; j<myNumbeR; j++) {
         
         while (myGrid[i][j] != 0) {
         int times=1;
         
         if (myGrid[i][j] == 1) {
         
         while (myGrid[i][j-times] == 1 && myGrid[i+1][j] == 1) {
         if (myGrid[i+times][j-times] == 1) {
         times++;
         }
         else {
         break;
         }
         
         }
         if (times>max) {
         
         max = times;
         }
         break;
         }
         
         }
         cout << max << endl;
         }
         
         }*/
    }
    return 0;
}
