class Worker {
private:
	char name[30];
	char post[30];
	int year;
	int wage;
public:
	Worker();
	void Staj(int staj);
	void Wage(int wag);
	void Post(char pos[30]);

	void setName();
	void setPost();
	void setYear();
	void setWage();

	void getName();
	void getPost();
	int getYear();
	int getWage();
};
