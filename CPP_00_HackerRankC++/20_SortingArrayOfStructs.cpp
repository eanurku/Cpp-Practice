/*
 * 20_SortingArrayOfStructs.cpp
 *
 *  Created on: May 14, 2022
 *      Author: anura
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Workshop {
    int start_time;
    int end_time;
    int duration;
};
struct Available_Workshops {
    int n;
    Workshop* array;
};
//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops

Available_Workshops* initialize(int start_time[], int duration[], int n) {
    Available_Workshops* available_workshops=new Available_Workshops;
    available_workshops->n = n;
    available_workshops->array = new Workshop[n];
    for (int i = 0; i < n; i++) {
        available_workshops->array[i].start_time = start_time[i];
        available_workshops->array[i].duration = duration[i];
        available_workshops->array[i].end_time = start_time[i] + duration[i];
    }
    return available_workshops;
}
bool compareWorkshop(Workshop first,Workshop second) {

    return(first.end_time < second.end_time);
}
int CalculateMaxWorkshops(Available_Workshops* ptr) {

    sort(ptr->array, ptr->array + ptr->n, compareWorkshop);

    int maxCount{};
    int current_end_time = 0;
    if (ptr->n > 0) {
        maxCount = 1;
        current_end_time = ptr->array[0].end_time;
    }
    for (int i = 1; i < ptr->n; i++) {

        if (ptr->array[i].start_time>=current_end_time) {
            maxCount++;
            current_end_time = ptr->array[i].end_time;
       }
    }

    return maxCount;
}
int main(int argc, char* argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> start_time[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> duration[i];
    }

    Available_Workshops* ptr;
    ptr = initialize(start_time, duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}



