#include<iostream>

using namespace std;

class skill{
	
	public:
		
		skill(int a, int b){
			
			cout<<"Sum => "<<a+b<<endl;
		}
};
int main(){
	
	skill obj(20,20);
	
	return 0;
}
