#include<iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    int count=0;
    int size = s.size();
    int j=0;
    for(int i=0;i<size/3;i++){
        
        while(1){
            if(s.at(j+1) == 'O' && s.at(j+2) == 'S' && s.at(j) == 'S')
                break;
            else{
                if(s.at(j) != 'S')
                    count++;
                if(s.at(j+1) != 'O')
                    count++;
                if(s.at(j+2) != 'S')
                    count++;

                break;
            }
        }

        j = j+3;
    }

    cout<<count<<endl;

    return 0;
    
}