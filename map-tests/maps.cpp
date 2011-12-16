#include <iostream>
#include <map>

using namespace std;

typedef map<string, int> uri_map_t;

int main(int argc, const char * argv[]) {
	
	uri_map_t uri_map;

	// Insert some data
	uri_map["uri"] = 1;
	uri_map["is"] = 23;
	uri_map["the"] = 555;
	uri_map["best"] = 1000000;

	// Display all the keys
	uri_map_t::iterator itr;
	for(itr = uri_map.begin(); itr != uri_map.end(); ++itr) {
		cout << "This is a key==" << itr->first << endl;
	}


	return 0;
}
