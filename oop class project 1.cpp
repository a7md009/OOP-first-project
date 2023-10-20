// class project
//student sheet

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std ;

class student {

private:
	char name[15];
	char school[10];
	int id;
	int numofsubj;
	int school_year;
public:
	void setname(char n[])
	{
		strcpy_s(name, n);
	}
	void setschool(char n[])
	{
		strcpy_s(school, n);
	}
	void setid(int m)
	{
		id = m;
	}
	void setnumofsubj(int m)
	{
		numofsubj = m;
	}
	void setschool_year(int m)
	{
		school_year = m;
	}
	char * getname()
	{
		return name;
    }
	char * getschool()
	{
		return school;
    }
	int getid()
	{
		return id;
	}
	int getnumofsubj()
	{
		return numofsubj;
	}
	int getschool_year()
	{
		return school_year;
	}
	void print()
	{
		cout << "name " << getname << "/n"
		 << "school " << getschool << "/n"
		 << "id " << getid << "/n"
		 << "number of subjects " << getnumofsubj << "/n"
		 << "school year " << getschool_year << "/n";
	}
};
int main()
{
	student x;
	x.print();
	x.setname("a7md");
	x.setschool("agriculture");
	x.setid(210028);
	x.setnumofsubj(7);
	x.setschool_year(2021);
};


