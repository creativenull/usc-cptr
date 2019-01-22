// Arnold Chand

/**
 * Opens a file and displays the content onto the console
 */

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int const no = 10;

struct teleDir{
    string fname[no];
    string lname[no];
    int tnum[no];
};

void searchName();
void searchPhone();
void getFileContents();

int main(){
    getFileContents();

    return 0;
}

void getFileContents(){
    teleDir dir;
    ifstream tele;
    tele.open("tele.txt");
    if(tele.is_open()){
        for(int t = 0; t < no; t++){
            getline(tele, dir.fname[t], ' ');
            getline(tele, dir.lname[t], ',');
            tele>> dir.tnum[t];
            t++;
        }
    } else
        cout<< "Error: File Does Not Exist!" <<endl;
    tele.close();
    cout<< dir.fname[0] << " " << dir.lname[0] << " " << dir.tnum[0] <<endl;
}
