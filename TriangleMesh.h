// ========================================================================= //
// Authors: Roman Getto, Matthias Bein                                       //
// mailto:roman.getto@gris.informatik.tu-darmstadt.de                        //
//                                                                           //
// GRIS - Graphisch Interaktive Systeme                                      //
// Technische Universitšt Darmstadt                                          //
// Fraunhoferstrasse 5                                                       //
// D-64283 Darmstadt, Germany                                                //
// ==========================================================================//
#ifndef TRIANGLEMESH_H
#define TRIANGLEMESH_H

#include <vector>
#include "Vec3.h"
#include <string>

using namespace std;

class TriangleMesh  {

public:

 // typedefs for data
  typedef Vec3i Triangle;
  typedef Vec3f Normal;
  typedef Vec3f Vertex;
  typedef vector<Triangle> Triangles;
  typedef vector<Normal> Normals;
  typedef vector<Vertex> Vertices;  

private:

  // data of TriangleMesh
  Vertices vertices;
  Normals normals;
  Triangles triangles;

public:

  // ===============================
  // === CONSTRUCTOR, DESTRUCTOR ===
  // ===============================

  TriangleMesh();
  ~TriangleMesh();

  // clears all data, sets defaults
  void clear();

  // ================
  // === RAW DATA ===
  // ================

  // get raw data references
  Vertices& getVertices();
  Triangles& getTriangles();
  Normals& getNormals();

  void saveAsPly(std::string outputfilename);

};


#endif

