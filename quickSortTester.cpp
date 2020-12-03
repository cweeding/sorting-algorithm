
#include <iostream>
#include <string>
using namespace std;


///////////////////////////////////////////////////////////////////////////////
// sortFirstMiddleLast
///////////////////////////////////////////////////////////////////////////////
template <class ItemType>
void sortFirstMiddleLast(ItemType theArray[], int first, int mid, int last)
{
   string temp;

   if (theArray[first] > theArray[mid])
   {
      temp = theArray[first];
      theArray[first] = theArray[mid];
      theArray[mid] = temp;
   }
   if (theArray[mid] > theArray[last])
   {
      temp = theArray[mid];
      theArray[mid] = theArray[last];
      theArray[last] = temp;
   }
   if (theArray[first] > theArray[mid])
   {
      temp = theArray[first];
      theArray[first] = theArray[mid];
      theArray[mid] = temp;
   }
}

///////////////////////////////////////////////////////////////////////////////
// partition
///////////////////////////////////////////////////////////////////////////////
template <class ItemType>
int partition(ItemType theArray[], int first, int last)
{
   int mid;
   string temp;
   int pivotIndex;
   string pivot;
   int indexFromLeft;
   int indexFromRight;
   bool done;

   mid = first + (last-first) / 2;
   sortFirstMiddleLast(theArray, first, mid, last);

   temp = theArray[mid];
   theArray[mid] = theArray[last-1];
   theArray[last-1] = temp;

   pivotIndex = last-1;
   pivot = theArray[pivotIndex];   

   indexFromLeft = first+1;
   indexFromRight = last-2;

   done = false;
   while (!done)
   {
      while (theArray[indexFromLeft] < pivot)
         indexFromLeft = indexFromLeft+1;
      while (theArray[indexFromRight] > pivot)
         indexFromRight = indexFromRight-1;
      
      if (indexFromLeft < indexFromRight)
      {
         temp = theArray[indexFromLeft];
         theArray[indexFromLeft] = theArray[indexFromRight];
         theArray[indexFromRight] = temp;
      }
      else
      {
         done = true;
      }
   }

   temp = theArray[pivotIndex];
   theArray[pivotIndex] = theArray[indexFromLeft];
   theArray[indexFromLeft] = temp;

   return pivotIndex;
}

///////////////////////////////////////////////////////////////////////////////
// quickSort
///////////////////////////////////////////////////////////////////////////////
template <class ItemType>
void quickSort(ItemType theArray[], int first, int last)
{
  // const int MIN_SIZE = 8;
  int pivot;
  int pivotIndex = partition(theArray, first, last);

  quickSort(theArray, first, pivotIndex-1);
  quickSort(theArray, pivotIndex+1, last);

  //  if ((last-first+1) < MIN_SIZE)
  //  {
  //     // insertionSort(theArray, first, last);
  //  }

  //  else
  //  {
  //     int pivotIndex = partition(theArray, first, last);

  //     quickSort(theArray, first, pivotIndex-1);
  //     quickSort(theArray, pivotIndex+1, last);
  //  }
}

///////////////////////////////////////////////////////////////////////////////
// quickSortTester MAIN
///////////////////////////////////////////////////////////////////////////////
int main()
{
  const int FIRST = 0;
  const int MAX_TREE1 = 9;
  string quickArray[] = {"14", "10", "23", "8", "5", "31", "12", "11", "90"};

  cout << "\nSORTING ALGORITHM TESTS\n";

  for (int i=FIRST; i<MAX_TREE1; i++)
    cout << quickArray[i] << " ";

  cout << "\nSize of quickArray should be 9 -> " << MAX_TREE1 << endl;
  cout << "\nThe result by Quick Sort\n";
  quickSort(quickArray, FIRST, MAX_TREE1);
  cout << "mergeSort done" << endl;

  for (int i=FIRST; i<MAX_TREE1; i++)
    cout << quickArray[i] << " ";
  cout << endl;

  return 0;
}