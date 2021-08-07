#include"NumberGame.h"

void NumberGame::SetInput(int in)// set the given integer A.
{
				a_num = in;
				//cout << in << endl;
}
void NumberGame::ProcessInput()// splitting the integer A into several digits.
{
				while (a_num != 0)
				{
								a.push_back(a_num % 10);
								a_num /= 10;
				}
				sort(a.begin(), a.end());

}
void NumberGame::SetFileName(string str)// set the file name of the file where list S is located.
{
				name = str;
}
void NumberGame::LoadNumberList() //read list S from the file.
{
				input.open(name, ios::in);
}
void NumberGame::PrintAllValid()//print all the valid numbers in S ascendingly
{
				int in;
				computer();
				while (input >> in)
				{
								if (tester(in))
												cout << in << endl;
				}
}
void NumberGame::computer()
{
				int temp = 1;
				int size = a.size();
				vector<int>::iterator index;
				unsigned int mask = 1;
				unsigned int selector = 1;
				int i;
				for (selector = 1; selector <= pow(2, size)-1; selector++)
				{
								for (i = 0; i < size; i++)
								{
												if (selector & mask)
												{
																temp *= a[i];
												}
												mask <<= 1;
								}
								index = find(list.begin(), list.end(), temp);
								if (index == list.end())
												list.push_back(temp);
								mask = 1;
								temp = 1;
				}
				sort(list.begin(), list.end());
				/*for (int i = 0; i < list.size(); i++)
								cout << list[i] << endl;*/
}
bool NumberGame::tester(int t)
{
				vector<int>::iterator index = find(list.begin(), list.end(), t);
				if (index != list.end())
								return 1;
				else
								return 0;
}

void NumberGame::Reset() //reset all variables.
{
				a.clear();
				input.close();
				list.clear();
}
