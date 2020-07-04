#include "Song.h"
#include <iostream>
#include <list>

using namespace std;


void main_menu(void)
{
	cout << "===================================" << endl;
	cout << "F - Play first Song." << endl;
	cout << "N - Play next Song." << endl;
	cout << "P - Play previous Song." << endl;
	cout << "A - Add and play new Song at current location." << endl;
	cout << "L - List the current Playlist." << endl;
}

template <class T>
void current_playlist(list<T> l)
{
	auto it = l.begin();
	cout << "Current Playlist:\n" << endl;
	while (it != l.end())
	{
		cout << *it << endl;
		it++;
	}
}

std::ostream& operator<<(std::ostream& os, const Song s)
{
	os << s.songs_name << ":\t"<< s.name;
	return os;
}
char c;
void Enter_sel(void)
{
	cout << "====================================" << endl;
	cout << "Enter a selection (Q to Quit): " << endl;
	cin >> c;
	c = toupper(c);
}
int main()
{
	list <Song> s{ {"Mi Gente","JBalvin"}, {"In Da Club","50 Cent"}, {"Player Hater","Kollegah"} };
	Song s1;
	string name;
	auto it = s.begin();
	//list<Song>::iterator it1;

	current_playlist(s);
	main_menu();
loop:
	Enter_sel();

	if (c == 'F')
	{
		cout << *it << endl;
		goto loop;
	}
	else if (c == 'N')
	{
		it++;
		if (it == s.end())
		{
			cout << "Playing first song..." << endl;
			it = s.begin();
			cout << *it << endl;
		}
		else
			cout << *it << endl;
		goto loop;
	}
	else if (c == 'P')
	{
		if (it == s.begin())
		{
			cout << "Playing Last song..." << endl;
			it = s.end();
		}

		it--;
		cout << *it << endl;
		goto loop;
	}
	else if (c == 'A')
	{
		cout << "Enter your song, names song: " << endl;
		cin >> s1.songs_name;
		cout << "Enter the name of the singer: " << endl;
		cin >> s1.name;
		/*cout << "Enter the emplacement, after which song: " << endl;
		cin >> name;
		it1 = find(s.begin(), s.end(), Song{ name });*/

		s.insert(it, Song{ s1.name, s1.songs_name });
		system("cls");
		current_playlist(s);
		main_menu();
		goto loop;
	}
	else if (c == 'L')
	{
		system("cls");
		current_playlist(s);
		goto loop;
	}
	else if (c == 'Q')
		system("exit");
	

	return 0;
}
