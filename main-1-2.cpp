#include <iostream>
#include <string> 

using namespace std;


void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents){
    cout << "Report Card ";
    
    for(int i = 0; i < 4; i++){
        cout << courses[i] << " ";
    }
    cout << endl;

    for (int i = 0; i<nstudents; i++){
        cout << students[i] << " ";
        for (int j = 0; j<4;j++){
            cout << report_card[i][j] << " ";

        }
        cout << endl;
    }
}


int main(){
    int n = 4;
    string courses[4] = {"Math", "Science", "English","programming"};
    string students[n] = {"Brodie","gaylord","cooper","Hammer"};
    int report_card[n][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};


    print_class(courses, students, report_card, n);
}