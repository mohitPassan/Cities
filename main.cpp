#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

class City
{
	string cityName,touristPlaces[4],hotels[4],transport[3];
	public:
		void getData(string name)
		{
			ifstream fin(name);
			getline(fin,cityName);
			for(int i=0;i<4;i++)
			{
				getline(fin,touristPlaces[i]);
			}
			for(int i=0;i<4;i++)
			{
				getline(fin,hotels[i]);
			}
			for(int i=0;i<3;i++)
			{
				getline(fin,transport[i]);
			}	
		}
		void printData()
		{
			cout << "City:\n\t";
			cout << cityName << endl;
			cout << "\nTourist Spots with ticket price:\n";
			for(int i=0;i<4;i++)
			{
				cout << "\n\t" << touristPlaces[i];
			}
			cout << "\n\nHotels with rent for one night:\n";
			for(int i=0;i<4;i++)
			{
				cout << "\n\t" << hotels[i];
			}
			cout << "\n\nTransport facilities:\n\t";
			for(int i=0;i<3;i++)
			{
				cout << "\n\t" << transport[i];
			}
		}
};

int main()
{
	City ob;
	string cityName;
	cout << "Enter name of city:" << endl;
	cin >> cityName;
	ob.getData(cityName);
	ob.printData();
}