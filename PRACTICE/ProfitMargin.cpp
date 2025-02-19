#include <iostream>

using namespace std;
int main(){

    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int margin = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++){
            if(arr[j] - arr[i] > margin)
                margin = arr[j] - arr[i];
        }
    }
    
    cout << "Margin: "<< margin;
    return 0;
}


// l = [6,1,2,3,4,5]

// min = l[0]
// max_val = 0
// for i in l[1:]:
//     if i < min:
//         min = i
//     else:
//         max_val= max(max_val,i-min)
// print(max_val)
