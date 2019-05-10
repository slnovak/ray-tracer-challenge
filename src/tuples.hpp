#include "Eigen/Dense"

namespace ray_tracer_challenge::tuples
{
    using tuple_t = Eigen::Vector4d;
    using point_t = tuple_t;
    using vector_t = tuple_t;

    point_t make_point(double x, double y, double z);

    vector_t make_vector(double x, double y, double z);

    bool is_point(tuple_t data);

    // TODO: implement is_vector
}