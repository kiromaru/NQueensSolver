// NQueens.cpp

#include "stdafx.h"
#include "CNQueens.h"

#include <iostream>
#include <sstream>
#include <chrono>
#include "NQueens.h"

void ShowResult(vector<string>& result)
{
    vector<string>::iterator iter;
    int count = 0;

    for (iter = result.begin(); iter != result.end(); iter++)
    {
        count++;
        cout << "Result " << count << ":" << endl;

        string& board = *iter;
        stringstream ss(board);
        string row;
        while (std::getline(ss, row, ','))
        {
            cout << "'" << row << "'" << endl;
        }

        cout << endl;
    }
}

void MeasureSolver(int n, bool showResult = false)
{
    auto start = std::chrono::high_resolution_clock::now();

    vector<string> result = CNQueens::SolveNQueens(n);

    auto elapsed = std::chrono::high_resolution_clock::now() - start;
    long long milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(elapsed).count();
    cout << "Solving for " << n << " took: " << milliseconds << "ms. Rejected " << CNQueens::rejectedVariations << " variations. Results: " << result.size() << endl;

    if (showResult)
    {
        ShowResult(result);
    }
}

int main()
{
    MeasureSolver(1);
    MeasureSolver(2);
    MeasureSolver(3);
    MeasureSolver(4);
    MeasureSolver(5);
    MeasureSolver(6);
    MeasureSolver(7);
    MeasureSolver(8);
    MeasureSolver(9);
    MeasureSolver(10);
    MeasureSolver(11);
    MeasureSolver(12);
    MeasureSolver(13);
    MeasureSolver(14);
    MeasureSolver(15);
    MeasureSolver(16);
    MeasureSolver(17);
    MeasureSolver(18);
    MeasureSolver(19);
    MeasureSolver(20);

    cout << "Press enter to continue. ";
    string line;
    cin >> line;

    return 0;
}

