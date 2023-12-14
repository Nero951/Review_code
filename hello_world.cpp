#include<iostream> //加#代表为预处理语句
#include<cstring>

using namespace std;

bool isCommonPrefix(char str[]);
int main()
{
	int a;
	char str[] = "";
	cin >> str;
	isCommonPrefix(str);
	cout << a << std::endl;
}