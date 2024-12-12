// This is a simple algorithm that repeatedly iterates through a list,
// comparing adjacent elements and swapping them if they are in the wrong order.

#include <vector>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) 
    cin >> A[i];
    for (int i = n-1; i > 0; i--)
        for (int j = 0; j < i; j++)
            if (A[j]>A[j+1]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
}cout << "Sorted Sequence:\n";
for(int i:A) cout << i << ' ';
} 