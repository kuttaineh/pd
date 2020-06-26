// payd: An amorative Pay determiner
// by: Rammy Kuttaineh http://m.me/Rammy
// inputs: day on task, today's value-added.
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
    float Pay = 0.0008817; // hourly
    float Worth = 0.0000;
    int responsecode;
    
    if (argc<2)
    {
        responsecode = printUsage(Pay);
    }
    else
    {
        int Day = ((strtod(argv[1], NULL))-1); // accounting for C's 0 index
	// multiply first input by average # of coding hours in a standard day
        float D = Day * STDDAY;

	if(argc<3); // skip Segmentation fault when worth is not user defined.
	else // determine hourly rate of interest
            Worth = strtod(argv[2], NULL) / 100 / STDDAY;
            for (float hours = D; hours > 0; hours-- )
             Pay = Pay * Worth + Pay;
        cout << "Hourly pay ₿" << Pay << endl; // display new hourly rate
        responsecode = 0;
    }
    return responsecode;
}

int printUsage(float Pay)
{
    cout << "Usage: payd <day> <worth>\n"; // day on task, your worth
    cout << "Current pay rate: ₿" << Pay << endl; // else initial
    return 1;
}

