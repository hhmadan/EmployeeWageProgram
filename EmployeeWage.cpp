//UC1_Check employee is present or absent
//UC2_Get Daily Employee Wage
//UC3_Add Part and Full-time Daily Employee Wage
//UC4_Solve Using Switch Case

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

typedef struct empWage{
    int wagePerHr;
    int fullDayHr;
    int halfDayHr;
    int fullDaySal;
    int halfDaySal;
    int workingDaysInMonth;
}emp;

void getDailyWage(int *rnd){
    emp e;
    e.wagePerHr = 20;
    e.fullDayHr = 8;
    e.halfDayHr = 4;
    e.fullDaySal = e.wagePerHr * e.fullDayHr;
    e.halfDaySal = e.wagePerHr * e.halfDayHr;
    int salaryPerDay = 0;
    switch(*rnd){
        case 0:
            cout<<"Salary is $"<<salaryPerDay<<endl;
            break;
        case 1:
            salaryPerDay = e.halfDaySal;
            cout<<"Salary is $"<<salaryPerDay<<endl;
            break;
        case 2:
            salaryPerDay = e.fullDaySal;
            cout<<"Salary is $"<<salaryPerDay<<endl;
            break;  
        default:
            break;          
    }
}

void getAttendance(){
    srand(time(0));
    int rnd = (rand() % 3);
    
    if(rnd == 0)
        cout<<"Employee is ABSENT\n";
    else if(rnd == 1)
        cout<<"Employee is Present for HALF Day\n";
    else 
        cout<<"Employee is Present for FULL Day\n";    
    getDailyWage(&rnd);       
}

int main(){
    getAttendance();
    return 0;
}