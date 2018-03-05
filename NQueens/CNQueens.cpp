#include "stdafx.h"
#include "CNQueens.h"


namespace
{
    string BoardToString(vector<int> board, int n)
    {
        string result = "";

        // Rows
        for (int row = 0; row < n; row++)
        {
            // Before position
            for (int column = 0; column < board[row]; column++)
            {
                result.append(".");
            }

            // Position
            result.append("Q");

            // After position
            for (int column = board[row] + 1; column < n; column++)
            {
                result.append(".");
            }

            if (row + 1 != n)
            {
                result.append(",");
            }
        }

        return result;
    }

    bool ValidateVariation(vector<int>& board, int position)
    {

        // Check if adding queen at given position is valid
        int lastRow = static_cast<int>(board.size() - 1);
        for (int row = lastRow; row >= 0; row--)
        {
            // Same column
            if (board[row] == position)
                return false;

            int offset = lastRow - row + 1;
            // diagonal left
            if ((position - offset) == board[row])
                return false;

            // diagonal right
            if ((position + offset) == board[row])
                return false;
        }

        return true;
    }
}

vector<string> CNQueens::SolveNQueens(int n)
{
    vector<int> board;
    vector<string> result;

    SimpleSolver(result, board, n);

    return result;
}

void CNQueens::SimpleSolver(vector<string>& result, vector<int>& board, int n)
{
    if (board.size() == n)
    {
        // Found a result, add to final result
        result.push_back(BoardToString(board, n));
        return;
    }

    // Column iterator
    // Try every valid position in the column.
    for (int column = 0; column < n; column++)
    {
        if (ValidateVariation(board, column))
        {
            vector<int> newVariation;
            newVariation = board;
            newVariation.push_back(column);

            // Go deep
            SimpleSolver(result, newVariation, n);
        }
    }
}

