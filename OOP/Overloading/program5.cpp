
/*Program to demonstrate input and output operators
*/
#include <iostream>
#include <string>
using namespace std;
class Student
{
  private:
	string name;
	string rollno;
	int grade;
	char sec;
  public:
    friend ostream& operator<<(ostream& o,Complex& a);
    friend istream& operator>>(istream& i,Complex& a);
	
	
	
};

friend ostream& operator<<(ostream& o,Complex& a)
{
	o<<"\nName:"<<a.name<<"\nRoll Number:"<<a.rollno<<"\nGrade:"<<a.grade<<"\nSection:"<<a.sec;
	return o;
}
friend istream& operator>>(istream& i,Complex& a)
{
	cout<<"\nEnter Name:";
	i>>a.name;
	cout<<"\nEnter Roll Number:";
	i>>a.rollno;
	cout<<"\nEnter grade:";
	i>>a.grade;
	cout<<"\nEnter Section:";
	i>>a.sec;
	cout<<endl;
	return i;
}

int main ()
{
 	
}
