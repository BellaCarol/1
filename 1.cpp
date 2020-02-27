#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main( )
{
	ifstream fin;
	ofstream fout;
	fin.open( "article.txt" );
	fout.open( "out.txt" );
	int i;
	string buf[ 50 ];
	for ( i = 0; i < 50; i++ )
	{
		fin >> buf[ i ];
		if ( buf[ i ][ buf[ i ].length( ) - 1 ] < 65 || ( buf[ i ][ buf[ i ].length( ) - 1 ] > 90 && buf[ i ][ buf[ i ].length( ) - 1 ] < 97 ) || buf[ i ][ buf[ i ].length( ) - 1 ] >122 )
			buf[ i ][ buf[ i ].length( ) - 1 ] = '\0';
		if ( buf[ i ][ 0 ] == '\n' )
		{
			buf[ i ][ 0 ] = '\0';
			i--;
		}
			
	}
	/*string a;
	fin >> a;
	cout << a;
	cout << endl;
	cout << a.size( );*/
	for ( i = 0; i < 50; i++ )
	{
		cout << buf[ i ] << endl;
		fout << buf[ i ] << endl;
	}
	fin.close( );
	fout.close( );
	return 0;

}