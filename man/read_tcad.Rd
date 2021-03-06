% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/read_tcad.R
\name{read_tcad}
\alias{read_tcad}
\title{Read a TransCAD binary file}
\usage{
read_tcad(file, strip_whitespace = TRUE)
}
\arguments{
\item{file}{The path and name of the binary data file, e.g.
\code{data/foo.bin}. The \code{DCB} dictionary file should be in the same
folder.}

\item{strip_whitespace}{Should excess whitespace be stripped from character 
variables? \code{default = TRUE}}
}
\description{
Read a TransCAD \code{.bin} binary data file into the workspace.
}
\details{
If any variable descriptions are available in the dictionary file, 
  then they will be appended to the \code{attr(*, "label")} attribute (and 
  therefore visible in RStudio).
}
\examples{
read_tcad(file.path(system.file("extdata", "TransitR.bin", package = "tcadr")))

}
