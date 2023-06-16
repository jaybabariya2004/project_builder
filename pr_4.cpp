#include<iostream>

using namespace std;

class Highschool{
	
	private:
		
		int id,number,standard,age;
		char name[30],address[30],contact[30];
		static char education_name[30];
		
		public:
			
			void setter(){
				
				cout<<"Enter a Student Id : ";
				cin>>id;
				
				cout<<"Enter a Student Name : ";
				cin>>name;
				
				cout<<"Enter a Student Roll Number : ";
				cin>>number;
				
				cout<<"Enter a Student Standard : ";
				cin>>standard;
				
				cout<<"Enter a Student Age : ";
				cin>>age;
				
				cout<<"Enter a Student Contact : ";
				cin>>contact;
				
				cout<<"Enter a Student Address : ";
				cin>>address;
			}
			void getter(){
				
				cout<<"Id : "<<id<<endl;
				cout<<"Name : "<<name<<endl;
				cout<<"Roll Number :"<<number<<endl;
				cout<<"Standard : "<<standard<<endl;
				cout<<"Age : "<<age<<endl;
				cout<<"Contact : "<<contact<<endl;
				cout<<"Address : "<<address<<endl;
			}
};

char Highschool::education_name[]="Maruti gruop of school";
int main(){
	
	Highschool obj;
	
	obj.setter();
	obj.getter();
	
	return 0;
}
