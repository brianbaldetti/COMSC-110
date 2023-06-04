//
//  main.cpp
//  OverloadedHospital
//  calculates the bill for a hospital stay
//  Created by brian on 3/17/22.
//
#include <iostream>
using namespace std;

double hospitalBill(int, double, double, double);
double hospitalBill(double, double);

int main()
{
    char patientType = 'c';
    int days = -1;
    double dailyRate = -1, hospitalServices = -1, medication = -1;
    
    do
    {
        cout << "Enter 'I' if you where an inpatient, or enter 'O' if you where an outpatient: ";
        cin >> patientType;
        
        switch (patientType)
        {
            case 'I':
            case 'i':
                do
                {
                    cout << "How many days did you stay in the hospital: ";
                    cin >> days;
                    if (days < 0)
                        cout << "Enter a valid number of days!" << endl;
                } while (days < 0);
                
                do
                {
                    cout << "What is was the daily rate for your stay: ";
                    cin >> dailyRate;
                    if (dailyRate < 0)
                        cout << "Enter a valid daily rate!" << endl;
                } while (dailyRate < 0);
                
                do
                {
                    cout << "What was the cost of hospital services: ";
                    cin >> hospitalServices;
                    if (hospitalServices < 0)
                        cout << "Enter a valid cost of hospital services!" << endl;
                } while (hospitalServices < 0);
                    
                do
                {
                    cout << "What is the cost of the hospital medications: ";
                    cin >> medication;
                    if (medication < 0)
                        cout << "Enter a valid cost for medication!" << endl;
                } while (medication < 0);
                
                cout << hospitalBill(days, dailyRate, hospitalServices, medication) << endl;
                break;
                
            case 'O':
            case 'o':
                do
                {
                    cout << "What was the cost of hospital services: ";
                    cin >> hospitalServices;
                    if (hospitalServices < 0)
                        cout << "Enter a valid cost of hospital services!" << endl;
                } while (hospitalServices < 0);
                    
                do
                {
                    cout << "What is the cost of the hospital medications: ";
                    cin >> medication;
                    if (medication < 0)
                        cout << "Enter a valid cost for medication!" << endl;
                } while (medication < 0);
                    
                cout << hospitalBill(hospitalServices, medication) << endl;
                break;
                
            default:
                cout << "Enter a valid key!" << endl;
                break;
        }
    } while (patientType != 'I' && patientType != 'i' && patientType != 'O' && patientType != 'o');
    
    return 0;
}

double hospitalBill(int days, double dailyRate, double services, double medication)
{
    return (days * dailyRate) + services + medication;
}

double hospitalBill(double services, double medication)
{
    return services + medication;
}

