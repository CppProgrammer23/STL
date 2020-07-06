#include <iostream>
#include <map>
#include <unordered_set>
#include <cctype>

#define MAX (int)100

using namespace std;


void option(void)
{
	cout << "M - for mouse." << endl;
	cout << "K - for keyboard." << endl;
	cout << "R - for monitor." << endl;
	cout << "G - for GPU." << endl;
	cout << "C - for CPU." << endl;
	cout << "Q - for quit." << endl;
	cout << "======================" << endl;
}
void avail_art(void)
{
	char c,con;
	int quantity, disp = MAX, disp2 = MAX, disp3 = MAX, disp4 = MAX, disp5 = MAX, sum = 0;
	bool b = true;
	map<string, unordered_set<int>>m{
		{"Mouse",{120,disp}},		/*price and available articles! I used unordered set so the values in still in the same place*/ 
		{"Keyboard",{75,disp2}},
		{"Monitor",{750,disp3}},
		{"GPU",{1200,disp4}},
		{"CPU",{1000,disp5}}
	};
	auto it = m.find("CPU");
	while (b)
	{
		option();
		cout << "Enter your choice: ";
		cin >> c;
		switch (std::toupper(c))
		{
		case 'M':
			it = m.find("Mouse");
			cout << "You've choosen the Mouse!" << endl;
			cout << "The available quantity is: " << *(it->second.find(disp)) << endl;
			if (*(it->second.find(disp)) == 0)
			{
				cout << "Out of stock! You cannot choose this article! try later." << endl;
				break;
			}
			cout << "Enter the quantity: ";
			cin >> quantity;
			while (quantity > * (it->second.find(disp)))
			{
				cout << "Out of Stock! the Stock has only :" << *(it->second.find(disp)) << " Piece." << endl;
				cout << "Enter the quantity: ";
				cin >> quantity;
			}
			cout << "Confirm? y/n: ";
			cin >> con;
			if (con == 'y')
			{
				auto its=it->second.find(disp);
				it->second.insert(disp=(*its - quantity));
				it->second.erase(its);
			}
			system("cls");
			break;
		case 'K':
			it = m.find("Keyboard");
			cout << "You've choosen the Keyboard!" << endl;
			cout << "The available quantity is: " << *(it->second.find(disp2)) << endl;
			if (*(it->second.find(disp2)) == 0)
			{
				cout << "Out of stock! You cannot choose this article! try later." << endl;
				break;
			}
			cout << "Enter the quantity: ";
			cin >> quantity;
			while (quantity > * (it->second.find(disp2)))
			{
				cout << "Out of Stock! the Stock has only :" << *(it->second.find(disp2)) << " Piece." << endl;
				cout << "Enter the quantity: ";
				cin >> quantity;
			}
			cout << "Confirm? y/n :";
			cin >> con;
			if (con == 'y')
			{
				auto its = it->second.find(disp2);
				it->second.insert(disp2 = (*its - quantity));
				it->second.erase(its);
			}
			system("cls");
			break;
		case 'R':
			it = m.find("Monitor");
			cout << "You've choosen the Monitor!" << endl;
			cout << "The avalable quantity is: " << *(it->second.find(disp3)) << endl;
			if (*(it->second.find(disp3)) == 0)
			{
				cout << "Out of stock! You cannot choose this article! try later." << endl;
				break;
			}
			cout << "Enter the quantity: ";
			cin >> quantity;
			while (quantity > * (it->second.find(disp3)))
			{
				cout << "Out of Stock! the Stock has only :" << *(it->second.find(disp3)) << " Piece." << endl;
				cout << "Enter the quantity: ";
				cin >> quantity;
			}
			cout << "Confirm? y/n :";
			cin >> con;
			if (con == 'y')
			{
				auto its = it->second.find(disp3);
				it->second.insert(disp3 = (*its - quantity));
				it->second.erase(its);
			}
			system("cls");
			break;
		case 'G':
			it = m.find("GPU");
			cout << "You've choosen the GPU!" << endl;
			cout << "The avalable quantity is: " << *(it->second.find(disp4)) << endl;
			if (*(it->second.find(disp4)) == 0)
			{
				cout << "Out of stock! You cannot choose this article! try later." << endl;
				break;
			}
			cout << "Enter the quantity: ";
			cin >> quantity;
			while (quantity > * (it->second.find(disp4)))
			{
				cout << "Out of Stock! the Stock has only :" << *(it->second.find(disp4)) << " Piece." << endl;
				cout << "Enter the quantity: ";
				cin >> quantity;
			}
			cout << "Confirm? y/n :";
			cin >> con;
			if (con == 'y')
			{
				auto its = it->second.find(disp4);
				it->second.insert(disp4 = (*its - quantity));
				it->second.erase(its);
			}
			system("cls");
			break;
		case 'C':
			it = m.find("CPU");
			cout << "You've choosen the CPU!" << endl;
			cout << "The available quantity is: " << *(it->second.find(disp5)) << endl;
			if (*(it->second.find(disp5)) == 0)
			{
				cout << "Out of stock! You cannot choose this article! try later." << endl;
				break;
			}
			cout << "Enter the quantity: ";
			cin >> quantity;
			while (quantity > * (it->second.find(disp5)))
			{
				cout << "Out of Stock! the Stock has only :" << *(it->second.find(disp5)) << " Piece." << endl;
				cout << "Enter the quantity: ";
				cin >> quantity;
			}
			cout << "Confirm? y/n :";
			cin >> con;
			if (con == 'y')
			{
				auto its = it->second.find(disp5);
				it->second.insert(disp5 = (*its - quantity));
				it->second.erase(its);
			}
			system("cls");
			break;
		case 'Q':
			b = false;
			cout << "=========================" << endl;
			cout << "You've bought: " << endl;
			
			it = m.find("Mouse");
			if (*(it->second.find(disp)) != MAX)
			{
				cout << MAX - *(it->second.find(disp)) << ": Mouse(s)" << endl;
				sum += (*(it->second.find(120)) * (MAX - *(it->second.find(disp))));
			}
			it = m.find("Keyboard");
			if (*(it->second.find(disp2)) != MAX)
			{
				cout << MAX - *(it->second.find(disp2)) << ": Keyboard(s)" << endl;
				sum += (*(it->second.find(75)) * (MAX - *(it->second.find(disp2))));
			}
			it = m.find("Monitor");
			if (*(it->second.find(disp3)) != MAX)
			{
				cout << MAX - *(it->second.find(disp3)) << ": Monitor(s)" << endl;
				sum += (*(it->second.find(750)) * (MAX - *(it->second.find(disp3))));
			}
			it = m.find("GPU");
			if (*(it->second.find(disp4)) != MAX)
			{
				cout << MAX - *(it->second.find(disp4)) << ": GPU(s)" << endl;
				sum += (*(it->second.find(1200)) * (MAX - *(it->second.find(disp4))));
			}
			it = m.find("CPU");
			if (*(it->second.find(disp5)) != MAX)
			{
				cout << MAX - *(it->second.find(disp5)) << ": CPU(s)" << endl;
				sum += (*(it->second.find(1000)) * (MAX - *(it->second.find(disp5))));
			}

			cout << "The total purchses is: " << sum << " Euros" << endl;
			cout << "Good bye" << endl;
			cout << "=========================" << endl;
			break;
		}
	}
}

int main()
{
	avail_art();
	return 0;
}
