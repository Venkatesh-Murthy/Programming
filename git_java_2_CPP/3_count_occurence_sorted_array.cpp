
/* %%%%%%%%%%%%%%%% *** %%%%%%%%%%%%%%%% 
Author: Venkatesh N. Murthy
To find the occurrence of a number in a sorted array. Here the approach is very similar to binary search.
%%%%%%%%%%%%%%%% *** %%%%%%%%%%%%%%%%  */

#include <iostream>
#include<vector>

using namespace std;

// recursive approach
int findOccurances(int elem, int *a, int startindex, int endindex)
{
    int mid;
    if(startindex>endindex)
        return 0;
    if(a[startindex]>elem)
        return 0;  //all the elements in the array are greater than element to be found
    if(a[endindex]<elem)
        return 0; //all the elements in the array are lesser than element to be found
    if(a[startindex]==elem && a[endindex]==elem)
        return (endindex-startindex)+1;  //all the elements in the array are same as element to be found
    
    mid=(startindex+endindex)/2;    
    if(a[mid]==elem)
    return 1+findOccurances( elem, a,  startindex,  mid-1)+findOccurances( elem, a,  mid+1,  endindex);
    else if(a[mid]<elem)
     findOccurances( elem, a,  mid+1,  endindex);
    else 
     findOccurances( elem, a,  startindex,  mid-1);
}

int main() {
	// your code goes here
	//cout<<"Hey";
	int rows=10;
    //int *a=new int [rows];
    //int a[10]={0,1,2,3,4,5,6,7,8,9};
    int a[10]={0,3,3,3,4,5,6,7,8,9};
   // int a[10]={0,1,2,2,4,5,6,7,8,9};
    int elem=3;
 
    int occurances=findOccurances(elem,a,0,rows-1);
    cout<<"Number of occurances of "<<elem<<": "<<occurances<<endl;
    
	return 0;
}
