#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, i;
    cout << "Enter number of elements in an array \n"; 
    cin >> n;
    
    int arr[n];
    
    cout << "Enter values in an array \n";
    
    for (i = 0; i < n; i++) { 
        cin >> arr[i];
    }
    
   
    int max         = INT_MIN;
    int second_max  = INT_MIN;
  
   
    for (i = 0; i < n; i++) { 
        if(arr[i] > max) {
           second_max = max;
           max        = arr[i];
        }
 
        if(arr[i] < max && arr[i] > second_max) {
            second_max = arr[i];
        }
    }
    cout << "Second highest number in an unsorted array is " << second_max;
    return 0;
}