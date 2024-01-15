#include<iostream>

using namespace std; // 

class MyClass
{
public:
	string name;

	void changeName()
	{
		name = toupper(name[0]);
	}
};
void addRef(int& a , int& b, int& c)
{
	//cout << a << '\n' << b << '\n' << c << '\n';
	a *= 2;
	b *= 2;
	c *= 2;
	//cout <<'\n' << a << '\n' << b << '\n' << c << '\n';
}

long Factorial(long); //Decalring a function. 
void Pointer(); //Declaring function before the main method.
int main()
{
	std::cout << "Hello World!\n";
	int x = 1;
	int y = 3;
	int z = x + y;

	cout << "x= " << x <<" y= "<< y << " z=" << z;

	std::cout << '\n'; // "std::" is not required- namespace
	MyClass mc;
	mc.name = "cPlusPlus" ;
	cout << '\n' << mc.name << '\n';
	mc.changeName();
	cout << '\n' << '\n' <<mc.name <<'\n';

	addRef(x, y, z);

	cout << "after Ref: ";
	cout << "x= " << x << " y= " << y << " z=" << z<< '\n';
	long f = 5;
	cout << "********* Facttorial ***********\n"
		<< "Factorial of " << f << " = " <<Factorial(5) << '\n';
	Pointer();
	
	return 0;
}

long Factorial(long a)
{
	if (a > 1)
		return a * Factorial(a - 1);
	else
		return 1;
}
void Pointer()
{
	int x;
	cout << " ****** Pointer ********\n";
	cout << "Address of x = " << &x; //an ampersand sign (&), known as address-of operator.
}