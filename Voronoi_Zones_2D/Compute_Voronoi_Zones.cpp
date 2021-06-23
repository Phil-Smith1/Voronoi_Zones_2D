#include "Framework_Parameters.h"
#include "Input.h"
#include "Dividing_Space.h"
#include "Triangulate_Zones.h"

void Compute_Voronoi_Zones ( Framework_Parameters const& f_p, Input const& input, P2 const& base_pt, multimap<double, P2>const& cloud, vector<double>& zone_area, vector<double>& max_radii, vector<vector<Tri>>& tris )
{
    vector<B_Poly> polys;
    polys.reserve( 3000 );
    
    Dividing_Space( cloud, base_pt, input.k, polys, max_radii, f_p.use_threads );
    
    Triangulate_Zones( polys, input.k, tris, zone_area );
}
