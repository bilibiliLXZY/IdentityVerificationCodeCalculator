#include <iostream>
#include <cstring>
using namespace std;
int IDfactor[] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char listsChecker[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
int main(int argc, char** argv){
	string ID;
	cin>>ID;
	if(ID.length()!=17){
		cout<<"身份证格式（无校验码）不合法"<<endl;
		return 1;}
	int IDs[17] = {0}, IDsum = 0;
	for (int i=0;i<17;i++)IDsum+=IDs[i]=((ID.at(i)-48)*IDfactor[i]);
	IDsum%=11;
	cout<<listsChecker[IDsum]<<endl;
	getchar();
	getchar();
	return 0;
} 
