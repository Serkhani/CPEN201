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
        double avg = sum/5;
        if(avg >= 90){
            grade = 'A';
        }
        else if(avg >= 80 && avg < 90){
            grade = 'B';
        }
        else if(avg >= 70 && avg < 80){
            grade = 'C';
        }
        else if (avg >= 60 && avg < 70){
            grade = 'D';
        }
        else{
            grade = 'F';
        }
        cout<<"Person "<<c+1<<endl<<"average: "<<avg<<endl<<"grade: "<<grade<<endl;
        totalAvg = totalAvg + avg;
    }
    double classAvg = totalAvg/10;
    if(classAvg >= 90){
        grade = 'A';
    }
    else if(classAvg >= 80 && classAvg < 90){
        grade = 'B';
    }
    else if(classAvg >= 70 && classAvg < 80){
        grade = 'C';
    }
    else if (classAvg >= 60 && classAvg < 70){
        grade = 'D';
    }
    else{
        grade = 'F';
    }
        cout<<"Class "<<endl<<"average: "<<classAvg<<endl<<"grade: "<<grade;

    return 0;
}
