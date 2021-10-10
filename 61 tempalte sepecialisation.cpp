#include<iostream>
using namespace std;

template<class T>
class raja{
	public:
		raja(T x){
			cout<<x<<"is not a character..\n";
		}
};

template<>
class raja<char>{   //if we want to get seperate outcome for a seperate data type, we use like this../
	public:
		raja(char x){
		
		cout<<x<<"is indeed a char..\n";
	}
};

int main()
{
	raja<int> ob1(7);
	raja<double> ob2(5.443);
	raja<char> ob3('d');
}
