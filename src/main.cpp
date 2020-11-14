#include <iostream>
#include <fstream>

using namespace std;

int main(int argc,char* argv[])
{
    if (argc < 3) {
        cout << "Not enough parameters" << endl;
        return 1;
    }
    char* srcfilename = argv[1];
    char* dstfilename = argv[2];

    fstream srcfs;
    srcfs.open(srcfilename,ios_base::in);
    fstream dstfs;
    dstfs.open(dstfilename,ios_base::out|ios_base::trunc);
    if (srcfs.is_open() && dstfs.is_open() ){
        while (1){
            char c = srcfs.get();
            if (srcfs.eof()) break;
            dstfs.put(c);
        }
        srcfs.close();
        dstfs.close();
        return 0;
    }
    return 1;


    /*
    fstream fs;
    fs.open("sample.txt",ios_base::trunc|ios_base::out);
    if (fs.is_open()){
        fs << "Hello" << endl;
        fs << 1234567;
        int k = 1234567;
        fs.write((char*)&k,sizeof(k));
        cout << " Now at write marker " << fs.tellp() << endl;
        fs.seekp(0);
        fs << "olleH";
        fs.close();

    }

    fs.open("sample.txt",ios_base::in);
    if (fs.is_open()){
        char c = fs.get();
        cout << "read c " << c << endl;
        cout << " Now at " << fs.tellg() << endl;
        fs.seekg(4);
        c = fs.get();
        cout << "read c " << c << endl;
        cout << " Now at " << fs.tellg() << endl;
        fs.seekg(4,ios_base::cur);
        c = fs.get();
        cout << "read c " << c << endl;
        cout << " Now at " << fs.tellg() << endl;
        fs.seekg(0,ios_base::beg);
        c = fs.get();
        cout << "read c " << c << endl;
        cout << " Now at " << fs.tellg() << endl;

        fs.seekg(0,ios_base::end);
        cout << " Now at " << fs.tellg() << endl;
        cout << " file size " << fs.tellg() << endl;


            }
            */
    return 0;
}
