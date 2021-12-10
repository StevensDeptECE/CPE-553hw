class fraction {
private:
	int num, den;
public:
	fraction(int n, int d);
	fraction operator +(const fraction& x) const;
	friend ostream& operator <<(ostream& s, const fraction& f);
};
