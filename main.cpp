#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdio>

using namespace std

int Part1(vector<int>& inputFileDay2)
{
    int complete = 0;
    int min = 0;
    int w = 0;
    int l = 0;
    int h = 0;
    for (i = 0, i != end, i++)
        if (input != x)
            stoi = w;
        else if
            stoi = l;
        else if
            stoi = h;
            if (w <= l <= h or w <= h <= l)
                w = min;
            else if(l <= w <= h or l <= h <= w)
                l = min;
            else if(h <= w <= l or h <= l <= w)
                h = min;

    complete = min + (2*l*w) + (2*h*w) + (2*h*w)

                i

        paper = (2*l*w) + (2*l*h) + (2*h*w)


}

int Part2(vector<int>%  )

vector<int> file_input(string inFileName)
{
    // Create a vector array for the file
    vector<string> fileContents;
    // Define line
    string line;
    // Name a variable for the file
    ifstream inFile;
    // Open the Day 1 Input File
    inFile.open (inFileName);
    // a loop that iterates to write the file to an array
    while (inFile)
    {
        getline(inFile, line);
    }
    // Close the File
    inFile.close();
    return fileContents;

int main ()
{
    // converts file into vector
    vector<string> inputFileDay2 = file_input("input_day02.txt");
    // outputs two values that add to 2020 and multiplies them
    printf("Day 2 Part 1's Result is %s \n", to_string(Part1(vectorFileDay1));
    // outputs three values that add to 200 and multiplies the
    printf("Day 2 Part 2's Result is %s \n", to_string(Part2(vectorFileDay1));

    return 0;