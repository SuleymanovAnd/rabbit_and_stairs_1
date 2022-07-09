#include <iostream>
using namespace std;
const int k = 3;

int numberOfWays (int n){
    if (n == 0) {return 1;}

    int ways_count = 0;

    int jump = 0;
    if (n < k){jump = n;}
    else { jump = k;}

    for (int i = 1; i <= jump; i++){
        ways_count += numberOfWays (n-i);}
    return ways_count;
}
int main() {
    cout << "hello little rabbit, how many stairs do you want to climb?\n";
    cout << "Enter stairs number: ";
    int n;
    cin >> n;

    cout <<  numberOfWays (n) << " ways for you!";




}