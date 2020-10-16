struct Node
{
	int value;
	Node* next;
};

class List
{
private:
	Node* head;
	Node* end;
public:
	List();
	~List();
	void insert(int value);
	void print();
	int listLen();
	void bubbleSort();
	void selectSort();
	void insertSort();
};
