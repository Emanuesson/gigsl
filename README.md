# Description

The goal of this project is to provide wrapper types with alle the necessary
infrastructure for the Gnu Scientific Library (GSL) to be easily usable with
the Glib type-system and GObject Introspection.
This is especially important if matrix- or vector-types should be used together
with a Glib-based infrastructure.

## Goal

The library contains the glue code to use the GSL with the GObject Introspection
language bindings. By doing so, it is possible to use GSL-based data structures
and functions from within GObject-based projects.

## Recommended use-case

* You have a project, written in C that relies on GSL-functionality. Now you
  want to use functionalities, written in different languages (such as Python,
  Vala, etc.) on some of the output data. In this case - gigsl might help you to
  provide language-bindings for the GSL-based data-structures of your code.
* You have a project that already uses GObject introspection as language binding
  and is based on Glib-2 or GTK. In this case, gigsl might provide you an easy
  way to integrate the GSL into your project as well.

## Explicitly not recommended use-cases

* You want to write a project from scratch and you want to use GTK and GSL,
  because of some advantages of one and the other. You are directly planning
  to integrate an adapter between both. In this case, I recommend that you start
  developing with one or the other and replace the other from the beginning on
  with a (second best) solution that fits directly in the language or eco-system
  you want to use. This glue code is really just a work-around to support
  integrations that did require both eco-systems.

# Disclaimer

gigsl is still in an early development state. Therefore, not all GSL data types
are supported. Also, ABI- and API-stability might change regularly and will only
lead to an increase of the minor-version, until we reach version 1.0.0. From
this version on, it is the goal to use semantic versioning.

# General TODOs

* Find a good workaround for the gsl-complex problem.
* Add the following types/functions as well:
  * permutations
  * sorts
  * spmatrix
  * statistics
  * complex

