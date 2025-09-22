#include "MyString.h"
#include <iostream>
using namespace std;

MyString::MyString()
{
	length = 80;
	str = new char[length] {};
	count++;
}
MyString::MyString(int size)
{
	length = size;
	str = new char[length] {};
	count++;
}
MyString::MyString(const char* st)
{
	length = strlen(st);
	str = new char[length + 1];
	strcpy_s(str, length + 1, st);
	count++;
}
MyString::~MyString()
{
	delete[]str;
	length = 0;
	count--;
}
MyString::MyString(const MyString& obj)
{
	length = obj.length;
	str = new char[length + 1];
	strcpy_s(str, length + 1, obj.str);
	count++;
}

void MyString::Print()
{
	cout << str << endl;
}

bool MyString::MyStrStr(const char* str)
{
	const char* s = strstr(this->str, str);
	if (s != nullptr)
	{
		return true;
	}
	return false;
}

void MyString::Input()
{
	cout << "\nEnter string: ";
	cin.getline(str, length);
}

void MyString::MyStrcpy(MyString& obj)
{
	length = obj.length;
	str = new char[length + 1];
	strcpy_s(str, length + 1, obj.str);
}

MyString::MyString(MyString&& obj)
{
	str = obj.str;
	obj.str = nullptr;
	length = obj.length;
	obj.length = 0;
	cout << "Move constructor!!\n";

	count++;
}

int MyString::MyChr(char c)
{
	char* cha = strchr(this->str, c);
	if (cha != nullptr)
	{
		return cha - this->str;
	}
	return -1;
}

int MyString::MyStrLen()
{
	return strlen(str);
}

void MyString::MyStrCat(MyString& b)
{
	int new_length = length + b.length;
	char* new_str = new char[new_length + 1];
	strcpy_s(new_str, new_length + 1, str);
	strcat_s(new_str, new_length + 1, b.str);
	delete[] str;
	str = new_str;
	length = new_length;

}

void MyString::MyDelChr(char c)
{
	int count = 0;
	for (int i = 0; i < length +1; i++)
	{
		if (str[i] == c)
		{
			count++;
		}
	}
	if (count == 0) return;
	int new_length = length - count;
	char* new_str = new char[new_length + 1];
	int j = 0;
	for (int i = 0; i < length +1; i++)
	{
		if (str[i] != c)
		{
			new_str[j] = str[i];
			j++;
		}
	}
	delete[] str;
	str = new_str;
	length = new_length;
}
int MyString::MyStrCmp(MyString& b)
{
	return strcmp(str, b.str);
}

void MyString::PrintCount()
{
	cout << "Count => " << count << endl;
}
int MyString::count = 0;