# Translator

Here’s the merged and concise version of your `README.md` file:

---

## Project Description
This project parses ASCII STL files, extracts vertex data, performs triangulation, and outputs the results for visualization using gnuplot.

---

## Project Structure

- **Header Files:**
  - [Point.h](https://github.com/AbhishekSCCTech/Translator/blob/main/Translator/Translator/Header%20files/Point.h): Defines the `Point` class.
  - [Reader.h](https://github.com/AbhishekSCCTech/Translator/blob/main/Translator/Translator/Header%20files/Reader.h): Reads and processes the STL file data.
  - [Triangle.h](https://github.com/AbhishekSCCTech/Translator/blob/main/Translator/Translator/Header%20files/Triangle.h): Defines the `Triangle` class.
  - [Triangulation.h](https://github.com/AbhishekSCCTech/Translator/blob/main/Translator/Translator/Header%20files/Triangulation.h): Generates triangles from points.
  - [Writer.h](https://github.com/AbhishekSCCTech/Translator/blob/main/Translator/Translator/Header%20files/Writer.h): Writes the output data to a file.

- **Source Files:**
  - [main.cpp](https://github.com/AbhishekSCCTech/Translator/blob/main/Translator/Translator/Source%20File/Main.cpp): Main program execution.
  - [Point.cpp](https://github.com/AbhishekSCCTech/Translator/blob/main/Translator/Translator/Source%20File/Point.cpp): Implements `Point` class functions.
  - [Reader.cpp](https://github.com/AbhishekSCCTech/Translator/blob/main/Translator/Translator/Source%20File/Reader.cpp): Implements `Reader` class functions.
  - [Triangle.cpp](https://github.com/AbhishekSCCTech/Translator/blob/main/Translator/Translator/Source%20File/Triangle.cpp): Implements `Triangle` class functions.
  - [Triangulation.cpp](https://github.com/AbhishekSCCTech/Translator/blob/main/Translator/Translator/Source%20File/Triangulation.cpp): Implements `Triangulation` class functions.
  - [Writer.cpp](https://github.com/AbhishekSCCTech/Translator/blob/main/Translator/Translator/Source%20File/Writer.cpp): Implements `Writer` class functions.

---

## Feature Implementation

1. **Data Structure**: Efficient handling of points and triangles to represent 3D objects.
2. **Graphics Representation**: Structured output for 3D visualization using gnuplot.

---

## Visualizing Output

Use gnuplot to visualize the output:
```bash
splot 'D:\Tranlator 1\output.dat' w lp lt 3
```

### Output Snapshot:
  - [Cube Output](https://github.com/AbhishekSCCTech/Translator/blob/main/output/Cube.png)
  - [Sphere Output](https://github.com/AbhishekSCCTech/Translator/blob/main/output/Sphere.png)

--- 

