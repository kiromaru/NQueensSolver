#pragma once

#include <string>
#include <vector>

using namespace std;

class CNQueens
{
public:
    static vector<string> SolveNQueens(int n);

    static long long rejectedVariations;

private:
    static void SimpleSolver(vector<string>& result, vector<int>& board, int n);
};

