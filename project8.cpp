
#include "BinarySearchTree.h"   // ADT binary tree operations
#include <iostream>
#include <string>
#include <stdio.h>    // NULL
#include <stdlib.h>   // srand, rand
#include <time.h>     // time
#include <fstream>    // read/write files

using namespace std;

// const int N = 10;
// int list[N];
// int index = 0;
// ostream fsOut.open (".....");

// void setArray(string& anItem)
// {
//    list[index] = anItem;
//    index++;
// }  // end setArray

// void setArray(string& anItem)
// {
//    fsOut << anItem << " ";
// }  // end setArray

// void check(bool success)
// {
//    if (success)
//       cout << "Done." << endl;
//    else
//       cout << " Entry not in tree." << endl;
// }  // end check


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




////////////////
// QUICK SORT //
////////////////
// template <class ItemType>
// void sortFirstMiddleLast(ItemType theArray[], int first, int mid, int last)
// {
//    int temp;

//    if (theArray[first] > theArray[mid])
//    {
//       temp = theArray[first];
//       theArray[first] = theArray[mid];
//       theArray[mid] = temp;
//    }
//    if (theArray[mid] > theArray[last])
//    {
//       temp = theArray[mid];
//       theArray[mid] = theArray[last];
//       theArray[last] = temp;
//    }
//    if (theArray[first] > theArray[mid])
//    {
//       temp = theArray[first];
//       theArray[first] = theArray[mid];
//       theArray[mid] = temp;
//    }
// }

// template <class ItemType>
// int partition(ItemType theArray[], int first, int last)
// {
//    int mid;
//    int temp;
//    int pivotIndex;
//    int pivot;
//    int indexFromLeft;
//    int indexFromRight;
//    bool done;

//    mid = first + (last-first) / 2;
//    sortFirstMiddleLast(theArray, first, mid, last);

//    temp = theArray[mid];
//    theArray[mid] = theArray[last-1];
//    theArray[last-1] = temp;

//    pivotIndex = last-1;
//    pivot = theArray[pivotIndex];   

//    indexFromLeft = first+1;
//    indexFromRight = last-2;

//    done = false;
//    while (!done)
//    {
//       while (theArray[indexFromLeft] < pivot)
//          indexFromLeft = indexFromLeft+1;
//       while (theArray[indexFromRight] > pivot)
//          indexFromRight = indexFromRight-1;
      
//       if (indexFromLeft < indexFromRight)
//       {
//          temp = theArray[indexFromLeft];
//          theArray[indexFromLeft] = theArray[indexFromRight];
//          theArray[indexFromRight] = temp;
//       }
//       else
//       {
//          done = true;
//       }
//    }

//    temp = theArray[pivotIndex];
//    theArray[pivotIndex] = theArray[indexFromLeft];
//    theArray[indexFromLeft] = temp;

//    return pivotIndex;
// }

// template <class ItemType>
// void quickSort(ItemType theArray[], int first, int last)
// {
//    const int MIN_SIZE = 8;
//    int pivot;

//    if ((last-first+1) < MIN_SIZE)
//    {
//       // insertionSort(theArray, first, last);
//    }

//    else
//    {
//       int pivotIndex = partition(theArray, first, last);

