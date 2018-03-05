// NQueens.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CNQueens.h"

#include <iostream>
#include <sstream>
#include <chrono>
#include "NQueens.h"

void PrintResult(vector<string>& result)
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

void TimeSolver(int n)
{
    auto start = std::chrono::high_resolution_clock::now();

    vector<string> result = CNQueens::SolveNQueens(n);

    auto elapsed = std::chrono::high_resolution_clock::now() - start;
    long long milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(elapsed).count();
    cout << "Solving for " << n << " took: " << milliseconds << "ms. Results: " << result.size() << endl;
}

int main()
{
    TimeSolver(1);
    TimeSolver(2);
    TimeSolver(3);
    TimeSolver(4);
    TimeSolver(5);
    TimeSolver(6);
    TimeSolver(7);
    TimeSolver(8);
    TimeSolver(9);
    TimeSolver(10);
    TimeSolver(11);
    TimeSolver(12);
    TimeSolver(13);
    TimeSolver(14);
    TimeSolver(15);

    cout << "Presiones para continuar";
    string line;
    cin >> line;

    return 0;
}

