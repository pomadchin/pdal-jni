package com.azavea.pdal

abstract class Pipeline(json: String) {
  @native def execute(): Unit
  @native def pointViews(): PointViewIterator
  /** Create an iterator of point views, with each point
    * only containing the data contained in the supplied layout
    */
  @native def pointViews(layout: PointLayout): PointViewIterator
  @native def dispose(): Unit
}
