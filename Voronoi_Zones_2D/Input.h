#pragma once

#include <string>

#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>

using namespace std;
using namespace CGAL;

typedef Exact_predicates_inexact_constructions_kernel K;
typedef K::Point_2 P2;

class Input
{
    public:
    
    int k, perim, num_input;
    double cell_param_a, cell_param_b, cell_param_gamma, max_radius;
    double ** matrix;
    vector<P2> frac_base_pts, lattice_vectors, base_pts;
    
    Input();
    ~Input();
};
