#include<iostream>

using namespace std;

class Data{
	
	private:
		int id,salary,exprience;
		char name[50],role[50],address[50],email[50],contact[10];
		
		public:
			void setter(){
				
				cout<<"Enter Id : ";
				cin>>id;
				
				cout<<"Enter Name : ";
				cin>>name;
				
				cout<<"Enter Role : ";
				cin>>role;
				
				cout<<"Enter Salary : ";
				cin>>salary;
				
				cout<<"Enter Exprience : ";
				cin>>exprience;
				
				cout<<"Enter Address : ";
				cin>>address;
				
				cout<<"Enter E-mail : ";
				cin>>email;
				
				cout<<"Enter Contact : ";
				cin>>contact;
			}
			
			void getter(){
				
				cout<<"Id : "<<id<<endl;
				cout<<"Name : "<<name<<endl;
				cout<<"Salary : "<<role<<endl;
				cout<<"Exprience : "<<salary<<endl;
				cout<<"Address : "<<exprience<<endl;
				cout<<"E-mail : "<<address<<endl;
				cout<<"Contact : "<<contact<<endl;
				cout<<"Id : "<<id<<endl;
			}
};		
int main(){
	
	Data obj1,obj2,obj3,obj4,obj5;
	obj1.setter();
	obj1.getter();
	
	obj2.setter();
	obj2.getter();
	
	obj3.setter();
	obj3.getter();
		
	obj4.setter();
	obj4.getter();
	
	obj5.setter();
	obj5.getter();

}
