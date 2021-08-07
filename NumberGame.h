#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>
#include<cmath>

#pragma once

using namespace std;

class NumberGame
{
public:
				void SetInput(int in);// set the given integer A.
				void ProcessInput();// splitting the integer A into several digits.
				void SetFileName(string str);// set the file name of the file where list S is located.
				void LoadNumberList(); //read list S from the file.
				void PrintAllValid(); //print all the valid numbers in S ascendingly
				bool tester(int t);//test if the number is ligle
				void computer();//computer the sum of the number;
				void Reset(); //reset all variables.

private:
				int a_num;
				vector<int> a;
				string name;
				fstream input;
				vector<int> list;
};
