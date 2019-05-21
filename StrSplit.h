#pragma once

#include <string>
#include <vector>

class CStrSplit
{
public:
	CStrSplit();
	~CStrSplit();

	std::vector<std::string> Split(const std::string& s, char seperator);
};

