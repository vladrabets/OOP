class String {
private:
	char* string;
	int strLen;
public:
	String();
	String(const String& str);
	String(char* string, int n):string(string), strLen(n){};
	~String();
	String operator+(String str);
	String& operator=(const String str);
	String operator+=(String str);
	char& operator[](int i);
	bool operator>(String str);
	bool operator<(String str);
	String Concatenation(String str1);
	char getSymbol(int i);
	void strCompare(String str);
	void setStr();
	void setStrLen();
	void setStrLen(int l);
	void printStr();
	int getLen();
	char* getStr();
	friend void SortByFirstLetter(String s[], int n);
	friend void SortByLength(String s[], int n);
};
