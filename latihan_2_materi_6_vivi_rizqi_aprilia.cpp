#include<iostream>

using namespace std;

int main()
{
	string nama[6][2] = {{"Spring Day","Begin"}, {"Hold Me Tight","Go Go"}, {"Scenery","Black Swan"}, {"Promise","Come Back Home"}, {"My Time","Way Back Home"}, {"Winter Bear","Ending Scene"}};
	
	cout<<"Menampilkan secara manual"<<endl;
	cout<<"Lagu favorit : "<<nama[0][0]<<endl;
	cout<<"Lagu favorit : "<<nama[0][1]<<endl;
	cout<<"Lagu favorit : "<<nama[1][0]<<endl;
	cout<<"Lagu favorit : "<<nama[1][1]<<endl;
	cout<<"Lagu favorit : "<<nama[2][0]<<endl;
	cout<<"Lagu favorit : "<<nama[2][1]<<endl;
	cout<<"Lagu favorit : "<<nama[3][0]<<endl;
	cout<<"Lagu favorit : "<<nama[3][1]<<endl;
	cout<<"Lagu favorit : "<<nama[4][0]<<endl;
	cout<<"Lagu favorit : "<<nama[4][1]<<endl;
	cout<<"Lagu favorit : "<<nama[5][0]<<endl;
	cout<<"Lagu favorit : "<<nama[5][1]<<endl;
	
	cout<<"Menampilkan dengan menggunakan for "<<endl;
	for(int i = 0; i<6; i++)
	{
		for(int j =0; j<2; j++)
		{
			cout<<"Lagu favorit[" << i << "][" << j << "] = "<<nama[i][j]<<endl;
		}
	}
	
	system("pause");
	return 0;
}
