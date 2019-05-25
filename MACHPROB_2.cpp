#include <iostream>
#include <conio.h>
#include <math.h>
#include <cstdlib>
#include <cmath>

using namespace std;
int main()

{
	char a;
	char ans = 'N';
	float radius, width, length, height, slant, perimeter, Volume, Base, Surfacearea, Lateralarea ;
	const float pi = 3.1416;

	do
	{
		cout << " _________________________________________________________________________" << endl;
		cout << "|~~~~~~~~~~~~~~~~~~~~~~ GEOMETRIC CALCULATOR ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
		cout << "|                                                                         |" << endl;
		cout << "|                   Select which of the following                         |" << endl;
		cout << "|               geometric figure you want to calculate.                   |" << endl;
		cout << "|                                                                         |" << endl;
		cout << "|               Pick the geometric figure you'd like :)                   |" << endl;
		cout << "|                                                                         |" << endl;
		cout << "|     Cone (Press C/c)                                                    |" << endl;
		cout << "|     Pyramid (Press P/p)                                                 |" << endl;
		cout << "|     Sphere (Press S/s)                                                  |" << endl;
		cout << "|_________________________________________________________________________|" << endl;
		
		cout << "You pick  ";
	
		cin >> a;

		{
			
			switch (a)
			
			{
				
				
			case 'S':
			case 's':
			{
				cout << "\n\n\n" << endl;
				cout << "The parameters of a sphere:\n" << endl;
				
				cout << "You want your radius to be ";
				cin >> radius;

				cout << "The Volume is " << pi * radius * radius * radius * 4 / 3 << endl;
				cout << "The Surface Area is " << 4 * pi * radius * radius << endl;

				cout << "\n\n";

				break;
			}
			
			
			case 'C':
			case 'c':
			{
				cout << "\n\n\n" << endl;
				cout << "The parameters of the cone:\n" << endl;
				
				cout << "You want your height to be ";
				cin >> height;
				
				cout << "You want your radius to be ";
				cin >> radius;
				
				cout << "\n\n";
				

				const float Vcone = (pi * radius * radius * (height / 3));
				const float LAcone = pi * radius * (sqrt((height * height) + (radius * radius)));

				cout << "The Volume is " << Vcone << endl;
				cout << "The Lateral Area is " << LAcone << endl;
				cout << "The Base Area is " << 3 * Vcone / height << endl;
				cout << "The Surface Area is " << (sqrt((height * height) + (radius * radius)) + radius) * pi * radius << endl;
				
				cout << "\n\n";
				break;
			}
			
			
			case 'P':
			case 'p':
			{
				cout << "\n\n\n" << endl;
				cout << "The parameters of a pyramid:\n" << endl;
				
				
				cout << "You want your height to be ";
				cin >> height;
				
				cout << "You want your width to be ";
				cin >> width;
				
				cout << "You want your length to be ";
				cin >> length;
				
				cout << "\n\n";
		
				const float slant = sqrt((height * height + (width / 2) * (width / 2)));
				const float perimeter = 2 * (length + width);
				
				const float Volume = Base * height / 3;
				
				const float Base = length * width;
				
				const float Surfacearea = Base + Lateralarea;
				
				const float Lateralarea = perimeter * slant / 2;
				
				cout << "The Base is " << Base << endl;
				cout << "The Volume is " << Volume << endl;
				cout << "The Surface Area is " << Surfacearea << endl;
				cout << "The Lateral Area is " << Lateralarea << endl;
				
				cout << "\n\n";
				break;
			}
		
			default:
			{
				cout << "Wrong Input\n" << endl;
				return 0;
			}
			}

			cout << "Do you want to continue (Y/N)" << endl;
			cout << ": \n\n";
			cin >> ans;

		}
	} while ((ans == 'Y') || (ans == 'y'));

	cout << "Thank you :) !!" << endl;

	return 0;


	_getch();
	return 0;
}
