#include<iostream>
using namespace std;

template <class T>

class raja{                 // raja is a generic class..//
	T first,second;
	public:
		raja(int x,int y){
			first=x;
			second=y;
		}
		
		T bigger();
};

template <class T>  // every time u define the function outside the class u need to write this func template..//
T raja<T>::bigger(){ // <T> is used to tell that the same above class template we are using here also..//
		return(first>second?first:second);
	}


int main()
{
	raja<int> ob(10,12);  // u need to define the data type after the calss..//
	cout<<ob.bigger()<<endl;
}
