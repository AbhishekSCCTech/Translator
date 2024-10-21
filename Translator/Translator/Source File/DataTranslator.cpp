#include "STLReader.h"
#include "Triangulation.h"
#include "Writer.h"

class DataTranslator : public Translator {
public:
    void translate() override {
        STLFileReader reader("cube-ascii.stl");
        std::vector<Point> points = reader.read();

        Triangulation triangulation;
        std::vector<Triangle> triangles = triangulation.generateTriangles(points);

        Writer writer;
        writer.write(triangles, reader.getUniquePoints());
    }
};
