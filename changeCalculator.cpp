#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int theNum;
    //ask for input
    cout << "Enter Amount";
    cin >> theNum;
    //do the calculation which involve taking the floor of the remaining value of cash not yet assigned
    int the100 = floor(theNum/100);
    int the50 = floor((theNum%100)/50);
    int the25 = floor((theNum-the100*(100)-the50*50)/25);
    int the10 = floor((theNum-the100*(100)-the50*50-the25*25)/10);
    int the5 = floor((theNum-the100*(100)-the50*50-the25*25-the10*10)/5);
    int the1 = floor((theNum-the100*(100)-the50*50-the25*25-the10*10-the5*5)/1);
    //outputting everything
    cout << "$100 Bill(s) " << the100;
    cout << "\n$50 Bill(s) " << the50;
    cout << "\n$25 Bill(s) " << the25;
    cout << "\n$10 Bill(s) " << the10;
    cout << "\n$5 Bill(s) " << the5;
    cout << "\n$1 Bill(s) " << the1;
    return 0;
}
