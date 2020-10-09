#define _CRT_SECURE_NO_WARNINGS
#include "String.h"
#include <iostream>
#include <string.h>
using namespace std;

String::String(){
	this->setStrLen();
	this->setStr();
}

String::String(const String& str) {
	this->string = str.string;
	this->strLen = str.strLen;
}

void String::setStrLen(int l){
	this->strLen = l;
}

String::~String() {
	//cout << "Destructed\n";
}

void String::strCompare(String str) {
	if (strlen(this->string) > strlen(str.string)) {
		cout << "String " << this->string << " bigger, than string " << str.string; 
	}
	else if (strlen(str.string) > strlen(this->string)) {
		cout << "String " << this->string << " less, than string " << str.string;
	}
	else if (strlen(str.string) == strlen(this->string)) {
		cout << "String " << this->string << " equal to the string " << str.string;
	}
}

void String::setStr() {
	cout << "Input the string: ";
	cin >> this->string;
}

void String::setStrLen() {
	cout << "Input length of the string: ";
	int strLength;
	cin >> strLength;
	string = new char[strLength];
	this->strLen = strLength;
}

int String::getLen() {
	return this->strLen;
}

char* String::getStr() {
	return this->string;
}

void String::printStr() {
	cout << string;
}

String String::operator+=(String str) {
	this->setStrLen(this->strLen + str.strLen);
	this->string = strcat(this->string, str.string);
	return *this;
}

String& String::operator=(const String str) {
	this->strLen = str.strLen;
	string = new char[this->strLen];
	this->string = str.string;
	return *this;
}

String String::operator+(String str) {
	int len = strLen + str.strLen;
	char* s = new char[len]; 
	strcpy(s, string);
	strcat(s, str.string);
	String sum(s,len);

	return sum;
}

char& String::operator[](int i) {
	char* str = this->getStr();
	if (i <= (strlen(str))) {
		return str[i - 1];
	}
	else cout << "INPUT ERROR!";
}

char String::getSymbol(int i) {
	char* str = this->getStr();
	char symbol = str[i - 1];
	return symbol;
}

String String::Concatenation(String str) {
	this->setStrLen(this->strLen + str.strLen);
	this->string = strcat(this->string, str.string);
	return *this;
}

bool String::operator>(String str) {
	if (this->getLen() > str.getLen()) return true;
	else return false;
}

bool String::operator<(String str) {
	if (this->getLen() < str.getLen()) return true;
	else return false;
}

void SortByFirstLetter(String s[], int n) {
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n-1;j++) {
			if (s[j][1] > s[j + 1][1]) {
				String swap(s[j]);
				s[j] = s[j + 1];
				s[j + 1] = swap;
			}
		}
	}
}

void SortByLength(String s[], int n) {
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (s[j].getLen() > s[j + 1].getLen()) {
				String swap(s[j]);
				s[j] = s[j + 1];
				s[j + 1] = swap;
			}
		}
	}
}