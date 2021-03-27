#include<iostream>
#include<conio.h>

#ifndef INVALID_SALARY
#define INVALID_SALARY 0
#endif

#define MINRANGE 1
#define MAXRANGE 5

using namespace std;

int main(void)
{
    float salary, rate, iSal; 

    const float SLAB_MAX = 4.1, SLAB_MID = 3.1,
                INC_MAX = 1.3, INC_MID = 1.25, INC_MIN = 1.1;

    cout << "\nEnter Salary : ";
    cin >> salary;

    cout << "\nEnter Performance Appraisal Rating : ";
    cin >> rate;

    // Validation.
    if( (salary <= INVALID_SALARY) || (rate < MINRANGE && rate > MAXRANGE) )
    {
        cout << "\nInvalid Input";
        // something went wrong.
        return 1;
    } 

    if(rate >= SLAB_MAX)
    {
        // 8000 * (1 + (10 /100)) => 8000 * 0.1 => 800 (increment)
        // 8000 + 800 = 8800
        // 8000 * (1 + 0.1) => 8000 * 1.1
        iSal = salary * INC_MAX;
    }
    else if(rate >= SLAB_MID && rate < SLAB_MAX)
    {
        iSal = salary * INC_MID;
    }
    else
    {
        iSal = salary * INC_MIN;
    }

    cout << "\nIncremented Salary : "<< iSal;

    // cout<<"\nPress any key to exit.";
    // getch();

    // All ok.
    return 0;
}