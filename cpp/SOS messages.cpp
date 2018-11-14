/**
Sami’s spaceship crashed on Mars! She sends sequential SOS messages to Earth for help.
Letters in some of the SOS messages are altered by cosmic radiation during transmission. Given the signal
received by Earth as a string, , determine how many letters of Sami’s SOS have been changed by radiation.
Input Format
There is one line of input: a single string, .
Note: As the original message is just SOS repeated times, ’s length will be a multiple of .
Constraints

Output Format
Print the number of letters in Sami’s message that were altered by cosmic radiation.
Sample Input 0
SOSSPSSQSSOR
Sample Output 0
3
Sample Input 1
SOSSOT
Sample Output 1
1
Explanation
Sample 0

S

S
n S 3

1 ≤ |S| ≤ 99
|S| % 3 = 0
S will contain only uppercase English letters

= SOSSPSSQSSOR , and signal length . Sami sent SOS messages (i.e.: ).
Expected signal: SOSSOSSOSSOS
Recieved signal: SOSSPSSQSSOR
We print the number of changed letters, which is .
Sample 1
= SOSSOT , and signal length . Sami sent SOS messages (i.e.: ).
Expected Signal: SOSSOS
Received Signal: SOSSOT
We print the number of changed letters, which is .
S |S| = 12 4 12/3 = 4

3

S |S|

**/

#include <iostream>
#include <string.h>

using namespace std;

int main() {

	int len, i,result=0, count=0;
	string str, ms;
	ms = "SOS";
    getline (cin, str);
	len = str.length();

	for(i=0; i<len/3; i++){
		for(int j=0; j<3; j++){
			if(ms[j] != str[count]){
				result++;
				break;
			}
			count++;
		}
	}
	cout<<result<<endl;

	return 0;
}
