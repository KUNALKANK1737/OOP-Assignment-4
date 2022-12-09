#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	fstream file;
	string ch;
	file.open("sample.txt",ios::out);
	cout<<"Enter the content of the file :";
    getline(cin,ch);
	file<<ch;
	file.close();
	file.open("sample.txt",ios::in);
	while(file.eof()==0){
		getline(file,ch);
		cout<<"The data in the file is :"<<ch<<endl;
	}
	file.close();

	}
