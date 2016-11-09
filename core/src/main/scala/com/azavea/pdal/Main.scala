package com.azavea.pdal

object Main {
  def main(args: Array[String]): Unit = {
    val p = Pipeline("loooooooool")
    println(s"p.nativeHandle: ${p.nativeHandle}")
    val result = p.test()
    println(result)

    p.dispose()
    println(s"p.nativeHandle: ${p.nativeHandle}")
    //assert(result == 42)
  }

}
