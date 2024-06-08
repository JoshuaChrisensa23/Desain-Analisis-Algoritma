#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 1e9;
int n;
int grp[1000][1000];
int jlr[100];
int mns = INF;

void shrt(){
    int ct[n];
    for (int i = 0; i < n; ++i){
    	ct[i] = i;
	} 

    do {
        int curr = 0;
        for (int i = 1; i < n; ++i) {
            curr += grp[ct[i - 1]][ct[i]];
        }
        curr += grp[ct[n - 1]][ct[0]];
        if (curr < mns) {
            mns = curr;
            copy(ct, ct + n, jlr);
        }
    } while (next_permutation(ct + 1, ct + n));
}

int main() {
    cout << "Masukkan Jumlah Kota: ";
	cin >> n;

    cout << "Nilai Cost Matrix:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Cost Element Baris ke-: " << i + 1 << "\n";
        for (int j = 0; j < n; ++j) {
            cin >> grp[i][j];
        }
        cout<<endl;
    }

    cout << "Cost List:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << grp[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;
	
	shrt();
	
    cout << endl << "Jalur Terpendek: "<<endl;
    for (int i = 0; i < n; ++i) {
        cout << jlr[i] + 1 << " ";
    }
    cout << jlr[0] + 1 << "\n";

    cout << endl << "\nmnsimum Cost: " << mns << endl;

    return 0;
}
