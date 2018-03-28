// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Employee_Fees.cpp
// Last Modification Date: 25/02/2018
// Author1 and ID and Group: 20170021 G1
// Author2 and ID and Group: 20170003 G1
// Author3 and ID and Group: 20170004 G1
// Teaching Assistant: Eldesoky



#include <iostream>

using namespace std;

int main()
{
    string employee_name,portal,choice;
    float hour_pay=16.78,addition_hours,withheld=(0.06+0.05+0.14),salary=hour_pay*40;
    cout<< "Please Press Start !!! : " ;
    cin>>choice;
    cout<<endl;




    while(choice=="start"){
    cout<<"Please Enter Your name : " ;
    cin>>employee_name;
    cout<<endl;


    cout<<"Your Weekly Salary Before withheld is  : " <<salary<<endl;
    cout<<endl;

    cout<<"Your Weekly Salary After withheld is  : " << (salary*withheld)-10<<endl;
    cout<<endl;



        cout<<"Please Enter Number of hours : ";
        cin>>addition_hours;
        cout<<endl;

        addition_hours=addition_hours*25.17;
        salary=(salary*withheld-10)+addition_hours;

        cout<<"Your Salary After Adding additional hours is : " << salary<<endl;
        cout<<endl;

        cout<< "Do you have three or more dependents : ";
        cin>>portal;
        cout<<endl;

        if (portal=="yes"){
            cout<< "Your new Salary is : " << salary-35;
            cout<<endl;
        }

        if(portal=="no"){
            cout<< "Your salary is : " <<salary;
            cout<< "\n";
        }

        cout<< "Do you want to calculate again : " ;
        cin>>choice;
        cout<<endl;
    }

    cout<<endl;

    if (choice=="no"){
        cout<< "Bye Bye !!!!! ";
    }












    return 0;
}
