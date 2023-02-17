/**
 * Project Untitled
 */


#ifndef _COUNTER_H
#define _COUNTER_H

class Counter {
public: 
    vector<char> n_counter;
    bool theres_a_car;
    
void lower_barrier();
    
void raise_barrier();
    
void read_plate();
    
void read_badge();
    
void print_accepted();
    
void print_rejected();
    
bool detect();
    
/**
 * @param list_of_present_cars
 */
void add_present_user(vector<User> list_of_present_cars);
    
void remove_car_present();
    
/**
 * @param list_of_present_cars
 */
void remove_present_car(vector<User> list_of_present_cars);
};

#endif //_COUNTER_H