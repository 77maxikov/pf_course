#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

/*struct Translation{
    char ru[81];
    char en[81];
};*/
struct Translation{
    char *ru;
    char *en;
};
struct Array{
    size_t size;
    Translation *data;
};

void addTranslation(Array *array, const char * en,    const char *ru){


    // Предусмотреть ситуацию когда перевод уже есть в словаре??
}
//Translation findTranslation(Array *array,const char * en ){
//int findTranslation(Array *array,const char * en,char* ru ){
Translation* findTranslation(Array *array,const char * en ){

    if ( false /*условие*/){
        cout << "Не нашлось :(" << endl;
        return nullptr;
        //addTranslation()
        //exit(1);
    }

}
void deleteTranslation(Array *array,const char * en){

}

void updateTranslation(Array *array, const char * en, const char *ru){
    deleteTranslation(array,en);
    addTranslation(array,en,ru);
}

int main(int argc,char* argv[])
{/*
    struct S{
        char *name;
        int height;
        char countrycode;
    };

    S s ;//= {"John",56,'G'};
    s.name = new char[10];
    cout << "Name" << s.name << '\t' << "height " << s.height << endl;
    //strcpy(s.name,"John");
    //strcpy(s.name,"Alexander");
    cin >> s.name ;
    cout << "Name" << s.name << '\t' << "height " << s.height << endl;

    S group[20];
    group[0].name = new char[6];
    cin >> group[0].name;
    group[1].height = 170;

    S* newgroup;
    newgroup = new S[18];
    newgroup[0].height = 167;
    (*newgroup).countrycode = 'A';
    newgroup->countrycode = 'R';
    (newgroup + 2)->countrycode ='U';

    struct M{
        char disstheme[30];
        S s_info;
    };*/

    //M m = {"Development", {,170,'U'}};





    Array transstorage = {0,nullptr};


    char enWord[100];
    cin >> enWord;

    Translation *tr = findTranslation(&transstorage,enWord);
    if ( tr == nullptr ){
        // Обработать ситуацию когда перевода нет
        // addTranslation() ???
    }

    if (transstorage.size == 0){
        transstorage.data = new Translation;
        transstorage.size = 1;
        char buffer[81];
        cout << "Input english word" << endl;
        cin >> buffer;
        size_t k = 0;
        for (;k < 81;++k)
            if ( buffer[k] == '\0' )
                break;
        cout << k << " bytes " << endl;
        transstorage.data->en = new char[k+1];
        for ( size_t counter = 0; counter < k+1 ;++counter )
            transstorage.data->en[counter] = buffer[counter];

        cout << "Input russian word" << endl;
        cin >> buffer;
        k = 0;
        for (;k < 81;++k)
            if ( buffer[k] == '\0' )
                break;
        cout << k << " bytes " << endl;
        transstorage.data->ru = new char[k+1];
        for ( size_t counter = 0; counter < k+1 ;++counter )
            transstorage.data->ru[counter] = buffer[counter];
    }
    cout << "Dictionary size " << transstorage.size << endl;
    cout << "First element " << transstorage.data[0].en << ':' << transstorage.data[0].ru  << endl;

    delete[] transstorage.data[0].en;
    delete[] transstorage.data[0].ru;
    delete transstorage.data;


    //s.name = new char[5];

    //cout << "Sizeof(s) " << sizeof(s) << endl;

    /*if (argc < 3) {
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
*/

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
