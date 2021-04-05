# gigsl - GObject introspection bindings for the GSL

The goal of this project is to provide wrapper bindings with all the necessary
infrastructure for the [Gnu Scientific Library (GSL)](https://www.gnu.org/software/gsl/)
to be adpoted within the GObject type system and [GObject introspection](https://gi.readthedocs.io/en/latest/)
language bindings.
This is especially important if matrix- or vector-types should be used together
with a Glib-based project or in different languages then C.

## Recommended use-case

* You have an extensive project, written in C that relies on GSL-functionality.
  Now you want to add functionalities, written in different languages (such as
  Python, Vala, etc.) or create a user interface (e.g. with GTK) to evaluate
  the output data. In this case - gigsl might help you to provide
  language-bindings for matrices or vectors.
* You have a project that already uses GObject introspection as language binding
  and is based on Glib or GTK. In this case, gigsl might provide you with an
  easy solution to integrate some numerical functions with GSL into your
  project as well.

## Explicitly not recommended use-cases

* You want to write a project from scratch and you want to use GTK and GSL,
  because of some advantages of one and the other. You are directly planning
  to integrate an adapter between both. In this case, I recommend that you start
  developing with one or the other and replace the other from the beginning on
  with a (second best) solution that fits directly in the language or eco-system
  you want to use. This glue code is really just a work-around to support
  integrations that did require both eco-systems. It is not recommended to use
  it as an alternative for e.g. [numpy](https://github.com/numpy/numpy).

# Disclaimer

gigsl is still in an early development state. Therefore, not all GSL data types
are supported. Also, ABI- and API-stability might change regularly and will only
lead to an increase of the minor-version, until version 1.0.0 is reached. From
this version on, it is the goal to use semantic versioning.

# General TODOs

* Find a good workaround for the gsl-complex problem.
* Add the following types/functions as well:
  * permutations
  * sorts
  * spmatrix
  * statistics
  * complex

