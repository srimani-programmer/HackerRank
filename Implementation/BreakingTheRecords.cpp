#include<iostream>

using namespace std;

int main(){
    int size;
    cin>>size;
    int score[size],highestscore[size],lowestscore[size];

    for(int i=0;i<size;i++)
        cin>>score[i];

    highestscore[0] = score[0];

    for(int i=0;i<size - 1;i++){
        if(highestscore[i] > score[i+1])
            highestscore[i+1] = highestscore[i];
        else
            highestscore[i+1] = score[i+1];
    }
    lowestscore[0] = score[0];
    for(int i=0;i<size-1;i++){
        if(lowestscore[i] > score[i+1])
            lowestscore[i+1] = score[i+1];
        else
            lowestscore[i+1] = lowestscore[i];
    }
    int lowscore = 0;
    int highscore = 0;
    
    for(int i=0;i<size-1;i++){
        if(highestscore[i] < highestscore[i+1])
            highscore++;
        
        if(lowestscore[i] > lowestscore[i+1])
            lowscore++;
    }

    cout<<highscore<<" "<<lowscore<<endl;

    return 0;
    
}