#include "Eigen/Dense"

#include "tuples.hpp"

namespace ray_tracer_challenge::tuples
{
    point_t make_point(double x, double y, double z)
    {
        return {x, y, z, 1};
    };

    vector_t make_vector(double x, double y, double z)
    {
        return {x, y, z, 0};
    }

    bool is_point(tuple_t data)
    {
        return data[3] != 0.0;
    };

    // TODO: implement is_vector
}