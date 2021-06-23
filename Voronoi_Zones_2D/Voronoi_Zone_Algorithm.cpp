#include "Surrounding_Cloud.h"
#include "Compute_Voronoi_Zones.h"
#include "Draw_Voronoi_Zones.h"

void Voronoi_Zone_Algorithm ( Framework_Parameters const& f_p, Input& input )
{
    cout << "Computing Voronoi zones for " << input.base_pts.size() << " point(s):" << endl;

    vector<double> zone_area( input.k, 0 ); // Records the area of the zone for each k.
    
    for (int counter = 0; counter < input.base_pts.size(); ++counter) // Looping over base points.
    {
        vector<double> max_radii; // Contains the maximum radius of each zone from the base point.
        vector<vector<Tri>> tris; // Contains the Brillouin zones, stored as a vector of triangles for each zone.
        multimap<double, P2> cloud; // The cloud surrounding the base point.
        
        Surrounding_Cloud( input, counter, cloud ); // Computing the surrounding cloud.
        
        Compute_Voronoi_Zones( f_p, input, input.base_pts[counter], cloud, zone_area, max_radii, tris ); // Computing the Brillouin zones.
        
        if (f_p.draw_zones && counter == 0) Draw_Voronoi_Zones( f_p, input, counter, cloud, tris ); // Drawing the Brillouin zones.
    }
}
