#include <iostream>
using namespace std;

int main()  {
	int leading, linear, constant, discriminant, sqrt;		// declaration of variables
	double zero1, zero2;
	bool loop = true, found;
	char answer;
	
	cout << "Hello there! Welcome to the J&A Quadratic Formula Calculator!\n\n\n";
	
	// start of loop
	while (loop)  {
		// inputting the values
		cout << "Please input the leading coefficient of the quadratic equation: ";
		cin >> leading;
	
		cout << "Please input the linear coefficient of the quadratic equation: ";
		cin >> linear;
	
		cout << "Please input the constant of the quadratic equation: ";
		cin >> constant;
		
		cout << "\n\n";
	
		discriminant = ((linear * linear) - (4 * leading * constant));		// calculating for the discriminant
		
		// if the discriminant is 0
		if (discriminant == 0)  {
			zero1 = (-(linear) / (2.0 * leading));
		
			cout << "The quadratic equation has one real root with multiplicity of two, namely:\n";
			cout << "	> " << zero1 << endl;
			cout << "Thank you!\n\n\n";
		}
		
		// if the discriminant is greater than 0
		else if (discriminant > 0)  {
			found = false;
			
			// figures out if the discriminant is a perfect square and finds it's root/s
			for (int x = 0; x <= discriminant && !found; x++)  {		
				if ((x * x) == discriminant)  {
					sqrt = x;
					found = true;
				}
			}
			
			// if the discriminant is a perfect square
			if (found == true)  {
				zero1 = (-(linear) + sqrt) / (2.0 * leading);
				zero2 = (-(linear) - sqrt) / (2.0 * leading);
				
				cout << "The quadratic equation has two distinct real roots, namely:\n";
				cout << "	> " << zero1 << "\n";
				cout << "	> " << zero2 << "\n";
				cout << "Thank you!\n\n\n";
			}
			
			// if the discriminant is not a perfect square
			else  {
				cout << "The quadratic equation has two distinct real roots, namely:\n";
				cout << "	> " << (-(linear) / (2.0 * leading)) << " + (sqrt(" << discriminant << ") / " << (2.0 * leading) << ")\n";
				cout << "	> " << (-(linear) / (2.0 * leading)) << " - (sqrt(" << discriminant << ") / " << (2.0 * leading) << ")\n";
				cout << "Thank You!\n\n\n";
			}
		}
		
		// if the discriminant is less than 0
		else if (discriminant < 0)  {
			discriminant = -(discriminant);		// negates the discriminant
			found = false;
			
			// figures out if the discriminant is a perfect square and finds it's root/s
			for (int x = 0; x <= discriminant && !found; x++)  {
				if ((x * x) == discriminant)  {
					sqrt = x;
					found = true;
				}
			}
			
			// if the discriminant is a perfect square
			if (found == true)  {
				zero1 = (-(linear) + sqrt) / (2.0 * leading);
				zero2 = (-(linear) - sqrt) / (2.0 * leading);
				
				cout << "The quadratic equation has two distinct imaginary roots, namely:\n";
				cout << "	> " << (-(linear) / (2.0 * leading)) << " + (" << sqrt << "i / " << (2.0 * leading) << ")\n";
				cout << "	> " << (-(linear) / (2.0 * leading)) << " - (" << sqrt << "i / " << (2.0 * leading) << ")\n";
				cout << "Thank You!\n\n\n";
			}
			
			// if the discriminant is not a perfect square
			else  {
				cout << "The quadratic equation has two distinct imaginary roots, namely:\n";
				cout << "	> " << (-(linear) / (2.0 * leading)) << " + ((sqrt(" << discriminant << ") * i) / " << (2.0 * leading) << ")\n";
				cout << "	> " << (-(linear) / (2.0 * leading)) << " - ((sqrt(" << discriminant << ") * i) / " << (2.0 * leading) << ")\n";
				cout << "Thank You!\n\n\n";
			}
		}
		
		
		// asks if the user wound like to use the calculator again and changes the variable "loop" to false if no
		cout << "Would you like to input another quadratic equation? Y/N: ";
		cin >> answer;
		
		cout << "\n\n\n\n";
		
		if (answer == 'N')  {
			loop = false;
		}
	}
	
	cout << "Thank you for using the J&A Quadratic Formula Calculator. We hope you had a good experience!";
}
