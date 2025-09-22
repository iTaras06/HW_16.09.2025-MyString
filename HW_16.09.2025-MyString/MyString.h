#pragma once
class MyString
{
	char* str; // указатель на строку
	int length; // длина строки
	static int count;
public: // методы класса
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

	//void MyStrcpy(MyString& obj);// копирование строки
	//bool MyStrStr(const char* str);// поиск подстроки в строке
	//int  MyChr(char c); // поиск символа в строке 
						// (индекс найденого символа, либо -1)
	//int MyStrLen();// возвращает длину строки
	//void MyStrCat(MyString& b); // объединение строк
	//void MyDelChr(char c); // удаляет указанный символ 
	//int MyStrCmp(MyString& b); // сравнение строк 
							// -1 - первая строка меньше чем вторая 
							// 1 - первая больше чем вторая
							// 0 - строки равны
};