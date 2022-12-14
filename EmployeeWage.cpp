//UC1_Check employee is present or absent
//UC2_Get Daily Employee Wage
//UC3_Add Part and Full-time Daily Employee Wage
//UC4_Solve Using Switch Case
//UC5_Calculate Wage For a Month
//UC6_Condition For Reaching Limit of Working Hours (100 Hrs.) OR Days(20 days) In a Month 

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

        void getMonthlyWage(){
            int wagePerHr;
    int fullDayHr;
    int halfDayHr;
    int fullDaySal; 
    int halfDaySal;
    int workingDaysInMonth;

            wagePerHr = 20;
            fullDayHr = 8;
            halfDayHr = 4;
            fullDaySal = wagePerHr * fullDayHr;
            halfDaySal = wagePerHr * halfDayHr;
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
                        salPerDay = halfDaySal;
                        workingHrs = halfDayHr;
                        cout<<"DAY "<<day<<"==> Employee is Present for HALF Day\n";
                        cout<<"Salary is $"<<salPerDay<<endl;
                        break;
                    case 2:
                        salPerDay = fullDaySal;
                        workingHrs = fullDayHr;
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

int main(){
    getMonthlyWage();
    return 0;
}