#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    // Declare and initialize variables to hold user information
    unsigned userAge     = 0,
             userHours   = 0;
    double   userPayRate = 0.0;

    // Prompt the user for their age
    cout << "How old are you? ";
    cin >> userAge;50
    cout << userAge * 2 << endl;
    cout << userAge * 0.5 << endl;

    // Prompt the user for their pay rate
    cout << "What is your pay rate? $";
    cin >> userPayRate;
    cout << "How many hours for the week? ";
    cin >> userHours;

    // Pay for the week
    double weekPay = userHours * userPayRate;
    cout << weekPay << endl;
    cout << weekPay + 50 << endl;

    // Exponentiation
    double exponent = pow(userPayRate, userHours);
    cout << exponent << endl;

    // PartB_-----------------------------------------------------
    double n1, n2, n3, n4, n5;
    cout << "Enter 5 numbers:" << endl;
    cin >> n1 >> n2 >> n3 >> n4 >> n5; 

    // Averages
    cout << "Your average is: " << ((n1 + n2 + n3 + n4 + n5) / 5) << endl;

    // Modified average
    n1 += 4;
    n2 -= 6;
    n3 *= 2;
    n4 /= 3;
    //not sure how n5 works used refrence to answer
    n5 = static_cast<int>(n5) % 5; 

    cout << "Modified average is: " << ((n1 + n2 + n3 + n4 + n5) / 5) << endl;

    // Terminate
    return 0;
}
