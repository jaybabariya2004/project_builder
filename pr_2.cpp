#include<iostream>
#include<string.h>

using namespace std;

class Student{
	private:
		int roll_no;
		char name[40];
		
		
		public:
			void Studennt(){
				
				cout<<"Name : ";
				cin>>name;
						
				cout<<"Roll No : ";
				cin>>roll_no;
			}
};
int main()
