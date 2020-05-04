#include<iostream>

using namespace std;

int main()
{
	string nama[6] = {"Spring Day", "Hold Me Tight", "Scenery", "Promise", "My Time", "Winter Bear"};
	
	cout<<"Menampilkan secara manual"<<endl;
	cout<<"Lagu favorit : "<<nama[0]<<endl;
	cout<<"Lagu favorit : "<<nama[1]<<endl;
	cout<<"Lagu favorit : "<<nama[2]<<endl;
	cout<<"Lagu favorit : "<<nama[3]<<endl;
	cout<<"Lagu favorit : "<<nama[4]<<endl;
	cout<<"Lagu favorit : "<<nama[5]<<endl;
	
	cout<<"Menampilkan dengan menggunakan for "<<endl;
	for(int i = 0; i<6; i++)
	{
		cout<<"Lagu favorit : "<<nama[i]<<endl;
	}
	
	system("pause");
	return 0;
}
