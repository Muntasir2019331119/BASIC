
#include<bits/stdc++.h>
using namespace std;
int main()
{

//Upper Bound:
	/*
	  It returns an iterator pointing to the first element in the range [first, last) that is greater than value,
	   or "last" if no such element is found.

	   The elements in the range shall already be "sorted" or at least partitioned with respect to val.
	*/
	//always greater than the value..jodi na pay last er elemnt ta rerturn korey..

	int n, i, j, index;
	vector<int>v = {1, 8, 27, 58, 77, 90, 98};
	vector<int>::iterator upper;
	//itertion start,end,jar upper khujtesi..
	upper = upper_bound(v.begin(), v.end(), 27);

	cout << "Upper = " << *upper; //58
    //index khuje ber korar jonno;
	index = (upper - v.begin());
	cout << " And The Index Is at Position = " << index << endl; //3


//Lower Bound:
	/*
	 It returns an iterator pointing to the first element in the range [first, last) which has a value "not less than val".\
	  This means that the function returns the index of the next smallest number just greater than or equal to that number.
	  If there are multiple values that are equal to val, lower_bound() returns the index of the first such value.

	The elements in the range shall already be sorted or at least partitioned with respect to val.
	*/
    //value tar choto return korbey na..oita hoiley oita or etar immediate uporer ta...
    //ekadhik holey shobar 1st er ta return korbey..

	vector<int>::iterator lower;
	//itertion start,end,jar lower khujtesi..
	lower = lower_bound(v.begin(), v.end(), 27);
	cout << "Lower = " << *lower; //27
    //index khuje ber korar jonno;
	index = (lower - v.begin());
	cout << " And The Index Is at Position = " << index << endl; //2

  //jar upper and lower khubo shetay array tey na thakolew hobey..
}