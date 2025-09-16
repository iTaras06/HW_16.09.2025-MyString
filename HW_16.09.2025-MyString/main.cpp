#include "MyString.h"
#include <iostream>
using namespace std;

int main()
{
	MyString obj1("Hello world");
	obj1.Print();

	MyString obj2 = obj1;
	obj2.Print();
	
	cout << obj1.MyStrStr("woy") << endl;
	cout << obj1.MyStrStr("wor") << endl;
	cout << obj1.MyStrStr("lo wo") << endl;
	cout << obj1.MyStrStr("wok") << endl;


	obj2.Input();
	obj2.Print();

	MyString obj3;
	obj3.MyStrcpy(obj1);
	obj3.Print();

	cout << obj1.MyChr('w') << endl;
	cout << obj1.MyChr('z') << endl;

	cout << obj1.MyStrLen() << endl;

	MyString obj4(". Ralph");
	obj1.MyStrCat(obj4);
	obj1.Print();

	obj1.MyDelChr('l');
	obj1.Print();

	cout << obj1.MyStrCmp(obj3) << endl;
}