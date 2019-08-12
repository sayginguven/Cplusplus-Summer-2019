class Shallow{

private:
	int * data;
public:
	Shallow() {
	};
	Shallow(int d) {
		//data = new int; // allocating the memory
		data = (int*)malloc(sizeof(int));
		*data = d;
	};
	Shallow(const Shallow &source) 
		: data{ source.data }
	{
	}
	~Shallow() {
		delete data;
	};

	void setData(int d) {
		*data = d;

	}

	int getData() {
		return *data;
	}

};