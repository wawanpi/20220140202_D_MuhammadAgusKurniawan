#include <iostream>
using namespace std;

double rerata (double a, double b)
{
    return (a+b)/2;
}
string status (double d)
{
    if (d>= 60)
    return "lulus";
    else
    return "gagal";
}
string status2(double r, double n)
{
    if (r >=60 && n >=70)
    return "lulus";
    else
    return"gagal";
}

int main()
{
    double nilM, nilB;
    
    cout << "masukan nilai matematika=";
    cin >>nilM;
    cout << "masukan nilai bahasa inggris=";
    cin >> nilB;

    cout << "status kelulusannya=" <<status (rerata(nilM,nilB))<<endl;
    cout << "status kelulusannya=" <<status2(rerata(nilM,nilB),nilM);

}