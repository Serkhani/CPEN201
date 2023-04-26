#include <iostream>

using namespace std;

int main()
{
    double sum;
    double score = 0;
    char grade;
    double totalAvg= 0;

    for (int c = 0; c<10; c++){
        sum = 0;
        for(int i = 0; i < 5; i++){
            cout<<"Enter score: ";cin>>score;
            if (score > 100){
                cout<<"Invalid score: "<<score<<endl;
                i--;
                continue;
            }
            sum = sum + score;
        }
        int avg = sum/5;
        switch(avg){
    case 90 ... 100:
        grade = 'A';
        break;
    case 80 ... 89:
        grade = 'B';
        break;
    case 70 ... 79:
        grade = 'C';
        break;
    case 60 ... 69:
        grade = 'D';
        break;
    default:
        grade = 'F';
        break;
    }
        cout<<"Person "<<c+1<<endl<<"average: "<<avg<<endl<<"grade: "<<grade<<endl;
        totalAvg = totalAvg + avg;
    }
    int classAvg = totalAvg/10;
    switch(classAvg){
    case 90 ... 100:
        grade = 'A';
        break;
    case 80 ... 89:
        grade = 'B';
        break;
    case 70 ... 79:
        grade = 'C';
        break;
    case 60 ... 69:
        grade = 'D';
        break;
    default:
        grade = 'F';
        break;
    }
    cout<<"Class "<<endl<<"average: "<<classAvg<<endl<<"grade: "<<grade;

    return 0;
}
