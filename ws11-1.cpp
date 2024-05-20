#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

typedef vector<int> Records;
class RecordsManager{
private:
    fstream _file;
    string _filename;

public:
    RecordsManager(string filename):_filename(filename){}
    
    void read(Records &records){
        _file.open(_filename, ios::in);
        if (!_file.is_open()) {
            throw runtime_error("can't open the file:" + _filename);
        }

        string line;
        while (getline(_file, line)){
            try {
                records.push_back(stoi(line));
            } catch (const invalid_argument& e) {
                throw runtime_error("error when reading information;" + line);
            } catch (const out_of_range& e) {
                throw runtime_error("overload when reading:"+line);
            }
        }
        _file.close();
    }
};

int main() {
    try {
        RecordsManager recordM("test_clean.txt");
        Records myRecords;
        recordM.read(myRecords);
        int sum=0;
        for (int i : myRecords){
            sum+=i;
        }
        cout << sum << endl;
    } catch (const runtime_error& e){
        cout << e.what() << endl;
    }
    return 0;
}
