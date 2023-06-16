#include<iostream>

using namespace std;

class Hotel{
	
	private:
		int id,staff_size,room_size,establish_year,rating;
		char name[50],type[50],address[50];
		
		public:
			void setter(){
				
				cout<<"Enter Id : ";
				cin>>id;
				
				cout<<"Enter Name : ";
				cin>>name;
				
				cout<<"Enter Type : ";
				cin>>type;
				
				cout<<"Enter Staff Size : ";
				cin>>staff_size;
				
				cout<<"Enter Room Size : ";
				cin>>room_size;
				
				cout<<"Enter Establish Year : ";
				cin>>establish_year;
				
				cout<<"Enter Address : ";
				cin>>address;
				
				cout<<"Enter Rating : ";
				cin>>rating;
			}
			
			void getter(){
				
				cout<<"Id : "<<id<<endl;
				cout<<"Name : "<<name<<endl;
				cout<<"Type : "<<type<<endl;
				cout<<"Staff Size : "<<staff_size<<endl;
				cout<<"Room Size : "<<room_size<<endl;
				cout<<"Establish Year : "<<establish_year<<endl;
				cout<<"Address : "<<address<<endl;
				cout<<"Rating : "<<rating<<endl;
			}
};		
int main(){
	
	Hotel obj1,obj2,obj3,obj4,obj5;
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
