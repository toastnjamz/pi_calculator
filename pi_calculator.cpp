#include <iostream>
#include <cmath>

using namespace std;

long double calc_pi(double terms);
// Function declaration: function calculates the value of pi to n terms

int main()
{
	long terms=1;
	long double pi_total;

	cout<< "Welcome to Pi Calculator!\n";

	while(1)
	{
		cout<< "Enter the number of terms you would like pi calculated to.\n";
		cout<< "(Type \"0\" to end the program): ";
		cin>> terms;
		cout.precision(terms);

		if (terms <= 0)
		{
			cout<< "Thank you for using Pi Calculator!" <<endl;
			break;
		}
		pi_total = calc_pi(terms);

		cout<< "Pi to "<< terms << " terms equals: " << pi_total <<endl;
	}

	return(0);
}

//********************calc_pi()********************
long double calc_pi(double terms)
{
	long double pi_val = 0.0;
	long count = 0.0;

	//cout<< "at count " << count << "pi_val=" << pi_val << ", terms=" << terms << endl;
	for (count = 0; count <= terms; count++)
	{
		pi_val+=( (pow(-1, count))/(2*count+1) );
	}
	return(4*pi_val);
}
