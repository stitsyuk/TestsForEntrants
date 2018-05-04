#include<iostream>
#include<string>
using namespace std;

int main()
{
	for (int i = 1; i <= 36; i++)
	{
		system(("tesseract \"D:\\Stick\\Documents\\Farrukh\\TestsForEntrants\\CommandLineForCPlusPlus\\ScannedTests\\Photo" + std::to_string(i) + ".jpg\" \"D:\\Stick\\Documents\\Farrukh\\TestsForEntrants\\CommandLineForCPlusPlus\\Outputs\\Output" + std::to_string(i) + "\"").c_str());
	}
	system("pause");
	return 0;
}