//       quickSort(theArray, first, pivotIndex-1);
//       quickSort(theArray, pivotIndex+1, last);
//    }
// }


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
// project8 MAIN
///////////////////////////////////////////////////////////////////////////////
int main()
{
   const int FIRST = 0;
   const int MAX_TREE1 = 9;
   const int MAX_SMALL = 100000;
   const int MAX_MEDIUM = 1000000;
   const int MAX_LARGE = 10000000;

   // BinarySearchTree<string>* tree1Ptr = new BinarySearchTree<string>();
   // BinarySearchTree<string>* smallPtr = new BinarySearchTree<string>();
   // BinarySearchTree<string>* mediumPtr = new BinarySearchTree<string>();
   // BinarySearchTree<string>* largePtr = new BinarySearchTree<string>();
   // string smallMerge[MAX_SMALL];
   // string mediumMerge[MAX_MEDIUM];
   // string largeMerge[MAX_LARGE];

   // string smallFile = "smallSet.txt";
   // string mediumFile = "mediumSet.txt";
   // string largeFile = "largeSet.txt";
   // int smallCount = 100000;
   // int mediumCount = 1000000;
   // int largeCount = 10000000;
   // int value = 0;
   // string inValue;
   // clock_t t;
   // double time_taken;
   
   // Adds test data
   // tree1Ptr->add("14");
   // tree1Ptr->add("10");
   // tree1Ptr->add("23");
   // tree1Ptr->add("8");
   // tree1Ptr->add("5");
   // tree1Ptr->add("31");
   // tree1Ptr->add("12");
   // tree1Ptr->add("11");
   // tree1Ptr->add("90");
   string mergeArray[] = {"14", "10", "23", "08", "05", "31", "12", "11", "90"};
   string quickArray[] = {"14", "10", "23", "08", "05", "31", "12", "11", "90"};
   string radixArray[] = {"14", "10", "23", "08", "05", "31", "12", "11", "90"};
   int n = 9;
   int d = 2;
   // int first = 0;
   // int last = sizeof(mergeArray);
   // int last = 9;
   
   /////////////////////////////
   // SORTING ALGORITHM TESTS //
   /////////////////////////////
   cout << "\nSORTING ALGORITHM TESTS\n";

   // cout << "\nTest Data Preorder:\n";
   // tree1Ptr->preorderTraverse(setArray);
   
   // cout << "\nThe result by Tree Sort\n";
   // tree1Ptr->inorderTraverse(setArray);
   
   // for (int i=FIRST; i<MAX_TREE1; i++)
   //    cout << mergeArray[i] << " ";
   // cout << "\nSize of mergeArray should be 9 -> " << MAX_TREE1 << endl;
   // cout << "The result by Merge Sort\n";
   // mergeSort(mergeArray, FIRST, MAX_TREE1);
   // cout << "mergeSort done" << endl;
   // for (int index = FIRST; index < MAX_TREE1; index++)
   //    cout << mergeArray[index] << " ";

  /* mergeSort Test
     @file mergeSortTester.cpp */
  cout << "\nTest mergeArray: ";
  for (int i=FIRST; i<MAX_TREE1; i++)
    cout << mergeArray[i] << " ";
  cout << "\nThe result by Merge Sort\n";
  mergeSort(mergeArray, FIRST, MAX_TREE1-1);
  cout << "Sorted mergeArray: ";
  for (int i=FIRST; i<MAX_TREE1; i++)
    cout << mergeArray[i] << " ";
  cout << endl;

  //  for (int i=FIRST; i<MAX_TREE1; i++)
  //     cout << quickArray[i] << " ";
  //  cout << "\nSize of quickArray should be 9 -> " << MAX_TREE1 << endl;
  //  cout << "\nThe result by Quick Sort\n";
  //  quickSort(mergeArray, FIRST, MAX_TREE1);
   // for (int index = first; first <= last; index++)
   // {
   //    cout << mergeArray[index] << " ";
   // }
   
   /* radixSort Test
      @file radixSortTester.cpp */
   cout << "\nTest radixArray: ";
   for (int i=0; i<n; i++)
    cout << radixArray[i] << " ";
   cout << "\nThe result by Radix Sort\n";
   radixSort(radixArray, n, d);
   cout << "\nSorted radixArray: ";
   for (int i=0; i<n; i++)
      cout << radixArray[i] << " ";
   cout << endl;
   
   ////////////////////////////   
   // EFFICIENCY COMPARISONS //
   ////////////////////////////
   // cout << "\nEFFICIENCY COMPARISONS" << endl;
   
   // // Writes random numbers to small set file
   // ofstream sOutFile;
   // sOutFile.open(smallFile);
   // srand(time(NULL));   // initialize random seed
   // for (int i = 0; i < smallCount; i++)
   // {
   //    value = rand() % 10000;   // value is in the range 0 to 9999
   //    sOutFile << value;
   // }
   // sOutFile.close();

   // // Reads random numbers from file to small set tree
   // ifstream sInFile;
   // sInFile.open(smallFile);
   // for (int i = 0; i < MAX_SMALL; i++)
   // {
   //    getline (sInFile, inValue);
   //    smallPtr->add(inValue);
   //    smallMerge[i] = inValue;
   // }
   // sInFile.close();

   // // Sorting of small set and efficiency timing
   // cout << "The file name for the small set is \"" << smallFile << "\"" << endl;
   // cout << "The file contains " << smallCount << "integers." << endl;
   // cout << "The time needed to sort this list of integers is:" << endl;

   // t = clock();
   // tree1Ptr->inorderTraverse(setArray);
   // t = clock() - t;
   // time_taken = ((double)t) / CLOCKS_PER_SEC;
   // cout << "Tree Sort: " << time_taken << " seconds" << endl;

   // t = clock();
   // mergeSort(smallMerge, first, MAX_SMALL);
   // t = clock() - t;
   // time_taken = ((double)t) / CLOCKS_PER_SEC;
   // cout << "Merge Sort: " << time_taken << " seconds" << endl;

   return 0;
}  // end main