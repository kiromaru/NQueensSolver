#include "stdafx.h"
#include "CNQueens.h"

using namespace std;

TEST(NQueens, Solve) {
    CNQueens solver;
    vector<string> solutions = solver.SolveNQueens(1);

    ASSERT_EQ(1, solutions.size());

    solutions = solver.SolveNQueens(2);

    ASSERT_EQ(0, solutions.size());

    solutions = solver.SolveNQueens(3);

    ASSERT_EQ(0, solutions.size());

    solutions = solver.SolveNQueens(4);

    ASSERT_EQ(2, solutions.size());
}