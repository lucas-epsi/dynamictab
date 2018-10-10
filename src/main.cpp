#include <vector>
#include <iostream>

using namespace std;

	int main(){


	vector<int> tab(3);

	tab[0]=3;
	tab[1]=4;
	tab[2]=5;
	tab.erase(tab.begin()+1);
	cout << tab[0] << " "<< tab[1] <<" "<<tab[2]<<" "<<endl;

	tab.push_back(1000);
	cout << tab[2]<<endl;
	cout << tab.size() <<endl;
	cout << tab[0]<<" "<<tab[1]<<" "<<tab[2]<<" "<<tab[3]<<endl;

	return 0;

}
