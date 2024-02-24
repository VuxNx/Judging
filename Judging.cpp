#include <bits/stdc++.h>
#include "study_in_pink1.h"

using namespace std;

int main()
{
	bool _flag_ = true;
	for (int i = 1; i < 100; i++)
	{
		string file_name = "C:\\users\\admin\\desktop\\input\\testcase_" + to_string(i) + ".txt";
		string file_sol = "C:\\users\\admin\\desktop\\output\\output_" + to_string(i) + ".txt";
		fstream file_testcase(file_name, ios::in);
		fstream file_output(file_sol, ios::in);
		int EXP1, EXP2, E1;
		int solution;
		int myOutput;
		file_testcase >> EXP1 >> EXP2 >> E1;
		file_output >> solution;
		myOutput = firstMeet(EXP1, EXP2, E1);
		if (myOutput != solution)
		{
			cout << "Don't pass: testcase_" << i << endl;
			_flag_ = false;
		} 
		file_testcase.close();
		file_output.close();
	}
	if (_flag_) cout << "Pass all test.";
	return EXIT_SUCCESS;
}