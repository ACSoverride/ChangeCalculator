#include <iostream>
#include <cmath>
//Class : CSI 140-01
// Assignment : Change Calculator Lab
// Date Assigned : 9/4/22
// Due Date : Due - 9/18/22 11:59
// Description :
//A brief description of the purpose of the program. A program to sort an amount of money into the least amount of hard cash possible
// Certification of Authenticity :
//I certify that this is entirely my own work, except where I have given fully documented
// references to the work of others.I understand the definition and
// consequences of plagiarism and acknowledge that the assessor of this assignment
// may, for the purpose of assessing this assignment :
// -Reproduce this assignment and provide a copy to another member of
// academic staff; and / or
// - Communicate a copy of this assignment to a plagiarism checking service
// (which may then retain a copy of this assignment on its database for
// the purpose of future plagiarism checking)
//FYI VERY IMPORTANT: As a firm believer in the open source software movement, and for version history features this project is publicly
//available on my github ACSOverride. If your plagiarism checker fires off because of that I can prove that I am the owner of that github account/repo.
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
    cout << "$100 Bill(s): " << the100;
    cout << "\n$50 Bill(s): " << the50;
    cout << "\n$25 Bill(s): " << the25;
    cout << "\n$10 Bill(s): " << the10;
    cout << "\n$5 Bill(s): " << the5;
    cout << "\n$1 Bill(s): " << the1;
    return 0;
}
