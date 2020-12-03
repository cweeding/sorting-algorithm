
#include <iostream>
#include <string>
using namespace std;

///////////////////////////////////////////////////////////////////////////////
// radixSort
///////////////////////////////////////////////////////////////////////////////
template <class ItemType>
void radixSort(ItemType theArray[], int n, int d)
{
  string kString;
  int k;
  int index;

  for (int j = d; j > 0; j--)
  {
    string group0[n];
    string group1[n];
    string group2[n];
    string group3[n];
    string group4[n];
    string group5[n];
    string group6[n];
    string group7[n];
    string group8[n];
    string group9[n];
    int counter0 = 0;
    int counter1 = 0;
    int counter2 = 0;
    int counter3 = 0;
    int counter4 = 0;
    int counter5 = 0;
    int counter6 = 0;
    int counter7 = 0;
    int counter8 = 0;
    int counter9 = 0;

    cout << "\narray: ";
    for (int i=0; i<n; i++)
      cout << theArray[i] << " ";

    for (int i = 0; i < n; i++)
    {
      kString = theArray[i].at(j-1);
      k = stoi(kString);
      cout << "\n" << j << " digit: k -> " << k;
      
      if (k == 0)
      {
        group0[counter0] = theArray[i];
        counter0++;
      }
      else if (k == 1)
      {
        group1[counter1] = theArray[i];
        counter1++;
      }
      else if (k == 2)
      {
        group2[counter2] = theArray[i];
        counter2++;
      }
      else if (k == 3)
      {
        group3[counter3] = theArray[i];
        counter3++;
      }
      else if (k == 4)
      {
        group4[counter4] = theArray[i];
        counter4++;
      }
      else if (k == 5)
      {
        group5[counter5] = theArray[i];
        counter5++;
      }
      else if (k == 6)
      {
        group6[counter6] = theArray[i];
        counter6++;
      }
      else if (k == 7)
      {
        group7[counter7] = theArray[i];
        counter7++;
      }
      else if (k == 8)
      {
        group8[counter8] = theArray[i];
        counter8++;
      }
      else
      {
        group9[counter9] = theArray[i];
        counter9++;
      }
    }

    index = 0;
    for (int tempIndex = 0; tempIndex < counter0; tempIndex++)
    {
      theArray[index] = group0[tempIndex];
      index++;
    }
    for (int tempIndex = 0; tempIndex < counter1; tempIndex++)
    {
      theArray[index] = group1[tempIndex];
      index++;
    }
    for (int tempIndex = 0; tempIndex < counter2; tempIndex++)
    {
      theArray[index] = group2[tempIndex];
      index++;
    }
    for (int tempIndex = 0; tempIndex < counter3; tempIndex++)
    {
      theArray[index] = group3[tempIndex];
      index++;
    }
    for (int tempIndex = 0; tempIndex < counter4; tempIndex++)
    {
      theArray[index] = group4[tempIndex];
      index++;
    }
    for (int tempIndex = 0; tempIndex < counter5; tempIndex++)
    {
      theArray[index] = group5[tempIndex];
      index++;
    }
    for (int tempIndex = 0; index < counter6; tempIndex++)
    {
      theArray[index] = group6[tempIndex];
      index++;
    }
    for (int tempIndex = 0; tempIndex < counter7; tempIndex++)
    {
      theArray[index] = group7[tempIndex];
      index++;
    }
    for (int tempIndex = 0; tempIndex < counter8; tempIndex++)
    {
      theArray[index] = group8[tempIndex];
      index++;
    }
    for (int tempIndex = 0; tempIndex < counter9; tempIndex++)
    {
      theArray[index] = group9[tempIndex];
      index++;
    }
  }
}

///////////////////////////////////////////////////////////////////////////////
// radixSortTester MAIN
///////////////////////////////////////////////////////////////////////////////
int main()
{
  string radixArray[] = {"14", "10", "23", "08", "05", "31", "12", "11", "90"};
  int n = 9;
  int d = 2;

  cout << "\nSORTING ALGORITHM TESTS\n";
  cout << "\nTest Array: ";
  for (int i=0; i<n; i++)
    cout << radixArray[i] << " ";
  cout << "\nSize of quickArray should be 9 -> " << n << endl;
  cout << "\nThe result by Radix Sort\n";
  radixSort(radixArray, n, d);
  cout << "Sorted Array: " <<;
  for (int i=0; i<n; i++)
    cout << radixArray[i] << " ";
  cout << endl;

  return 0;
}