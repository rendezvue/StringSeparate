#include "StrSplit.h"



CStrSplit::CStrSplit()
{
}


CStrSplit::~CStrSplit()
{
	//printf("Destory : %s\n", __func__);
}

std::vector<std::string> CStrSplit::Split(const std::string& s, char seperator)
{
	std::vector<std::string> output;

	std::string::size_type prev_pos = 0, pos = 0;

	while ((pos = s.find(seperator, pos)) != std::string::npos)
	{
		std::string substring(s.substr(prev_pos, pos - prev_pos));

		if( !substring.empty() )	output.push_back(substring);

		prev_pos = ++pos;
	}

	int last_len = pos - prev_pos ;
	if( last_len > 0 )	output.push_back(s.substr(prev_pos, pos - prev_pos)); // Last word

	return output;
}
