
#include <iostream>
using namespace std;

//Just for practise

//int main() {
//	char m ='A'; // dont use "A" its string literal use single-quotes
//	int  n = 4;
//	double r = 3.4;
//	cout << m  << "\n" << n << "\n" << r << endl;
//	return 0;
//}

//Use 'A' for char not "A" 

// Q1) Write a program that prints a text of 4 lines consisting of integers , characters and floating point values using cout statement.(UNCOMMENT TO RUN THIS)

//int main() {
//	char grade = 'A';
//	double GPA = 3.95;
//	int position = 1;
//	cout << "I am Nabeeha Ashar\n";
//	cout << "Grade:" << grade <<"\n";
//	cout << "GPA: " << GPA << "\n";
//	cout << "Position in class:" << position << "\n" << endl;
//	return 0;
//}

//Dont do '3.95'

// Q2) Write the program that input radius of sphere from  user. It calculates its volume and surface area using formula Area=4*pi*r^2 and circumference 4/3*pi *r^3 and pi=3.14;

//int main(){
//	float pi = 3.14;
//	int radius;
//	cout << "Enter radius of sphere: ";
//	cin >> radius;
//	cout << "\nThe area of sphere is :" << 4 * pi * radius*radius;
//	cout << "\nThe circumference is: " << (4.0/ 3) * pi * radius * radius * radius << endl; 
//	return 0;
//}

// Always in divide use one floating point number otherwise 4/3 =1 (integer)

//Q3) Write down the program to find out the area of triangle when three sides a, b , c are given. Use appropriate statements for input of values a, b, c. Formula for area is under root(s(s-a)*(s-b)*(s-c)).
// s=(a+b+c)/2

//#include <cmath>
//int main() {
//	float a, b, c,s;
//	cout << "Enter the side (a):";
//	cin >> a;
//	cout << "Enter the side (b):";
//	cin >> b;
//	cout << "Enter side (c):";
//	cin >> c;
//	s= (a + b + c) / 2.0;
//	cout << "\n The Area is " << sqrt(s * (s - a) * (s - b) * (s - c)) << endl;
//	return 0;
//}

//sqrt() is provided by the <cmath> header.
//Some IDEs may compile without explicitly including <cmath>, but it should be included as good practice.

// For Multiple inputs on same line use : 
//cout << "Enter a b c: ";
//cin >> a >> b >> c;

//Q4) Write a program that input miles from user and convert miles to kilometres.One mile is equal to 1.609km

//int main() {
//	float mil,km;
//	cout << "Enter miles:";
//	cin >> mil;
//	km = 1.609*mil;
//	cout << "The value of " << mil << " is " << km << endl;
//	return 0;
//}

//Q5) Write a program that inputs 3 nums and calculates the sum, average and product of all numbers.

//int main() {
//	int a, b, c, sum, prod;
//	float avg;
//	cout << "Enter numbers a b c :";
//	cin >> a >> b >> c;
//	sum = a + b + c;
//	prod = a * b * c;
//	avg = (a + b + c) / 3.0;
//	cout << "Sum:" << sum;
//	cout << "\nProduct:" << prod;
//	cout << "\nAverage:" << avg<<endl;
//	return 0;
//}
 
//Q6) Write a program that inputs age in years and displays age in months and days.
 
//int main() {
//	int age;
//	int months, days;
//	cout << "Enter age(in years):";
//	cin >> age;
//	months = age * 12;
//	days = age * 365;
//	cout << "Age in months: " << months;
//	cout << "\nAge in days: " << days << endl;
//	return 0;
//}

//Q7) Write a program that inputs the num and displays the cube and square of that num

int main() {
	int num;
	int square, cube;
	cout << "Enter number";
	cin >> num;
	square = num * num;
	cube = num * num * num;
	cout << "Square is: " << square << "\nCube is: " << cube;
	return 0;

}

//Q8) Write program that inputs total pages of a book , number of pages the person reads in one day and number of days a person has read a book.It displays number of that have been read and number of pages remaining.

//int main() {
//	int pages, pageread, days;
//	cout "En"
//}