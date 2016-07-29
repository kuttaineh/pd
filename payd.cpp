// payd: An amorative payment determiner
// by: Rammy Kuttaineh http://m.me/Rammy
// inputs: days on task, self-determined worth
// description: starting at a base rate of pay
//              payd allows you to increase
//              your level of compensation.

#include <iostream>
#include <cstdlib>
    
    using namespace std;

int main(int argc, char *argv[])
{
    float P = 1.00;
    int responsecode;
    
    if (argc > 0)
    {
        float D = strtod(argv[1], NULL) * 3 // multiply by coding hours in an avg day
        float R = strtod(argv[2], NULL) / 100 / 3 // determine hourly rate of intrest
            
        for (float hours = D; hours > 0; hours-- )
            P = P * R + P;
        cout << "Hourly pay $" << P << endl; // display today's hourly rate
        responsecode = 0;
    } else
    {
        cout << "Usage: payd <day> <worth>" << endl; // day on task, your worth
        cout << "Current pay rate: $" << P << endl; // else the default worth
        responsecode = 1;
    }
    return responsecode;
}