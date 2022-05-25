#include <iostream>
#include <string>
using namespace std;
int main() {
    int n, s=0, k=0;
    string matn;
    getline(cin,matn);
    n=matn.length();
    for (int i=0; i<n; i++) {
        if (matn[i]=='a') {
            s+=1;
        }
        if (matn[i]=='.') {
            k+=1;
        }
    }
    cout << "a harfidan " << s << "ta \n. dan " << k << "ta qatnashgan.";
    return 0;
}
