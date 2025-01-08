#include<iostream>
using namespace std;

int main(){

	// Pattern: 1
    /*
		****
		****
		****
		****
    */
	// int count=4; // Number of rows and cols 
	// for(int row=1;row<=count;row++) // this will print the row
	// {
	// 	for (int col=1 ;col<=count,col++)// this will print col
	// 	{
	// 		cout<<"*"; //this will print ****
	// 	}
	// 	cout<<endl;// this will break the line and move to next row
	// }

	// Pattern :1 (using while and taking input)

	// int print;
	// cin>>print;
	// cout<<"The number u want print is:"<<print<<endl;
	
	// int row=1;
	// while(row<=print)
	// {	
	// 	int col=1;
	// 	while(col<=print)
	// 	{
	// 		cout<<"*";
	// 		++col;
	// 	}
	// 	cout<<endl;
	// 	++row;

	// }	

	// Pattern: 2 
	/*
		****
		***
		**
		*
	*/

	// int count=4;
	// for (int row = 0; row < count; ++row)
	// {
	// 	for (int col = count; col >row; --col)
	// 	{
	// 		cout<<"*";
	// 	}
	// 	cout<<endl;
	// }

	// Pattern: 3
	/*	
		11111
		22222
		33333
		44444
		55555
	*/

	// int print;
	// cin>>print;
	// int row=1;
	// while(row<=print)
	// {
	// 	int col=1;
	// 	while(col<=print)
	// 	{
	// 		cout<<row;
	// 		col++;
	// 	}
	// 	cout<<endl;
	// 	row++;
	// }

	// -------For Loop
	// int print;
	// cin>>print;		

	// for(int row=1;row<=print;row++)
	// {
	// 	for (int col = 1; col <= print; ++col)
	// 	{
	// 		cout<<row<<" ";
	// 	}
	// 	cout<<endl;
	// }

	// Pattern :4
	/*
		3 2 1 
		3 2 1
		3 2 1
	*/
	int print;
	cin>>print;		

	for(int row=1;row<=print;row++)
	{
		for (int col = 0; col < print; ++col)
		{
			cout<<print-col<<" ";

		}
		cout<<endl;
	}


	return 0;

	

}

