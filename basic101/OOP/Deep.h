#include <iostream>

class Deep{

private:
	int * data;
public:
	Deep() {
	};
	Deep(int d) {
		//data = new int; // allocating the memory
		data = (int*)malloc(sizeof(int));
		*data = d;
	};


	Deep(const Deep &source) 
		: Deep{*source.data}
	{
	}



	~Deep() {
		delete data;
	};

	void setData(int d) {
		*data = d;

	}

	int getData() {
		return *data;
	}

};
