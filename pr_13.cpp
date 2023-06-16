#include<iostream>

using namespace std;

int main(){
	
	char value,name[20],email;
	int number,p_no;
	
	cout<<"-: BANK MANAGMENT SYSTEM :-"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<"-: Designed N Programed By :-"<<endl;
	cout<<"-----------------------------"<<endl;
	cout<<"KHUSHI G BELADIYA"<<endl<<endl<<endl;
	cout<<"-: Trainer :-"<<endl;
	cout<<"------------------------------"<<endl;
	cout<<"ASHISH SOLANKI"<<endl;
	cout<<"Press Any Key N Enter To Continue..."<<endl;
	cin>>value;
	if((value == 'n' || value == 'N')){
		
		cout<<"-----------------------------------------------------------------"<<endl;
		cout<<"-: Press A to Log in as Aministartor Or S to Log in as STAFF :-"<<endl;
		cout<<"-----------------------------------------------------------------"<<endl;
	}else{
		
		cout<<"Invalid Input"<<endl;
	}
	if((value == 's' || value == 'S')){
		
		cout<<"-----------------------------------------------------------------"<<endl;
		cout<<"-: Welcome As Staff :-"<<endl;
		cout<<"-----------------------------------------------------------------"<<endl<<endl<<endl;
	}else{ 
		
		cout<<"Invalid Input"<<endl;
	}
		cout<<"Enter The Name Of Staff : ";
		cin>>name;
		cout<<"Enter The Account Number Of Staff : ";
		cin>>number;
		cout<<"Enter The Phone Number Of Staff : ";
		cin>>p_no;
		cout<<"Enter The E-mail Of Staff : ";
		cin>>email;
		
		cout<<"--------------------------------------------------------------------"<<endl;
		cout<<"Name"<<"\t\t"<<name<<endl;
		cout<<"Account No"<<"\t\t"<<number<<endl;
		cout<<"Phone NO"<<"\t\t"<<p_no<<endl;
		cout<<"E-mail"<<"\t\t"<<email<<endl;
		cout<<"--------------------------------------------------------------------"<<endl;
		
		
}
