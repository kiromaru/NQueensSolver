#pragma once

#include <string>
#include <vector>

using namespace std;

class CNQueens
{
public:
    static vector<string> SolveNQueens(int n);
private:
    static void SimpleSolver(vector<string>& result, vector<int>& board, int n);
};

