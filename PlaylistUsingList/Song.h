#pragma once
#include <string>

class Song
{
public:
	std::string name, songs_name;
	Song(){}
	Song(std::string name, std::string songs_name)
		:name{name}, songs_name{songs_name}{}
	~Song(){}
	friend std::ostream& operator<<(std::ostream& os, const Song s);
	bool operator==(const Song s)
	{
		return (this->name == s.name && this->songs_name == s.songs_name);
	}
	bool operator <(const Song s)
	{
		return this->name < s.name;
	}
};
