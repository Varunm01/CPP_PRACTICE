#include <iostream>

using namespace std;
int main() {
      
    string s1, s2, s3;
    cin >> s1 >> s2;

    int size1, size2, j;
    size1 = s1.size();
    size2 = s2.size();
    j = 0;


    for (int i = 0; i < size1; i++) {
        if (j < size2 and s2[j] == s1[i]) {
            j++;
        }
    }

    if(j == size2-1){
        cout << "IS A SUBSTRING";
    }
}