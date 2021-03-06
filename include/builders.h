#ifndef BUILDERS_H_INCLUDED
#define BUILDERS_H_INCLUDED

#include <boost/shared_ptr.hpp>

class World;
typedef boost::shared_ptr<World> WorldPtr;

void build3_1(WorldPtr w);
void build3_2(WorldPtr w);

void build_math(WorldPtr w);
void build_debug(WorldPtr w);
void build_tim00(WorldPtr w);


#endif // BUILDERS_H_INCLUDED
