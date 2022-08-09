#include <iostream>

using namespace std;

void function_to_sortoutth_list()
	{
	    //Variable Declaration
	   int array_kaSize;


	//Prompting the user to input the size of array
	   cout<<"Enter the size of an array.........!: ";
	   cin>>array_kaSize;
	   cout<<endl;
	   /*a) Get the size of the array from the user. Properly apply validations while getting the input for
example the size of array should not be less or equal to zero.*/
	   while (array_kaSize<1)
	   {
	       cout<<"Enter the size again  (according to given condition size must be greater than 0): ";
	       cin>>array_kaSize;
	   }

	   int arrY[array_kaSize];//Declaring integer type array with user's entered size
	//Taking Input in array
	cout<<endl;
	   cout<<"Enter elements of  the array.........!: ";
	   for (int i = 0; i<array_kaSize; i++)
	   {
	       cin>>arrY[i];
	       /*b) Populate/input the data into the array from the user. The program should accept taking input
values from the user unless either the array is fully populated or the user enters -1.*/
	       if(arrY[i]==-1)
	       {
	           array_kaSize = i;// array ka size change krna ka lia
	           break;

	       }

	   }

	   cout<<endl;
	/*c) Sort the array using bubble sorting algorithm and finally print the original and the sorted array
at the end.*/
	   cout<<"Entered arrays is this..............!: ";
int i,j;//declaration for the for loop
	   for ( i = 0; i<array_kaSize; i++)

	       cout<<arrY[i]<<' ';
	//Loops to Bubble sort the array
	    for (i = 1; i<array_kaSize; i++)
	        for( j = 0; j<array_kaSize - i; j++)
	    {
	        if (arrY[j]> arrY[j+1] )
	        {
	         int third_variable;//declaration for the swapping variable
	          third_variable = arrY[j];//storing the value of arrayj 3rd variable
	           arrY[j] = arrY[j+1];
	           arrY[j+1] = third_variable;
	        }

	    }


	    cout<<endl;

	    cout<<"Sorted by bubble sort array of elements is ........\t: ";
	    for (int i = 0; i<array_kaSize; i++)

	       cout<<arrY[i]<<' ';
	}
		int main(){

	function_to_sortoutth_list();


	}
	//-------------------------------sharpsbrain-----------------------------------------//
