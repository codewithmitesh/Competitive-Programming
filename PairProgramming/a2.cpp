#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){

                for(int j = i; j < n; j++){
                    if(a[j] == b[i]){
                        int temp = a[j];
                        a[j] = a[i];
                        a[i] = temp;
                        count += i + j +2;
                    }
                }
            }
        }
        cout << count <<endl;
    }
    return 0;
}
