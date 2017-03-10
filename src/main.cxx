#include	<iostream>
#include 	<vector>
#include 	<string>
#include 	<cstring>

using namespace std;

int main(int argc, char ** argv)
{
	vector< vector<char> > _map;
    vector<char> input;
    string hash = "";

    for (int i = 0; i < 3; ++i)
    {
        string tmp;
        cin >> tmp; 
        
		char tab2[1024];
		strcpy(tab2, tmp.c_str());
		for (int i = 0; i < 5; ++i)
		{
     	   input.push_back(tab2[i]);
		}
		_map.push_back(input);

    }

    for (vector<vector<char>>::const_iterator it = _map.begin(); it != _map.end(); ++it)
    {
    		hash = *it;
    	for (vector<char>::const_iterator yoyo = hash.begin(); yoyo != hash.end(); ++yoyo)
    	{
	    	// hash[2] = "Z";
	        cout << *yoyo ;
    	}
    	cout << endl ;
    }



    return 0;
} 