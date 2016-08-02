// payd: An amorative payment determiner
// by: Rammy Kuttaineh http://m.me/Rammy
// inputs: days on task, self-determined worth
// description: starting at a base rate of pay
//              payd allows you to increase
//              your level of compensation.

#include <iostream>
#include <cstdlib>
    
    using namespace std;

#define STDDAY	3

int main(int argc, char *argv[])
{
    float P = 1.00;
    int responsecode;
    
    if (argc<2)
    {
        cout << "Usage: payd <day> <worth>" << '\n'; // day on task, your worth
        cout << "Current pay rate: $" << P << endl; // else the default worth
        responsecode = 1;
    }
    else
    {
	// multiply first input by average # of coding hours in an standard day
        float D = strtod(argv[1], NULL) * STDDAY;

	if(argc<3) // heading off segmentation fault when worth is not defined
		argv[3] = 0;
	// determine hourly rate of intrest
        float W = strtod(argv[2], NULL) / 100 / STDDAY;
            
        for (float hours = D; hours > 0; hours-- )
            P = P * W + P;
        cout << "Hourly pay $" << P << endl; // display today's hourly rate
        responsecode = 0;
    } 
    return responsecode;
}
