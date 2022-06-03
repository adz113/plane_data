// planes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    struct Planes {
        int total_landed;
        int total_departed;
        int greatest_landed;
        int least_landed;
    };
    const int months = 12;
    Planes planeData[12];
    vector <int> planes_landed;
    
    for (int i = 0; i < months; i++) {
        cout << "Enter the total number of planes landed in month " << i + 1 << ": "; 
        cin >> planeData[i].total_landed;
        cout << "Enter the total number of planes departed in month " << i + 1 << ": ";
        cin >> planeData[i].total_departed;
        cout << "Enter the greatest number of planes that landed in a given day in month " << i + 1 << ": ";
        cin >> planeData[i].greatest_landed;
        cout << "Enter the least number of planes that landed in a given day in month " << i + 1 << ": ";
        cin >> planeData[i].least_landed;
        cout << endl;
    }

    int totalLanded = 0;
    for (int j = 0; j < months; j++) {
        totalLanded += planeData[j].total_landed;
    }
    int averageLanded = totalLanded / months;
    cout << "The average monthly number of landing planes is: " << averageLanded << endl;

    int totalDeparted = 0;
    for (int k = 0; k < months; k++) {
        totalDeparted += planeData[k].total_departed;
    }
    int averageDeparted = totalDeparted / months;
    cout << "The average monthy number of landing planes is: " << averageDeparted << endl;

    cout << "The total number of landed planes this year is: " << totalLanded << endl;
    cout << "The total numberof departed planes this year is: " << totalDeparted << endl;

    int max = planeData[0].greatest_landed;
    int greatestMonth = 1;
    for (int g = 0; g < months; g++) {
        if (planeData[g].greatest_landed > max) {
            max = planeData[g].greatest_landed;
            greatestMonth = (g + 1);
        }
    }
    cout << "The greatest number of planes that landed on any one day is: " << max << " and it occurred in month: " << greatestMonth << endl;

    int min = planeData[0].least_landed;
    int leastMonth = 1;
    for (int l = 0; l < months; l++) {
        if (planeData[l].least_landed < min) {
            min = planeData[l].least_landed;
            leastMonth = (l + 1);
        }
    }
    cout << "The least number of planes that landed on any one day is: " << min << " and it occured in month: " << leastMonth << endl;

}


