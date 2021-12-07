#include<Beginning/inc/shape2.h>
#include<vector>
#include<math.h>
#include<memory>

using namespace std;


class MainForm
{
    private:
        vector<shared_ptr<Shape>> shapes;

    public:
        void newShape(const Point &p1, const Point &p2, const string &type);
        void paint();
};

void MainForm::newShape(const Point &p1, const Point &p2, const string &type)
{
    if (type == "line")
    {  
        shapes.push_back(make_shared<Line>(p1, p2));
    }
    else if (type == "rect")
    {
        int width = abs(p2.x - p1.x);
		int height = abs(p2.y - p1.y);
        shapes.push_back(make_shared<Rect>(p1, width, height));
    }
    #if(CHANGE)
    else if (type == "circle")
    {
        int radius = sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y));
        shapes.push_back(make_shared<Circle>(p1 ,radius));
    }
    #endif
}

void MainForm::paint()
{
    for (auto s : shapes)
    {
        s->draw();
    }

}


int main()
{
    MainForm form;
    form.newShape(Point(100, 100), Point(200, 200),  "line");
    form.newShape(Point(100, 100), Point(200, 200),  "rect");
    form.paint();
}