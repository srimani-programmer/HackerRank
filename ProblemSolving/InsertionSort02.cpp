#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int size;
    cin>>size;
    vector<int> v;

    for(int i=0;i<size;i++){
        int val;
        cin>>val;
        v.push_back(val);
    }

    for(int i = 1; i < size; i++){
              int j = i - 1;
                while(v[j] > v[j+1]){
                        int temp = v[j+1];
                        v[j+1] = v[j];
                        v[j] = temp;
                        j--;
                }
                for(int i = 0; i < size; i++){
                        cout << v[i] << " ";
                }
                cout << endl;
        }

    return 0;
}