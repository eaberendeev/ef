#ifndef _TIME_GRID_H_
#define _TIME_GRID_H_

#include <cstdio>
#include <cmath>
#include <iostream>
#include <string>
#include "config.h"

class Time_grid {
  public:
    double total_time, current_time;
    double time_step_size;
    double time_save_step;
    int total_nodes, current_node, node_to_save;
  public:
    Time_grid( Config *conf );
    void print( );
    void write_to_file( FILE *f );
  private:
    // initialisation
    void check_correctness_of_related_config_fields( Config *conf );
    void get_values_from_config( Config *conf );
    void init_total_nodes();
    void shrink_time_step_size_if_necessary( Config *conf );
    void shrink_time_save_step_if_necessary( Config *conf );
    void set_current_time_and_node();
    // check config correctness
    void total_time_gt_zero( Config *conf );
    void time_step_size_gt_zero_le_total_time( Config *conf );
    void time_save_step_ge_time_step_size( Config *conf );
    void check_and_exit_if_not( const bool &should_be, const std::string &message );
}; 

#endif /* _TIME_GRID_H_ */
