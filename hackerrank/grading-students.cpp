#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the gradingStudents function below.
 */
vector<int> gradingStudents(vector<int> grades) {
    /*
     * Write your code here.
     */
     vector<int>::iterator it;
     vector<int> result;
    for(it = grades.begin(); it != grades.end(); it++){
        int number = (*it/5)*5;
        if(number== *it){
            number = number;
        } else {
            number = number + 5;
        }
        if(*it>37 && *it<=40){
            *it = number;
        } else if(( number- *it <3) && *it>37){
            *it = number;            
        }
        result.push_back(*it);
    }
    return result;
    
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> grades(n);

    for (int grades_itr = 0; grades_itr < n; grades_itr++) {
        int grades_item;
        cin >> grades_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        grades[grades_itr] = grades_item;
    }

    vector<int> result = gradingStudents(grades);

    for (int result_itr = 0; result_itr < result.size(); result_itr++) {
        fout << result[result_itr];

        if (result_itr != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
