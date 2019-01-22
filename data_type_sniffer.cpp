#include <iostream>
#include <cstring>
using namespace std;

string displayType(int);
void dataType(char, int, int);
void dataVerifier(string);
void getData();

int main(){
    getData();
    return 0;
}

string displayType(int m){
    string message[3];
    message[0] = "an Integer";
    message[1] = "a Double";
    message[2] = "a String/Character";
    return message[m];
}

void dataType(char sentence[], int num[], const int s){
    string sen[2];
    for(int g = 0; g < 2; g++) {
        sen[g] = "";
    }
    if(num[0] != 3) {
        // assign each character and join them up to make a string
        for(int t = 0; t < s; t++) {
            if(num[t] == 1) {
                // Integer
                sen[0] = sen[0] + sentence[t];
                } else {
                // String
                sen[1] = sen[1] + sentence[t];
            }
        }// end for
        cout<< endl;
        if(sen[1] != ""){
            // if sen[0] has a value
            cout<< sen[1] << " is " <<displayType(2) <<endl;
        }
    } else {};
}

void dataVerifier(string type){
    const int size = 50;
    char yn;
    int num[size] = {};
    char sen[size];
    size_t find;
    // initialise sen to blank spaces
    for(int t = 0; t < size; t++){
        sen[t] = ' ';
    }
    // copy the string elements to char using strcpy and c_str
    strcpy(sen, type.c_str());
    cout<< "What you entered is: " <<sen <<endl;
    cout<< "Do you want to continue [y], exit [e] or enter a next value [n]? ";
    cin>> yn;
    if (yn == 'y'){
        find = type.find('.');
        if (find != string::npos){
            cout<< endl << sen << " is " << displayType(1) <<endl;
        } else {
            // Check to see if the string contains numbers or not
            for (int x = 0; x < size; x++){
            // identify which is numbers or letters
                switch (sen[x]){
                    case '0':
                    case '1':
                    case '2':
                    case '3':
                    case '4':
                    case '5':
                    case '6':
                    case '7':
                    case '8':
                    case '9':
                        // Numbers identifier
                        num[x] = 1;
                        break;
                    case ' ':
                        // blank space identifier
                        num[x] = 2;
                        break;
                    default:
                        // letter identifier
                        num[x] = 3;
                        break;
                }// end switch
                cout<< num[x];
            }// end for
            dataType(sen, num, size);
        }// end else
    } else if (yn == 'n'){
        getData();
    }
}

void getData() {
    string data = "";
    cout<< "Enter any data type (like 3.2, 32, 32dg, hello, etc) [character limit 50]: " <<endl;
    getline(cin, data);
    dataVerifier(data);
}
