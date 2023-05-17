#ifndef POINT_
#define POINT_

namespace ariel
{
    class Point
    {
        public:
            Point(double xLoc , double yLoc);
            Point moveTowards(Point currPoint , Point destPoint , double distancecToPoint);
            Point();
            double distance(Point otherP) const;
            void print();
            int getX();
            int getY();
        
        private: 
            int x;
            int y;


    };
}


#endif 