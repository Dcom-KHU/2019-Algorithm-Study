#include <iostream>
using namespace std;
int main(){
    int T;
    int sum = 0;
    char c;
    cin >> T;
    while(T--){
        cin >> c;
        sum += (c-'0');
    }
    cout << sum;
    return 0;
}