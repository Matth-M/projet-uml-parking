/**
 * Project Untitled
 */


#ifndef _PARKING_H
#define _PARKING_H

class Parking {
public: 
    int total_places;
    int occupied_places;
    vector<User> list_of_present_cars;
    vector<Place> list_places;
    vector<Counter> list_counters;
    vector<User> list_users;
    bool capt_entry;
    
/**
 * @param occupied_places
 * @param total_places
 */
void print_n_places(int occupied_places, int total_places);
    
/**
 * @param plate
 * @param list_user
 */
vector<string> authorized_plate(string plate, vector<User> list_user);
    
/**
 * @param list_user
 * @param badge
 */
vector<int> authorized_badge(vector<User> list_user, int badge);
};

#endif //_PARKING_H