#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'arrayManipulation' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY queries
 */

long arrayManipulation(int n, vector<vector<int>> queries)
{
    long max = 0;
    // create an iterator for queries

    long arr[queries.size()][n];

    // iterate through queries
    for (int row = 0; row < queries.size(); row++)
    {
        cout << "executing row:-------------------- " << row << endl;
        for (int col = 1; col <= n; col++)
        {
            if (row == 0)
            {
                if (col >= queries[row][0] && col <= queries[row][1])
                {
                    arr[row][col] = queries[row][2];
                    max = max > arr[row][col] ? max : arr[row][col];
                    // cout << "arr[" << row<<"]["<<col<<"] ="<<arr[row][col]  << " max " << max<< endl;
                }
                else
                {
                    arr[row][col] = 0;
                    // cout << "arr[" << row<<"]["<<col<<"] ="<<arr[row][col]  << " max " << max<< endl;
                }
            }
            else
            {
                if (col < queries[row][0])
                {
                    long oldQ = queries[row - 1][2];
                    long newQ = queries[row][2];
                    arr[row][col] = arr[row - 1][col];
                    max = max > arr[row][col] ? max : arr[row][col];
                    // cout << "arr[" << row<<"]["<<col<<"] ="<<arr[row][col]<< " old arr: "<<arr[row-1][col]  << " max " << max<< " oldQ: "<<oldQ<<" newQ:"<<newQ << endl;
                }
                else
                {
                    if (col <= queries[row][1])
                    {

                        long oldQ = queries[row - 1][2];
                        long newQ = queries[row][2];
                        arr[row][col] = arr[row - 1][col] + queries[row][2];
                        max = max > arr[row][col] ? max : arr[row][col];
                        // cout << "arr[" << row<<"]["<<col<<"] ="<<arr[row][col]<< " old arr: "<<arr[row-1][col]  << " max " << max<< " oldQ: "<<oldQ<<" newQ:"<<newQ << endl;
                    }
                    else
                    {
                        arr[row][col] = arr[row - 1][col];
                        max = max > arr[row][col] ? max : arr[row][col];
                    }
                }
            }
        }
        // cout<< "max: "<<max<<  " in row: "<< row << endl;
    }
    // cout << max << endl;
    return max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int m = stoi(first_multiple_input[1]);

    vector<vector<int>> queries(m);

    for (int i = 0; i < m; i++)
    {
        queries[i].resize(3);

        string queries_row_temp_temp;
        getline(cin, queries_row_temp_temp);

        vector<string> queries_row_temp = split(rtrim(queries_row_temp_temp));

        for (int j = 0; j < 3; j++)
        {
            int queries_row_item = stoi(queries_row_temp[j]);

            queries[i][j] = queries_row_item;
        }
    }

    long result = arrayManipulation(n, queries);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}

vector<string> split(const string &str)
{
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
