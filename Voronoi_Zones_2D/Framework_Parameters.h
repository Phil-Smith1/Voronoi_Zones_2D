#pragma once

#include <string>

using namespace std;

class Framework_Parameters
{
    public:
    
    bool use_threads, draw_zones;
    int k;
    string input_dir, output_dir, input_file, output_file;
    
    Framework_Parameters();
    ~Framework_Parameters();
};
