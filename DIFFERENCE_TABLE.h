class DIFFERENCE_TABLE
{
private:
	double* x,**y;
	int k,n;
public:
	DIFFERENCE_TABLE(int NO_VALUE);
	void set_valueX();
	void set_valueY();
	void EvaluateTableforward();
	void EvaluateTableBackward();
};

