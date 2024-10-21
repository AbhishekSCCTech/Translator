#include "STLReader.h"
#include <fstream>
#include <sstream>

class STLFileReader : public STLReader {
public:
    std::string file;
    STLFileReader(const std::string& filename) : file(filename) {}

    std::vector<Point> read() override;
    std::vector<double> getUniquePoints() override;
    void translate() override;
};

static std::vector<double> uniquePoints;

std::vector<Point> STLFileReader::read() {
    std::vector<Point> points;
    std::unordered_map<double, int> uniqueMap;
    std::ifstream fileStream(file);
    std::string line;
    int index = 0;

    if (fileStream.is_open()) {
        while (getline(fileStream, line)) {
            std::istringstream iss(line);
            std::string word;
            double x, y, z;
            if (iss >> word >> x >> y >> z && word == "vertex") {
                if (uniqueMap.find(x) == uniqueMap.end()) {
                    uniqueMap[x] = index++;
                    uniquePoints.push_back(x);
                }
                if (uniqueMap.find(y) == uniqueMap.end()) {
                    uniqueMap[y] = index++;
                    uniquePoints.push_back(y);
                }
                if (uniqueMap.find(z) == uniqueMap.end()) {
                    uniqueMap[z] = index++;
                    uniquePoints.push_back(z);
                }
                points.push_back(Point(uniqueMap[x], uniqueMap[y], uniqueMap[z]));
            }
        }
    }
    return points;
}

std::vector<double> STLFileReader::getUniquePoints() {
    return uniquePoints;
}

void STLFileReader::translate() {
    read();
}
