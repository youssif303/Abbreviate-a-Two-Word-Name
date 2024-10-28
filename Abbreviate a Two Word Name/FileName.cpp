#include<iostream>
#include<string>
using namespace std;


std::string abbrevName(std::string name)
{
	std::string result;
	result += toupper(name[0]);
	result += ".";
	result += toupper(name[name.find(" ")+1]);
	
	return result;
}


int main()
{
	cout << abbrevName("sam harries");
	return 0;
}