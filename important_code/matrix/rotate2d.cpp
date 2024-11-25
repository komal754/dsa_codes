//-----rotate right
// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int row=matrix.size();
//         int col=matrix[0].size();
// //transpose
//      for(int i=0;i<row;i++)
//      {
//         for(int j=0;j<=i;j++){
//             swap(matrix[i][j],matrix[j][i]);
//         }
//      }
//         for(int i=0;i<row;i++){
// //reverses elements of i row
//             reverse(matrix[i].begin(),matrix[i].end());
//         }

//     }
// };


//--rotate left

// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int row=matrix.size();
//         int col=matrix[0].size();
// //transpose
//      for(int i=0;i<row;i++)
//      {
//         for(int j=0;j<=i;j++){
//             swap(matrix[i][j],matrix[j][i]);
//         }
//      }
//         for(int i=0;i<col;i++){
// //reverses elements of i column
//             reverse(matrix.begin(),matrix.end());
//         }

//     }
// };