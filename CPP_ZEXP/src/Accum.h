#include <iostream>
#include <string.h>

using std::string;
template <class T>
class Accum{
	private:
		T sum;
	public:
		Accum(T base):sum(base){
		}
		void add(T t){
			sum+=t;
		}
		T getTotal(){
			return this->sum;
		}
};

template<>
class Accum<string>{
	private:
	string sum;

	public:
	Accum(string base):sum(base){
	}
	void add(string s){
		sum=sum+" : "+s;
	}
	string getTotal(){
		return this->sum;
	}




};

