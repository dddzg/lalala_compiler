#include "StringUtil.h"

/*
str ֻ���� int float ���� char �ĳ���
*/
bool StringUtil::IsChar(string str)
{
	if (str[0] == '\'') return true;
	return false;
}

/*
str ֻ���� int float ���� char �ĳ���
*/
bool StringUtil::IsFloat(string str)
{
	auto pos = str.find('.');
	if (pos != string::npos) return true;
	return false;
}
