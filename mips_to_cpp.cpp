#include <iostream>
#include <array>

using namespace std;

int main(){
    int arr[10] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
    int lengthh = sizeof(arr) / sizeof(arr[0]);
    int sum{0};

    for(int i = 0; i < lengthh; i++){
        sum += arr[i];
    }
    cout << "The sum of the 10 first Fibonacci numbers is " << sum << endl;

    return 0;
}