#include<iostream>
using namespace std;
class FristClass{
    private:
	int x;
	friend class SecondClass;     
};

class SecondClass{
	public:
		void display(FristClass obj){
			obj.x=200;
			cout<<"the value of X is :="<<obj.x<<endl;
		}
};


int main(){
 	FristClass obj1;
 	SecondClass obj2;
 	
 	obj2.display(obj1);
	
	return 0;
}