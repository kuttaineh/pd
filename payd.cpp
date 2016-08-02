// payd: An amorative payment determiner
// by: Rammy Kuttaineh http://m.me/Rammy
// inputs: days on task, self-determined worth
// description: starting at a base rate of pay
//              payd allows you to increase
//              your level of compensation.

#include <iostream>
#include <cstdlib>
    
    using namespace std;

const int STDDAY = 3; // hours

int printUsage(float);

int main(int argc, char *argv[])
{
    float Payment = 1.00;
    float Worth = 0.0000;
    int responsecode;
    
    if (argc<2)
    {
        responsecode = printUsage(Payment);
    }
    else
    {
	// multiply first input by average # of coding hours in an standard day
        float D = strtod(argv[1], NULL) * STDDAY;

	if(argc<3) // heading off segmentation fault when worth is not defined
	    Worth = 0.00000000;
	else
	    // determine hourly rate of intrest
            Worth = strtod(argv[2], NULL) / 100 / STDDAY;
            
        for (float hours = D; hours > 0; hours-- )
            Payment = Payment * Worth + Payment;
        cout << "Hourly pay $" << Payment << endl; // display new hourly rate
        responsecode = 0;
    } 
    return responsecode;
}

int printUsage(float Payment)
{
    cout << "Usage: payd <day> <worth>" << '\n'; // day on task, your worth
    cout << "Current pay rate: $" << Payment << endl; // else the default worth
    return 1;
}

