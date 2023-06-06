#include<iostream>
#include<string.h>

using namespace std;

class employe{
	
	public:
		int id,model,year;
		char name[20],color[20];
};

int main(){
	
	employe obj,obj2,obj3,obj4;
	
	cout<<"first car\n\n";
	obj.id=1;
	obj.model=2015;
	obj.year=2008;
	strcpy(obj.name,"audi");
	strcpy(obj.color,"grey");
	
	cout<<obj.id<<"\n";
	cout<<obj.model<<"\n";
	cout<<obj.year<<"\n";
	cout<<obj.name<<"\n";
	cout<<obj.color<<"\n\n\n";

	

	cout<<"second car\n\n";
	obj.id=2;
	obj.model=2012;
	obj.year=2002;
	strcpy(obj.name,"suzuki");
	strcpy(obj.color,"black");
	
	cout<<obj.id<<"\n";
	cout<<obj.model<<"\n";
	cout<<obj.year<<"\n";
	cout<<obj.name<<"\n";
	cout<<obj.color<<"\n\n\n";
	
	
	cout<<"third car\n\n";
	obj.id=3;
	obj.model=2021;
	obj.year=2001;
	strcpy(obj.name,"mg");
	strcpy(obj.color,"blacy");
	
	cout<<obj.id<<"\n";
	cout<<obj.model<<"\n";
	cout<<obj.year<<"\n";
	cout<<obj.name<<"\n";
	cout<<obj.color<<"\n\n\n";
	
	
	cout<<"four car\n\n";
	obj.id=4;
	obj.model=2022;
	obj.year=2000;
	strcpy(obj.name,"kia");
	strcpy(obj.color,"silver");
	
	cout<<obj.id<<"\n";
	cout<<obj.model<<"\n";
	cout<<obj.year<<"\n";
	cout<<obj.name<<"\n";
	cout<<obj.color<<"\n\n\n";
	

}
