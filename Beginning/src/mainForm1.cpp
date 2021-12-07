#include<Beginning/inc/shape1.h>
#include<vector>
#include<math.h>

using namespace std;


class MainForm
{
    private:
        vector<Line> lines;
        vector<Rect> rects;
        #if (CHANGE)
        vector<Circle> circles;
        #endif

    public:
        void newShape(const Point &p1, const Point &p2, const string &type);
        void paint();
};

void MainForm::newShape(const Point &p1, const Point &p2, const string &type)
{
    if (type == "line")
    {  
        Line l(p1, p2);
        lines.push_back(l);
    }
    else if (type == "rect")
    {
        int width = abs(p2.x - p1.x);
		int height = abs(p2.y - p1.y);
        Rect rec(p1, width, height);
        rects.push_back(rec);
    }
    #if(CHANGE)
    else if (type == "circle")
    {
        int radius = sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y));
        Circle c(p1 ,radius);
        circles.push_back(c);
    }
    #endif
}

void MainForm::paint()
{
    for (auto l : lines)
    {
        graphic::drawLine(l.start, l.end);
    }

    for (auto r : rects)
    {
        graphic::drawRect(r.leftUp, r.width, r.height);
    }
    #if(CHANGE)
    for (auto c : circles)
    {
        graphic::drawCircle(c.center, c.radius);
    }
    #endif
}


int main()
{
    MainForm form;
    form.newShape(Point(100, 100), Point(200, 200),  "line");
    form.newShape(Point(100, 100), Point(200, 200),  "rect");
    form.paint();
}