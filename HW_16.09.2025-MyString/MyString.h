#pragma once
class MyString
{
	char* str;
	int length;
	static int count;
public:
	MyString();
	MyString(int size);
	MyString(const char* st);
	~MyString();
	MyString(const MyString& obj);
	MyString(MyString&& obj);
	bool MyStrStr(const char* str);
	void Input();
	void Print();
	void MyStrcpy(MyString& obj);
	int MyChr(char c);
	int MyStrLen();
	void MyStrCat(MyString& b);
	void MyDelChr(char c);
	int MyStrCmp(MyString& b);

	static void PrintCount();

	MyString operator+ (const char* b);
	MyString operator+ (MyString& obj);
	MyString operator- (const char ch);
	
	MyString& operator++ ();
	MyString operator++(int);
	MyString& operator--();
	MyString operator--(int);
	MyString& operator+= (const char* obj);
	MyString& operator+= (const MyString& obj);
	bool operator==(MyString& obj);
	bool operator>(MyString& obj);

	MyString& operator=(const MyString& obj);
	MyString& operator=(MyString&& obj);
};
