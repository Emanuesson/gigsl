# Description

The goal of this project is to provide wrapper types with alle the necessary
infrastructure for the Gnu Scientific Library (GSL) to be easily usable with
the Glib type-system and GObject Introspection.
This is especially important if matrix- or vector-types should be used together
with a Glib-based infrastructure.

# General TODOs

* Find a good workaround for the gsl-complex problem.
* Investigate, why writing to the block-data from the introspected code doeas
  basically nothing.
* Add the following types/functions as well:
  * permutations
  * sorts
  * spmatrix
  * statistics
  * complex'

