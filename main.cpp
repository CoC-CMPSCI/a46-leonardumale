#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string status, gender, major;
    double factor = 0.1;       
    double scholarship = 10000.0;

    cin >> status >> gender >> major;

    if (status == "student") {
        factor = 0.2; 
        if (gender == "female") {
            factor = 1.0;
            if (major == "cs") {
                factor = 3.0;
            }
        } else { 
            if (major == "cs") {
                factor = 2.0;
            }
            
        }
    } else { 
        if (major == "cs") {
            factor = 0.5;
        }
    }

    double finalScholarship = scholarship * factor;

    cout << setprecision(2) << fixed;
    cout << "Decided Factor: " << factor << ", Final Scholarship Amount: " << finalScholarship << endl;

    return 0;
}
