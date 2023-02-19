#include<iostream>

class Integer {

public:
	Integer():value_(0){}
	Integer(int i) : value_(i) {}
friend 
Integer operator +(const Integer& obj1, const Integer& obj2) {
return Integer (obj1.value_ + obj2.value_);
}

int value()const {
	return value_;
}

Integer sum(Integer a, Integer b) {
	return a + b;
}

private:
	int value_;

};

std::ostream& operator<<(std::ostream& out, const Integer& var) {
	out << var.value();
	return out;
}

std::istream& operator>>(std::istream& input, Integer& var) {
	int tmp{};
	input >> tmp;
	var = tmp;
	return input;
}

class Double {

public:
	Double() :value_(0) {}
	Double(double i) : value_(i) {}
	friend
		Double operator +(const Double& obj1, const Double& obj2) {
		return Double(obj1.value_ + obj2.value_);
	}

	double value()const {
		return value_;
	}

	Double sum(Double a, Double b) {
		return a + b;
	}

private:
	long double value_;

};

std::ostream& operator<<(std::ostream& out, const Double& var) {
	out << var.value();
	return out;
}

std::istream& operator>>(std::istream& input, Double& var) {
	double tmp{};
	input >> tmp;
	var = tmp;
	return input;
}








int main() {
	setlocale(LC_ALL, "Russian");
	Integer c{3};
	Integer d{10};
	Integer a;
	Double f{ 12.234 }, g{ 98.23 }, j;
	a.sum(c, d);
	j.sum(f, g);
	std::cout << "Integer\t" << a.sum(c, d) << "Double\t" << j.sum(f, g)<<'\n';

	std::cout << '\n';
	std::cout << "Changing variables" << '\n';
	std::cin >> c >> d >> f >> g;
	std::cout << '\n';
	std::cout << "last one"<<g;

	
	




	return 0;


}


