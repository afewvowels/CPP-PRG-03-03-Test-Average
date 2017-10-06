//
//  main.cpp
//  PRG-3-3-Test-Average
//
//  Created by Keith Smith on 10/6/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a program that asks for five test scores. The program should calculate the average
//  test score and display it. The number displayed should be formatted in fixed-point
//  notation, with one decimal point of precision.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declare test scores as ints because
    // test scores only come in whole numbers.
    // Will static cast to float for division later.
    int intTestScore1,
        intTestScore2,
        intTestScore3,
        intTestScore4,
        intTestScore5;
    
    // Create float for test score average.
    float fltTestScoreAverage;
    
    // Configure decimal precision for single point of precision
    cout << setprecision(1) << fixed << showpoint;
    
    // Enter first test score + data validation
    cout << "Please enter the first test score: " << endl;
    cin >> intTestScore1;
    while(!cin || intTestScore1 < 0 || intTestScore1 > 100)
    {
        cout << "Please enter a valid test score between 0 and 100 points:\n";
        cin.clear();
        cin.ignore();
        cin >> intTestScore1;
    }
    
    // Calculate average test score as a running average.
    fltTestScoreAverage = static_cast<float>(intTestScore1) / 1;
    
    cout << "The average test score is: " << endl;
    cout << fltTestScoreAverage;
    
    
    // Enter second test score
    cout << endl << "Please enter the second test score: " << endl;
    cin >> intTestScore2;
    while(!cin || intTestScore2 < 0 || intTestScore2 > 100)
    {
        cout << "Please enter a valid test score between 0 and 100 points:\n";
        cin.clear();
        cin.ignore();
        cin >> intTestScore2;
    }
    
    fltTestScoreAverage = (static_cast<float>(intTestScore1) +
                           static_cast<float>(intTestScore2))
    / 2.0f;
    
    cout << "The average test score is: " << endl;
    cout << fltTestScoreAverage;
    
    // Enter third test score
    cout << endl << "Please enter the third test score: " << endl;
    cin >> intTestScore3;
    while(!cin || intTestScore3 < 0 || intTestScore3 > 100)
    {
        cout << "Please enter a valid test score between 0 and 100 points:\n";
        cin.clear();
        cin.ignore();
        cin >> intTestScore3;
    }
    
    fltTestScoreAverage = (static_cast<float>(intTestScore1) +
                           static_cast<float>(intTestScore2) +
                           static_cast<float>(intTestScore3))
    / 3.0f;
    
    cout << "The average test score is: " << endl;
    cout << fltTestScoreAverage;
    
    // Enter fourth test score
    cout << endl << "Please enter the fourth test score: " << endl;
    cin >> intTestScore4;
    while(!cin || intTestScore4 < 0 || intTestScore4 > 100)
    {
        cout << "Please enter a valid test score between 0 and 100 points:\n";
        cin.clear();
        cin.ignore();
        cin >> intTestScore4;
    }
    
    fltTestScoreAverage = (static_cast<float>(intTestScore1) +
                           static_cast<float>(intTestScore2) +
                           static_cast<float>(intTestScore3) +
                           static_cast<float>(intTestScore4))
    / 4.0f;
    
    cout << "The average test score is: " << endl;
    cout << fltTestScoreAverage;
    
    // Enter fifth test score
    cout << endl << "Please enter the fifth test score: " << endl;
    cin >> intTestScore5;
    while(!cin || intTestScore5 < 0 || intTestScore5 > 100)
    {
        cout << "Please enter a valid test score between 0 and 100 points:\n";
        cin.clear();
        cin.ignore();
        cin >> intTestScore5;
    }
    
    fltTestScoreAverage = (static_cast<float>(intTestScore1) +
                           static_cast<float>(intTestScore2) +
                           static_cast<float>(intTestScore3) +
                           static_cast<float>(intTestScore4) +
                           static_cast<float>(intTestScore5))
    / 5.0f;
    
    // Format and display scores entered and show total average
    cout << "The first test score was: " << endl;
    cout << "(" << setw(4) << intTestScore1 << ")" << endl;
    
    cout << "The second test score was: " << endl;
    cout << "(" << setw(4) << intTestScore2 << ")" << endl;
    
    cout << "The third test score was: " << endl;
    cout << "(" << setw(4) << intTestScore3 << ")" << endl;
    
    cout << "The fourth test score was: " << endl;
    cout << "(" << setw(4) << intTestScore4 << ")" << endl;
    
    cout << "The fifth test score was: " << endl;
    cout << "(" << setw(4) << intTestScore5 << ")" << endl;
    
    cout << "The average test score is: " << endl;
    cout << "(" << setw(4) << fltTestScoreAverage << ")";
    
    return 0;
}


