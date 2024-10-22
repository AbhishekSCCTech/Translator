#include "STLReader.h"
#include "STLWriter.h"
#include "Triangulation.h"
#include <iostream>

int main() {
    STLReader reader;
    STLWriter writer;
    Triangulation triangulation;

    reader.read("cube.stl", triangulation);
    writer.write("output.dat", triangulation.trianglesList,triangulation.uniqueCoordinates);
    // writer.write("output.dat", triangulation.trianglesList);

    std::cout << "Data of Triangles successfully saved to output.dat\n";
    return 0;
}
