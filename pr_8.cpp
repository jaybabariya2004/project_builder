#include<iostream>

using namespace std;

class student{
	
	public:
		
		student(){
			
			cout<<"defult"<<endl;
		}
		~student(){
			
			cout<<"Destructor"<<endl;
		}
};
int main(){
	
	student obj;
	
	cout<<"This is a Destructor."<<endl;
	
	return 0;
}
