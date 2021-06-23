#pragma once

#include "Framework_Parameters.h"
#include "Input.h"
#include "Dividing_Space.h"
#include "Triangulate_Zones.h"

void Compute_Voronoi_Zones ( Framework_Parameters const& f_p, Input const& input, P2 const& base_pt, multimap<double, P2>const& cloud, vector<double>& zone_area, vector<double>& max_radii, vector<vector<Tri>>& tris );
