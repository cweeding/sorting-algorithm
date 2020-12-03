
#include <iostream>
#include <string>
using namespace std;

const int FIRST = 0;
const int MAX_TREE1 = 9;
///////////////////////////////////////////////////////////////////////////////
// merge
///////////////////////////////////////////////////////////////////////////////
template <class ItemType>
void merge(ItemType theArray[], int first, int mid, int last)
{
   ItemType tempArray[MAX_TREE1-1];
   int first1 = first;
   int last1 = mid;
   int first2 = mid + 1;
   int last2 = last;
   int index = first1;

   while ((first1 <= last1) && (first2 <= last2))
   {
      if (theArray[first1] <= theArray[first2])
      {
         tempArray[index] = theArray[first1];
         first1++;
      }
      else
      {
         tempArray[index] = theArray[first2];
         first2++;
      }
      index++;
   }

   while (first1 <= last1)
   {
      tempArray[index] = theArray[first1];
      first1++;
      index++;
   }

   while (first2 <= last2)
   {
      tempArray[index] = theArray[first2];
      first2++;
      index++;
   }

   for (index = first; index <= last; index++)
   {
      theArray[index] = tempArray[index];
   }
}

///////////////////////////////////////////////////////////////////////////////
// mergeSort
///////////////////////////////////////////////////////////////////////////////
template <class ItemType>
void mergeSort(ItemType theArray[], int first, int last)
{
   int mid;

   if (first < last)
   {
      mid = (first + last) / 2;
      mergeSort(theArray, first, mid);
      mergeSort(theArray, mid+1, last);
      merge(theArray, first, mid, last);
   }
}

///////////////////////////////////////////////////////////////////////////////
// mergeSortTester MAIN
///////////////////////////////////////////////////////////////////////////////
int main()
{
  
  string mergeArray[] = {"14", "10", "23", "08", "05", "31", "12", "11", "90"};

  cout << "\nSORTING ALGORITHM TESTS";
  cout << "\nTest Array: ";
  for (int i=FIRST; i<MAX_TREE1; i++)
    cout << mergeArray[i] << " ";
  cout << "\nSize of mergeArray should be 9 -> " << MAX_TREE1;
  cout << "\nThe result by Merge Sort\n";
  mergeSort(mergeArray, FIRST, MAX_TREE1-1);
  cout << "Sorted Array: ";
  for (int i=FIRST; i<MAX_TREE1; i++)
    cout << mergeArray[i] << " ";
  cout << endl;

  return 0;
}