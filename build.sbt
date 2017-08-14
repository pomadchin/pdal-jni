name := "pdal-jni"
version := "0.1.0-SNAPSHOT"
scalaVersion := "2.11.11"
crossScalaVersions := Seq("2.12.3", "2.11.11")
organization := "com.azavea"
scalacOptions ++= Seq(
  "-deprecation",
  "-unchecked",
  "-Yinline-warnings",
  "-language:implicitConversions",
  "-language:reflectiveCalls",
  "-language:higherKinds",
  "-language:postfixOps",
  "-language:existentials",
  "-feature"
)

resolvers ++= Seq(
  Resolver.sonatypeRepo("releases"),
  Resolver.sonatypeRepo("snapshots")
 )

fork := true

javaOptions += "-Djava.library.path=/usr/local/lib"

libraryDependencies ++= Seq(
  "io.pdal" %% "pdal" % "1.4.1-SNAPSHOT",
  "io.pdal" %% "pdal-scala" % "1.4.1-SNAPSHOT",
  "org.scalatest"  %% "scalatest" % "3.0.3"  % "test"
)
