#include <iostream>
using namespace std;

string sume(string numbers[], int iSize) {
    string acumulado="";
    acumulado=numbers[0];
    for (int i=1; i<iSize; i++) {
        string working=numbers[i];
        int acumuladoLength = acumulado.length()-1;
        int workingLength = working.length()-1;
        
        int iPendiente=0;
        string count="";
        while (true) {
            int adding = (acumulado[acumuladoLength]-'0')+(working[workingLength]-'0');
            if (adding >= 0) {
            adding+= iPendiente;
            iPendiente=adding/10;
            int toSume = adding%10;
            char suming = toSume+'0';
            count = suming + count;
            }
            if (acumuladoLength<0) {
                //We need to add the rest of the workingLength plus the pendient
                string left = working.substr(0, workingLength+1);
                int leftNumber = atoi(left.c_str());
                leftNumber+=iPendiente;
                left = to_string(leftNumber);
                count = left + count;
                break;
            }
            else if(workingLength<0) {
                string left = acumulado.substr(0, acumuladoLength);
                int leftNumber = atoi(left.c_str());
                leftNumber+=iPendiente;
                left = to_string(leftNumber);
                count = left + count;
                break;
            }
            acumuladoLength--;
            workingLength--;
        }
        acumulado=count;
    }
    return acumulado;
}

string multiply(string number, string times) {
    string returnedNumber;
    string numbers[10];
    int iSize=0;
    int numberLength = number.length()-1;
    int timesLength = times.length()-1;
    
    int timed = 0;
    
    while(timed <= timesLength) {
        string toAdd;
        for(int i=0;i<timed;i++) {
            toAdd+= "0";
        }
        int iContador=0;
        int iPendiente=0;
        int workingNumber=numberLength;
    
        while(iContador <= numberLength) {
            int mult = (times[timesLength-timed]-'0') * (number[workingNumber]-'0');
            mult+= iPendiente;
            char multiplied = (mult%10)+'0';
            iPendiente=0;
            iPendiente= mult/10;
            toAdd = multiplied + toAdd;
            if (iContador==numberLength) {
                char add = iPendiente+'0';
                toAdd = add + toAdd;
            }
            iContador++;
            workingNumber--;
        }
        numbers[iSize] = toAdd,
        iSize++;
        timed++;
    }
    returnedNumber = sume(numbers, iSize);
    while (returnedNumber[0]=='0') {
        returnedNumber = returnedNumber.substr(1);
    }
    return returnedNumber;
}

int main(int argc, char const *argv[])
{
    
    string factorial="40";
    for (int i=39; i>1; i--) {
        string toadd = to_string(i);
        factorial = multiply(factorial, toadd);
    }
            cout << factorial << endl;
    return 0;
}