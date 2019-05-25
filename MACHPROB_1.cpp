#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    double A, B, C; 
    double IntA, IntB, IntC; 
	double Area, Perim, Apon;
	double Circum, circumA, circumB; 
	const double PI = 3.14;
    string Triangle;
    double temp1, temp2,temp5, temp6, temp7, temp8;
	int temp3, temp4; 
	double HPer;
    char choice;
	
	cout << "Triangle Calculator" << endl << endl; 
	cout << " " << endl;

	do{
	    cout << "Input the First Leg: ";
		cin >> A;
		cout << "Input the Second Leg: ";
		cin >> B;
		cout << "Input the Third Leg: ";
		cin >> C;
		
		double dblsides[3] = {A, B, C};
		
      	temp1 = (pow(B,2) + pow(C,2) - pow(A,2)) / (2 * B * C);
		temp2 = acos(temp1);
		IntA = temp2 * 180 / PI;

		temp1 = (pow(C,2) + pow(A,2) - pow(B,2)) / (2 * C * A);
		temp2 = acos(temp1);
		IntB = temp2 * 180 / PI;
		
		temp1 = (pow(B,2) + pow(A,2) - pow(C,2)) / (2 * B * A);
		temp2 = acos(temp1);
		IntC = temp2 * 180 / PI;
		
		cout<<"A. Interior Angles" <<endl;
		cout<<"Angle A: " << IntA <<endl;
		cout<<"Angle B: " << IntB <<endl;
		cout<<"Angle C: " << IntC <<endl <<endl;

       	cout << " " << endl;

		cout<< "B. Classification of Triangle base on Leg Length:"<<endl;
		if (A != B && B != C && C != A)
		{
				cout << "Scalene Triangle" <<endl;
		}
		else
		{
		    if (A == B && C == A)
			{
				cout<<"Equilateral Triangle" <<endl;
		    }
			else
			{
			    cout<<"Isosceles Triangle" <<endl;
			}
		}

		cout<< " " << endl;
            
       	cout<< "C. Area and Perimeter of the Triangle" <<endl;
		Perim = A + B + C;
		HPer = Perim / 2;
		Area = sqrt(HPer * (HPer - A) * (HPer - B) * (HPer - C));
		cout<< "Area is : " <<Area <<" square units" <<endl;
		cout<<"Perimeter is : " << Perim << " units" << endl << endl;

		for(int i=0; i<=2; i++)
		{
		    for (int j=0; j<=1; j++)
			{
		        if(dblsides[j] < dblsides[j + 1])
				{
		            int temp;
		            temp = dblsides[j];
		            dblsides[j] = dblsides[j + 1];
		            dblsides[j + 1] = temp;
		        }
		    }
		}
		temp1 = pow(dblsides[0],2);
		temp2 = pow(dblsides[1],2)+pow(dblsides[2],2);
		temp3 = ceil(temp1);
		temp4 = ceil(temp2);
		
		if(temp3 < temp4)
		{
			Triangle= "Acute Triangle";
		}
		else if (temp3 > temp4)
		{
		    Triangle = "Obtuse Triangle";
		}
		else
		{
		    Triangle = "Right Triangle";
		}

		cout <<"Classification of Triangle" << endl;
		cout <<Triangle<<endl;

		cout << " " << endl;
		
		cout << "Computed values of Length of apothem and Circumcenter of the Triangle" <<endl;
		Apon = 2 * Area / Perim;
		cout << "Length of Apothem: " << Apon <<endl;
		cout << " " << endl;
		temp5 = cos( IntB*(PI/180));
		temp6 = sin( IntB*(PI/180));
		temp7 = C * static_cast<double>(temp5);
		temp8 = C * static_cast<double>(temp6);
		circumA = A / 2;
		circumB = (pow(temp8, 2) - (A * temp7) + pow(temp7 ,2))/ (2 * temp8);
		cout << "Circumcenter (x,y): (" << circumA;
		cout << "," << circumB << ")" << endl << endl;

		   cout<<"Do you want to continue? " <<endl;
	    cout<<"If No press N, otherwise press any key: "; cin>>choice;

	} while(choice != 'N' && choice != 'n');



	_getch();
	return 0;
} 