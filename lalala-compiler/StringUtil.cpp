#include "StringUtil.h"

/*
str 只能是 int float 或者 char 的常量
*/
bool StringUtil::IsChar(string str)
{
	if (str[0] == '\'') return true;
	return false;
}

/*
str 只能是 int float 或者 char 的常量
*/
bool StringUtil::IsFloat(string str)
{
	auto pos = str.find('.');
	if (pos != string::npos) return true;
	return false;
}
