#include <iostream>
using namespace std;
int main() {
	int size;
	int n;
	int l,w;
    cin >> size;
    cin >> n;
	while(n--){
		cin >> l >> w;

		if(l < size || w < size){
			cout << "UPLOAD ANOTHER" << endl;
			continue;
		}

		if(l > size || w > size){
			cout << "CROP IT" << endl;
			continue;
		}

		cout << "ACCEPTED" << endl;
	}
	return 0;
}
