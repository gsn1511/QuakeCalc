#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

double SumMagntiude(double Mw1, double Mw2){
    //Formula for adding 2 moment magnitudes
    return (log10(pow(10,(5.24+1.44*Mw1))+pow(10,(5.24+1.44*Mw2)))-5.24)/1.44;
}

int main(){
    cout<<"Welcome to QuakeCalc!"<<'\n';
    cout<<"Note: this version only supports addition."<<'\n';

    int amount, count=1;
    cout<<"How many moment magnitudes to you want to add? ";
    cin>>amount;
    amount = min(max(amount, 0), (int) 10e5);
        
    double newMw, totMw;
    cout<<"The first moment magntiude you want to add: ";
    cin>>totMw;

    while(count<amount){ 
        cout<<"The new moment magntiude you want to add: ";
        cin>>newMw;
        totMw = SumMagntiude(newMw,totMw);
        cout<<"The sum of the moment magnitudes are "<<totMw<<'\n';
        count++;
    }

}
