//UC1_Check employee is present or absent
//UC2_Get Daily Employee Wage
//UC3_Add Part and Full-time Daily Employee Wage
//UC4_Solve Using Switch Case
//UC5_Calculate Wage For a Month
//UC6_Condition For Reaching Limit Of Working Hours (100 Hrs.) OR Days(20 days) In a Month 
//UC7_Create Class Methods to Compute Employee Wage

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

class EmployeeWage{
    public:
        void getMonthlyWage(){
            emp e;
            e.wagePerHr = 20;
            e.fullDayHr = 8;
            e.halfDayHr = 4;
            e.fullDaySal = e.wagePerHr * e.fullDayHr;
            e.halfDaySal = e.wagePerHr * e.halfDayHr;
            int salPerDay = 0;
            int salPerMonth = 0;
            int workingHrs = 0;
            int maxWorkingHrs = 0;
            
            srand(time(0));
            for(int day = 1, workingHrs = 0; day <= 20
                        && maxWorkingHrs <= 100; day++, maxWorkingHrs += workingHrs){
                int rnd = (rand() % 3);
                
                switch(rnd){
                    case 0:
                        salPerDay = 0;
                        workingHrs = 0;
                        cout<<"DAY "<<day<<"==> Employee is ABSENT\n";
                        cout<<"Salary is $"<<salPerDay<<endl;
                        break;
                    case 1:
                        salPerDay = e.halfDaySal;
                        workingHrs = e.halfDayHr;
                        cout<<"DAY "<<day<<"==> Employee is Present for HALF Day\n";
                        cout<<"Salary is $"<<salPerDay<<endl;
                        break;
                    case 2:
                        salPerDay = e.fullDaySal;
                        workingHrs = e.fullDayHr;
                        cout<<"DAY "<<day<<"==> Employee is Present for FULL Day\n";
                        cout<<"Salary is $"<<salPerDay<<endl;
                        break;  
                    default:
                        break;          
                }
                cout<<endl;
                salPerMonth += salPerDay;
            }
            cout<<"Employee Wage of a Month is: $"<<salPerMonth;    
        }
};

int main(){
    EmployeeWage object;
    object.getMonthlyWage();
    return 0;
}