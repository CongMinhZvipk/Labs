#include <iostream>
#include <cstring>
using namespace std;
typedef struct 
{
	int area_code;
	int the_exchange;
	int the_number;
}A_Phone_Number;

void Input(A_Phone_Number &Phone2);
void Output(A_Phone_Number Phone2, A_Phone_Number Phone1);
int main()
{
 	A_Phone_Number Phone2;
 	A_Phone_Number Phone1 = {212, 767, 8900};
 	Input(Phone2);
 	Output(Phone2,Phone1);
	return 0;
}
void Input(A_Phone_Number &Phone2)
{
		cout<<"Enter your area code, exchange and number :";
		cin>>Phone2.area_code>>Phone2.the_exchange>>Phone2.the_number;
}
void Output(A_Phone_Number Phone2, A_Phone_Number Phone1)
{
	cout<<"My number is"<<"("<<Phone1.area_code<<")"<<" "<<Phone1.the_exchange<<" - "<<Phone1.the_number<<endl;
	cout<<"Your number is"<<"("<<Phone2.area_code<<")"<<" "<<Phone2.the_exchange<<" - "<<Phone2.the_number;
}
