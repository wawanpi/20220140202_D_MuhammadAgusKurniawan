#include <iostream>
using namespace std;

int main()
{   // Begin
     // Numeric
     int bil;
     // Character status
     string status;
     // Display "Masukan bilangan ="
     cout << "Masukan bilangan =";
     //accept bil
     cin >> bil;
     //if(bil==0)
     if (bil==0)
     // status = "nol"
     status = "nol";
// else
    else
    // status = "ganjil"
    status = "ganjil";
// display "bilangannya =" + status
cout << "bilangnannya =" << status;

}// end