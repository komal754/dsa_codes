#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	vector<int> spiralOrder(vector<vector<int>>& matrix) {
		vector<int>ans;
		int count = 0;
		int row = matrix.size();
		int col = matrix[0].size();
		int total = row * col;

		int startingrow = 0;
		int startingcol = 0;
		int endingrow = row - 1;
		int endingcol = col - 1;

		while (count < total) {

			for (int index = startingcol; count < total && index <= endingcol; index++) {
				ans.push_back(matrix[startingrow][index]);
				count++;
			}
			startingrow++;

			for (int index = startingrow; count < total && index <= endingrow; index++) {
				ans.push_back(matrix[index][endingcol]);
				count++;
			}
			endingcol--;


			for (int index = endingcol; count < total && index >= startingcol; index--) {
				ans.push_back(matrix[endingrow][index]);
				count++;
			}
			endingrow--;

			for (int index = endingrow; count < total && index >= startingrow; index--) {
				ans.push_back(matrix[index][startingcol]);
				count++;
			}
			startingcol++;

		}
		return ans;


	}
};
















