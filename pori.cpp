using namespace std;
#include <iostream>
//class  Overcoat
//{
//private:
//
//	string type;
//	int dengi;
//
//public:
//
//
//	Overcoat() :type("non"), dengi(0) {};
//	Overcoat(string type1, int sd) :type(type1), dengi(sd) {};
//
//	bool operator>(const Overcoat& other)const
//	{
//		return this->dengi > other.dengi;
//	}
//	bool operator==(const Overcoat& other)const
//	{
//	
//		return this->dengi == other.dengi;
//	}
//	void operator=(const Overcoat& other)
//	{
//		this->dengi = other.dengi;
//		this->type = other.type;
//		
//	}
//
//	void show() {
//		cout << this->dengi << "\n";
//		cout << this->type << endl;
//	}
//};
class  cvar
{
private:

	int plosh;
	int dengi;

public:


	cvar() :plosh(0), dengi(0) {};
	cvar(int type1, int sd) :plosh(type1), dengi(sd) {};

	bool operator>(const cvar& other)const
	{
		return this->dengi > other.dengi;
	}
	bool operator==(const cvar& other)const
	{

		return this->plosh == other.plosh;
	}
	void operator=(const cvar& other)
	{

		this->plosh = other.plosh;
		this->dengi = other.dengi;

	}

	void show() {
		cout << this->dengi << "\n";
		cout << this->plosh << endl;
	}
};

int main()
{
	//Overcoat tt("sk",13);
	//Overcoat tt1("sk12", 12);
	//bool res = tt > tt1;
	//cout << res;
	
	cvar sd(122, 11);
	cvar sd1(1214, 11);
	bool res = sd > sd1;
	cout << res;
	bool res1= sd == sd1;
	cout << res1;
	sd = sd1;
	sd.show();


	
}
