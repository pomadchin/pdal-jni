package com.azavea.pdal

import ch.jodersky.jni.nativeLoader

@nativeLoader("pdal_jni0")
class Pipeline(val json: String) {
  var nativeHandle = 0l // C++ pointer

  @native def initialise(): Unit
  @native def execute(): Unit
  @native def pointViews(): PointViewIterator
  /** Create an iterator of point views, with each point
    * only containing the data contained in the supplied layout
    */
  @native def pointViews(layout: PointLayout): PointViewIterator
  @native def test(): Int
  @native def dispose(): Unit
}

object Pipeline {
  def apply(json: String): Pipeline = { val p = new Pipeline(json); p.initialise(); p }
}
